#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include "main.h"

/**
 * print_elf_header - Displays info from ELF header of file
 * @filename: Name of ELF file
 * Return: 0
 */
int print_elf_header(const char *filename)
{
	int fed;
	Elf64_Ehdr elf_header;

	fed = open(filename, O_RDONLY);
	if (fed == -1)
	{
		dprintf(2, "Error: Can't open file %s\n", filename);
		return (98);
	}

	if (read(fed, &elf_header, sizeof(Elf64_Ehdr)) != sizeof(Elf64_Ehdr))
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		close(fed);
		return (98);
	}

	if (elf_header.e_ident[EI_MAG0] != ELFMAG0 ||
		elf_header.e_ident[EI_MAG1] != ELFMAG1 ||
		elf_header.e_ident[EI_MAG2] != ELFMAG2 ||
		elf_header.e_ident[EI_MAG3] != ELFMAG3)
	{
		dprintf(2, "Error: Not an ELF file: %s\n", filename);
		close(fed);
		return (98);
	}

	printf("ELF Header:\n");
	printf("  Magic:  %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02x %02lx\n",
			elf_header.e_ident[EI_MAG0], elf_header.e_ident[EI_MAG1],
			elf_header.e_ident[EI_MAG2], elf_header.e_ident[EI_MAG3],
			elf_header.e_ident[EI_CLASS], elf_header.e_ident[EI_DATA],
			elf_header.e_ident[EI_VERSION], elf_header.e_ident[EI_OSABI],
			elf_header.e_ident[EI_ABIVERSION], elf_header.e_ident[EI_PAD],
			elf_header.e_ident[EI_NIDENT], elf_header.e_type,
			elf_header.e_machine, elf_header.e_version, elf_header.e_entry);

	close(fed);
	return (0);
}

/**
 * main - Entry
 * @argc: argument
 * @argv: arg
 * Return: 0
 */
int main(int argc, char **argv)
{
	int result;

	if (argc != 2)
	{
		dprintf(2, "Usage: %s elf_filename\n", argv[0]);
		return (98);
	}
	result = print_elf_header(argv[1]);

	return (result);
}
