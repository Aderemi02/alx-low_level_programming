#!usr/bin/python3
"""
this returns the perimeter of an island
"""


def island_perimeter(grid):
    """
    calculates the island perimeter
    """

    perimeter = 0
    row = len(grid)
    if grid != []:
        col = len(grid[0])

    for i in range(row):
        for j in range(col):
            if grid[i][j] == 1:
                if ((i - 1) == -1 or grid[i - 1][j] == 0):
                    perimeter += 1
                if ((i + 1) == row or grid[i + 1][j] == 0):
                    perimeter += 1
                if ((j - 1) == -1 or grid[i][j - 1] == 0):
                    perimeter += 1
                if ((i + 1) == col or grid[i][j + 1] == 0):
                    perimeter += 1
    return perimeter
