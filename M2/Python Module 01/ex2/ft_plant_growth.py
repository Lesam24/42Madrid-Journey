#!/usr/bin/env python3

class Plant:
    def __init__(self, name: str, height: float, aged: int,
                 grow_index: float) -> None:

        self.name = name
        self.height = height
        self.aged = aged
        self.grow_index = grow_index

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.aged} days old.")

    def grow(self) -> None:
        self.height = round(self.height + self.grow_index, 1)

    def age(self) -> None:
        self.aged += 1


def ft_plant_growth() -> None:
    plant = Plant("Rose", 25, 30, 0.3)
    start_height = plant.height
    print("=== Garden Plant Growth ===")
    plant.show()
    for i in range(7):
        print(f"=== Day {i + 1} ===")
        plant.grow()
        plant.age()
        plant.show()

    total_growth = round(plant.height - start_height, 1)
    print("=== Growth Summary ===")
    print(f"{plant.name} grew {total_growth}cm this week")


if __name__ == "__main__":
    ft_plant_growth()
