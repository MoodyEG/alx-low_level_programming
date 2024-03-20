#!/usr/bin/python3
""" Island Perimeter """


def island_perimeter(grid):
    """ Calcualtes the perimeter of the island """
    parameter = 0
    for row in range(len(grid)):
        for col in range(len(grid[0])):
            if grid[row][col] == 1:
                if row == 0 or grid[row - 1][col] == 0:
                    parameter += 1
                if col == 0 or grid[row][col - 1] == 0:
                    parameter += 1
                if (row + 1) == len(grid) or grid[row + 1][col] == 0:
                    parameter += 1
                if (col + 1 ) == len(grid[0]) or grid[row][col + 1] == 0:
                    parameter += 1
    return parameter
