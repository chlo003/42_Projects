import sys

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ft_ancient_text.py <file>")
    print("=== Cyber Archives Recovery ===")
    print(f"Accessing file '{sys.argv[1]}'")
    try:
        show = open(sys.argv[1], "r")
        print("---\n")
        print(show.read())
        print("---")
        show.close()
        print(f"File '{sys.argv[1]}' closed.")
    except (FileNotFoundError, PermissionError) as e:
        print(f"Error opening file '{sys.argv[1]}': {e}")
