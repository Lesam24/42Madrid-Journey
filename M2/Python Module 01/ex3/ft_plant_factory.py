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


def ft_plant_factory() -> None:
    plants = [Plant("Rose", 25.0, 30, 0.3),
              Plant("Oak", 200.0, 365, 2),
              Plant("Cactus", 5.0, 90, 0.3),
              Plant("Sunflower", 80.0, 45, 0.5),
              Plant("Fern", 15.0, 120, 0.2)]

    print("=== Plant Factory Output ===")

    for plant in plants:
        print("Created: ", end="")
        plant.show()


if __name__ == "__main__":
    ft_plant_factory()
