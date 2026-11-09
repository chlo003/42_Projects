def input_temperature(temp_str: str) -> int:
    convert_str = int(temp_str)
    if convert_str >= 0 and convert_str <= 40:
        return convert_str
    else:
        raise ValueError(convert_str)


def test_temperature() -> None:
    print("Input data is '25'")
    try:
        data = input_temperature('25')
        print(f"Temperature is now {data}°C")
    except ValueError as e:
        print(f"Caught input_temperature error: {e}")
    print()
    print("Input data is 'abc'")
    try:
        data = input_temperature('abc')
        print(f"Temperature is now {data}°C")
    except ValueError as e:
        print(f"Caught input_temperature error: {e}")
    print()
    print("Input data is '100'")
    try:
        data = input_temperature('100')
        print(f"Temperature is now {data}°C")
    except ValueError as e:
        print(f"Caught input_temperature error: "
              f"{e}°C is too hot for plants (max 40°C)")
    print()
    print("Input data is '-50'")
    try:
        data = input_temperature('-50')
        print(f"Temperature is now {data}°C")
    except ValueError as e:
        print(f"Caught input_temperature error: "
              f"{e}°C is too cold for plants (min 0°C)")


if __name__ == "__main__":
    print("=== Garden Temperature Checker ===")
    print()
    test_temperature()
    print()
    print("All tests completed - program didn't crash!")
