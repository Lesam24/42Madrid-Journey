#!/usr/bin/env python3

class GardenError(Exception):
    def __init__(self, message: str = "Unknown garden error") -> None:
        super().__init__(message)


class PlantError(GardenError):
    def __init__(self, message: str = "Unknown plant error") -> None:
        super().__init__(message)


class WaterError(GardenError):
    def __init__(self, message: str = "Unknown water error") -> None:
        super().__init__(message)


def test_custom_errors() -> None:
    print("Testing PlantError...")
    try:
        raise PlantError("The tomato plant is wilting!")
    except PlantError as error:
        print(f"Caught {type(error).__name__}: {error}")

    print("\nTesting WaterError...")
    try:
        raise WaterError("Not enough water in the tank!")
    except WaterError as error:
        print(f"Caught {type(error).__name__}: {error}")

    print("\nTesting all garden errors...")

    for errors in (PlantError("The tomato plant is wilting!"),
                   WaterError("Not enough water in the tank!")):
        try:
            raise errors
        except GardenError as error:
            print(f"Caught GardenError: {error}")


if __name__ == "__main__":
    print("=== Garden Custom Errors Demo ===")
    print("")
    test_custom_errors()
    print("")
    print("All custom error types work correctly!")
