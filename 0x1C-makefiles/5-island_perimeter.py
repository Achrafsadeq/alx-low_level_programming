#!/usr/bin/python3
"""
Module to calculate the perimeter of an island in a grid.
"""


def island_perimeter(grid):
    """
    Calculate the perimeter of the island in the grid.

    Args:
        grid (List[List[int]]): A 2D grid representing land and water.

    Returns:
        int: The perimeter of the island.
    """
    perimeter = 0
    rows, cols = len(grid), len(grid[0])

    for r in range(rows):
        for c in range(cols):
            if grid[r][c] == 1:
                # Check 4 adjacent cells
                # Top
                if r == 0 or grid[r-1][c] == 0:
                    perimeter += 1
                # Bottom
                if r == rows-1 or grid[r+1][c] == 0:
                    perimeter += 1
                # Left
                if c == 0 or grid[r][c-1] == 0:
                    perimeter += 1
                # Right
                if c == cols-1 or grid[r][c+1] == 0:
                    perimeter += 1

    return perimeter
