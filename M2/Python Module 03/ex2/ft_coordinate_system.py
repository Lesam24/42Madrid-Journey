#!/usr/bin/env python3

import math


def get_player_pos() -> tuple[float, float, float]:
    pos = input("Enter player position (x, y, z): ")
    coords = pos.split(",")
    if len(coords) != 3:
        print("Invalid syntax")
        return get_player_pos()
    try:
        x = float(coords[0])
    except ValueError as error:
        print(f"Error on parameter '{coords[0].strip()}': {error}")
        return get_player_pos()
    try:
        y = float(coords[1])
    except ValueError as error:
        print(f"Error on parameter '{coords[1].strip()}': {error}")
        return get_player_pos()
    try:
        z = float(coords[2])
    except ValueError as error:
        print(f"Error on parameter '{coords[2].strip()}': {error}")
        return get_player_pos()
    return (x, y, z)


def ft_coordinate_system() -> None:
    print("Get a first set of coordinates")
    first_pos = get_player_pos()
    print(f"Got a first tuple: {first_pos}")
    print(f"It includes: X={first_pos[0]}, Y={first_pos[1]}, Z={first_pos[2]}")
    temp_pos = first_pos
    distance_origin = math.sqrt(temp_pos[0]**2+temp_pos[1]**2+temp_pos[2]**2)
    print(f"Distance to center: {round(distance_origin, 4)}")
    print()
    print("Get a second set of coordinates")
    second_pos = get_player_pos()
    x1 = first_pos[0]
    y1 = first_pos[1]
    z1 = first_pos[2]
    x2 = second_pos[0]
    y2 = second_pos[1]
    z2 = second_pos[2]
    distance_between = math.sqrt((x2-x1)**2+(y2-y1)**2+(z2-z1)**2)
    print(f"Distance between positions: {round(distance_between, 4)}")


if __name__ == "__main__":
    print("=== Game Coordinate System ===")
    ft_coordinate_system()
