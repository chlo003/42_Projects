import sys


if __name__ == "__main__":
    print("=== Command Quest ===")
    print(f"Program name: {sys.argv[0]}")
    argv_number = len(sys.argv)
    if argv_number >= 2:
        print(f"Arguments received: {argv_number - 1}")
        number = 1
        for element in sys.argv[1:]:
            print(f"Argument {number}: {element}")
            number = number + 1
    else:
        print("No arguments provided!")
    print(f"Total arguments: {argv_number}")
