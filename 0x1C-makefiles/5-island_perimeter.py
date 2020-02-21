#!/usr/bin/python3
""" This function takes a matrix and calculates the perimeter of the 'island'
    contained in it. The island is defined as:

      • grid is a list of list of integers:
         → 0 represents a water zone
         → 1 represents a land zone
         → One cell is a square with side length 1
         → Grid cells are connected horizontally/vertically (not diagonally).
         →  Grid is rectangular, width and height don’t exceed 100
      • Grid is completely surrounded by water, and there is one island (or not
        hing).
      • The island doesn’t have “lakes” (water inside that isn’t connected to
        the water around the island).                                       """


def island_perimeter(grid):
    """ Grid is the inserted atrix to calculate the perimeter, it's always a
        rectangular matrix.                                                 """
    perimeter = 0

    index = 1

    while (index < len(grid) - 1):
        jndex = 1
        while (jndex < len(grid[index]) - 1):
            if (grid[index][jndex] == 1):
                proximity_count = [grid[index][jndex - 1],
                                   grid[index][jndex + 1],
                                   grid[index - 1][jndex],
                                   grid[index + 1][jndex]]  # →, ←, ↑, ↓
                perimeter += 4 - sum(proximity_count)

            jndex += 1

        index += 1

    return perimeter

if __name__ == "__main__":
    main()
