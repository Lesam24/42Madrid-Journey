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


def water_plant(plant_name: str) -> None:
    if plant_name != plant_name.capitalize():
        raise PlantError(f"Invalid plant name to water: '{plant_name}'")
    print(f"Watering {plant_name}: [OK]")


def test_watering_system(plants: list[str]) -> None:
    print("Opening watering system...")
    try:
        for i in plants:
            water_plant(i)
    except PlantError as error:
        print(f"Caught PlantError: {error}")
        print(".. ending tests and returning to main")
    finally:
        print("Closing watering system...")


if __name__ == "__main__":
    print("=== Garden Watering System ===")
    print("Testing valid plants...")
    test_watering_system(["Tomato", "Lettuce", "Carrots"])
    print("\nTesting invalid plants...")
    test_watering_system(["Tomato", "lettuce", "Carrots"])
    print("\nCleanup always happens, even with errors!")
