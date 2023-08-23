#!/usr/bin/python3
"""
this returns the perimeter of an island
"""


def island_perimeter(grid):
    """
    calculates the island perimeter
    """

    perimeter = 0
    add = 0
    row = len(grid)
    if grid != []:
        col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                add += 1
                if (j > 0 and grid[i][j - 1] == 1):
                    perimeter += 1
                if (i > 0 and grid[i - 1][j] == 1):
                    perimeter += 1
    return add * 4 - perimeter * 2
