#!/usr/bin/python3
"""Defines the 5-island_perimeter module"""


def island_perimeter(grid):
    """returns the perimeter of the island described in grid:
    Args:
        grid:a list of list of integers
    """
    width = len(grid[0])
    height = len(grid)

    x = 0
    y = 0

    for col in range(height):
        for row in range(width):
            if grid[col][row] == 0:
                if (row > 0 and grid[col][row - 1] == 1):
                    x += 1
                if (col > 0 and grid[col - 1][row] == 1):
                    y += 1
                if (row < width - 1 and grid[col][row + 1] == 1):
                    x += 1
                if (col < height - 1 and grid[col + 1][row] == 1):
                    y += 1
    return x + y
