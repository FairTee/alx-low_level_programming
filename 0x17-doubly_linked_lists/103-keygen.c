#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <openssl/md5.h>

/**
 * main - Generates a key based on the user's username using MD5.
 *
 * Return: 0 on success.
 */
int main()
{
	char username[100];
	char key[MD5_DIGEST_LENGTH];

	printf("Enter your username: ");
	scanf("%s", username);

	MD5((unsigned char *)username, strlen(username), (unsigned char *)key);

	printf("Your key is: %s\n", key);

	return 0;
}
