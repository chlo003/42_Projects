import sys

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: ft_ancient_text.py <file>")
    else:
        print("=== Cyber Archives Recovery & Preservation ===")
        print(f"Accessing file '{sys.argv[1]}'")

        try:
            print("---\n")
            file = open(sys.argv[1], "r")
            see_content = file.read()
            print(see_content)
            print("\n---")
            file.close()
            print(f"File '{sys.argv[1]}' closed.\n")

            print("Transform data:")
            print("---\n")
            all_lignes = see_content.split('\n')
            new_ligne = []
            for ligne in all_lignes:
                new_ligne.append(ligne + "#")
            join_all = '\n'.join(new_ligne)
            print(f"{join_all}\n")

            print("---")
            sys.stdout.write("Enter new file name (or empty): ")
            sys.stdout.flush()
            name = sys.stdin.readline()
            name = name.rstrip('\n')

            if name:
                f = open(name, "w")
                f.write(join_all)
                f.close()
                print(f"Saving data to {name}")
                print(f"Data saved in file {name}.")
            else:
                print("Not saving data.")
        except (FileNotFoundError, PermissionError) as e:
            sys.stderr.write(f"[STDERR] Error opening file "
                             f"'{sys.argv[1]}': {e}")
