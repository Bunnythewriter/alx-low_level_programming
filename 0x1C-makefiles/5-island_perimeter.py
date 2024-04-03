#!/usr/bin/python3
"""Defines a function that returns the perimeter of an island"""


def island_perimeter(island):
    """Returns the perimeter of an island"""
    perimeter = 0
    for row in range(len(island)):
        for col in range(len(island[row])):
            if island[row][col] == 1:
                if row == 0 or island[row - 1][col] == 0:
                    perimeter += 1
                if row == len(island) - 1 or island[row + 1][col] == 0:
                    perimeter += 1
                if col == 0 or island[row][col - 1] == 0:
                    perimeter += 1
                if col == len(island[row]) - 1 or island[row][col + 1] == 0:
                    perimeter += 1
    return perimeter
