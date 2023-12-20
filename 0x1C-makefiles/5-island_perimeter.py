#!/usr/bin/python3

def island_perimeter(grid):
    """
    Calculate the perimeter of the island described in grid.

    Args:
    - grid: A list of lists of integers representing the island.

    Returns:
    - The perimeter of the island.
    """
    perimeter = 0

    for i in range(len(grid)):
        for j in range(len(grid[0])):
            if grid[i][j] == 1:
                # Check top edge
                if i == 0 or grid[i - 1][j] == 0:
                    perimeter += 1
                # Check bottom edge
                if i == len(grid) - 1 or grid[i + 1][j] == 0:
                    perimeter += 1
                # Check left edge
                if j == 0 or grid[i][j - 1] == 0:
                    perimeter += 1
                # Check right edge
                if j == len(grid[0]) - 1 or grid[i][j + 1] == 0:
                    perimeter += 1

    return perimeter