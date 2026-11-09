class GardenError(Exception):
    def __init__(self, custom_error: str = "Unknown plant error"):
        super().__init__(custom_error)


class PlantError(GardenError):
    def __init__(self, custom_error: str = "Unknown plant error"):
        super().__init__(custom_error)


class WaterError(GardenError):
    def __init__(self, custom_error: str = "Unknown plant error"):
        super().__init__(custom_error)


def ft_raise_and_show_catching_errors() -> None:
    print("=== Custom Garden Errors Demo ===")
    print()
    print("Testing PlantError...")
    try:
        raise PlantError("The tomato plant is wilting!")
    except PlantError as e:
        print(f"Caught {e.__class__.__name__}: {e}")
    print()
    print("Testing WaterError...")
    try:
        raise WaterError("Not enough water in the tank!")
    except WaterError as e:
        print(f"Caught {e.__class__.__name__}: {e}")
    print()
    print("Testing catching all garden errors...")
    try:
        raise PlantError("The tomato plant is wilting!")
    except GardenError as e:
        print(f"Caught GardenError: {e}")
    try:
        raise WaterError("Not enough water in the tank!")
    except GardenError as e:
        print(f"Caught GardenError: {e}")
    print()
    print("All custom error types work correctly!")


if __name__ == "__main__":
    ft_raise_and_show_catching_errors()
