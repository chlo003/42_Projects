def secure_archive(file_name: str, action: str, text: str) -> tuple:
    if action == "r":
        try:
            with open(file_name, action) as file:
                content = file.read()
            return (True, content)
        except (FileNotFoundError, PermissionError) as e:
            return (False, str(e))
    elif action == "w":
        try:
            with open(file_name, action) as file:
                file.write(text)
            return (True, "Content successfully written to file")
        except (FileNotFoundError, PermissionError) as e:
            return (False, str(e))
    else:
        return (False, "Can't accept this demand")


if __name__ == "__main__":
    print("=== Cyber Archives Security ===\n")

    print("Using 'secure_archive' to read from a nonexistent file:")
    print(secure_archive("foo", "r", ""))
    print()
    print("Using 'secure_archive' to read from an inaccessible file:")
    print(secure_archive("/etc/shadow", "r", ""))
    print()
    print("Using 'secure_archive' to read from a regular file:")
    print(secure_archive("ancient_fragment.txt", "r", ""))
    print()
    print("Using 'secure_archive' to write previous content to a new file:")
    print(secure_archive("new_file.txt", "w",
                         "Content successfully written to file"))
    print()
