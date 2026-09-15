#!/usr/bin/env python3

class Plant:
    def __init__(self, name: str, height: int, age: int) -> None:
        self.name = name
        self.height = height
        self.age = age

    def show(self) -> None:
        print(f"{self.name}: {self.height}cm, {self.age} days old.")


plant1 = Plant(name="Rose", height=25, age=35)
plant2 = Plant(name="Sunflower", height=80, age=45)
plant3 = Plant(name="Cactus", height=15, age=120)

garden = [plant1, plant2, plant3]


def ft_garden_data() -> None:
    print("=== Garden Plant Registry ===")
    for plant in garden:
        plant.show()


if __name__ == "__main__":
    ft_garden_data()
