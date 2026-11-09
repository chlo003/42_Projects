def input_temperature(temp_str: str) -> int:
    return int(temp_str)


def test_temperature() -> None:
    print("Input data is '25'")
    try:
        data = input_temperature('25')
        print(f"Temperature is now {data}°C")
    except ValueError as e:
        print(f"Caught input_temperature error: "
              f"invalid literal for int() with base 10: {e}")
    print()
    print("Input data is 'abc'")
    try:
        data = input_temperature('abc')
        print(f"Temperature is now {data}°C")
    except ValueError as e:
        print(f"Caught input_temperature error: {e}")


if __name__ == "__main__":
    print("=== Garden Temperature ===")
    print()
    test_temperature()
    print()
    print("All tests completed - program didn't crash!")
