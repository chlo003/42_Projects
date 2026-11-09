import math


def get_player_pos() -> tuple[float, ...]:
    while True:
        coordinates = input("Enter new coordinates "
                            "as floats in format 'x,y,z': ")
        good_syntax = coordinates.split(",")
        if len(good_syntax) == 3:
            try:
                store_tuple = []
                for element in good_syntax:
                    store_tuple.append(float(element))
            except ValueError as e:
                print(f"Error on parameter '{element}': {e}")
                continue
            return tuple(store_tuple)
        else:
            print("Invalid syntax")


if __name__ == "__main__":
    print("=== Game Coordinate System ===\n")
    print("Get a first set of coordinates")
    x, y, z = get_player_pos()
    print(f"Got a first tuple: {x, y, z}")
    print(f"It includes: X={x}, Y={y}, Z={z}")
    print(f"Distance to center: "
          f"{round(math.sqrt((x)**2 + (y)**2 + (z)**2), 4)}")
    print()
    print("Get a second set of coordinates")
    x2, y2, z2 = get_player_pos()
    print(f"Distance between the 2 sets of coordinates: "
          f"{round(math.sqrt((x2-x)**2 + (y2-y)**2 + (z2-z)**2), 4)}")
