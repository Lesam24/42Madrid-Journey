#!/usr/bin/env python3

class Plant:
    def __init__(self, name: str, height: float, aged: int,
                 grow_index: float) -> None:
        self.name = name
        self._height = height
        self._aged = aged
        self.grow_index = grow_index

    def get_age(self) -> int:
        return self._aged

    def get_height(self) -> float:
        return self._height

    def set_age(self, age: int) -> None:
        if age > 0:
            self._aged = age
        else:
            print(f"{self.name}: Error: age can't be negative")
            print("Age update rejected")

    def set_height(self, height: float) -> None:
        if height > 0.0:
            self._height = height
        else:
            print(f"{self.name}: Error: height can't be negative")
            print("Height update rejected")

    def show(self) -> None:
        print(f"{self.name}: {self.get_height()}cm, {self.get_age()} days old")

    def grow(self) -> None:
        self.set_height(round((self.get_height() + self.grow_index), 1))

    def age(self) -> None:
        self.set_age(self.get_age() + 1)


class Flower(Plant):
    def __init__(self, name: str, height: float, aged: int,
                 grow_index: float, color: str, bloomed: bool) -> None:
        super().__init__(name, height, aged, grow_index)
        self.color = color
        self.bloomed = bloomed

    def show(self) -> None:
        super().show()
        print(f" Color: {self.color}")
        if self.bloomed:
            status = "is blooming beautifully!"
        else:
            status = "not bloomed yet"
        print(f"{self.name} {status}")

    def bloom(self) -> None:
        self.bloomed = True
        print(f"[asking the {self.name} to bloom]")


class Tree(Plant):
    def __init__(self, name: str, height: float, aged: int, grow_index: float,
                 trunk_size: float, shade_w: float, shade_h: float) -> None:
        super().__init__(name, height, aged, grow_index)
        self.trunk_size = trunk_size
        self.shade_w = shade_w
        self.shade_h = shade_h

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_size}")

    def produce_shade(self) -> None:
        print(f"Tree {self.name} now produces", end="")
        print(f"a shade of {self.shade_h}cm long and {self.shade_w}cm wide.")


class Vegetable(Plant):
    def __init__(self, name: str, height: float, aged: int,
                 grow_index: float, harvest: str, nutrition_v: int) -> None:
        super().__init__(name, height, aged, grow_index)
        self.harvest = harvest
        self.nutrition_v = nutrition_v

    def show(self) -> None:
        super().show()
        print(f" Harvest season: {self.harvest}")
        print(f" Nutritional value: {self.nutrition_v}")

    def age(self) -> None:
        super().age()
        self.nutrition_v += 1

    def grow(self) -> None:
        super().grow()
        self.nutrition_v += 1


def ft_plant_types() -> None:
    rose = Flower("Rose", 15.0, 10, 1.3, "red", False)
    oak = Tree("Oak", 200.0, 365, 1.2, 5.0, 100.0, 200.0)
    tomato = Vegetable("Tomato", 5.0, 10, 1.15, "April", 0)
    print("=== Flower ===")
    rose.show()
    rose.bloom()
    rose.show()
    print("")
    print("=== Tree ===")
    oak.show()
    oak.produce_shade()
    print("")
    print("=== Vegetable ===")
    tomato.show()
    print("[make tomato grow for 20 days]")
    for i in range(20):
        tomato.grow()
        tomato.age()
    tomato.show()


if __name__ == "__main__":
    ft_plant_types()
