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
            print(f"Age updated: {self.get_age()} days")
        else:
            print(f"{self.name}: Error: age can't be negative")
            print("Age update rejected")

    def set_height(self, height: float) -> None:
        if height > 0.0:
            self._height = height
            print(f"Height updated: {self.get_height()}cm")
        else:
            print(f"{self.name}: Error: height can't be negative")
            print("Height update rejected")

    def show(self) -> None:
        print(f"{self.name}: {self.get_height()}cm, {self.get_age()} days old")

    def grow(self) -> None:
        self.set_height(round((self.get_height() + self.grow_index), 1))

    def age(self) -> None:
        self.set_age(self.get_age() + 1)


def ft_garden_security() -> None:
    print("=== Garden Security System ===")
    rose = Plant("Rose", 15.0, 10, 1.4)
    print("Plant created: ", end="")
    rose.show()
    print()
    rose.set_height(25.0)
    rose.set_age(30)
    print()
    rose.set_height(-25.0)
    rose.set_age(-30)
    print()
    print("Current state: ", end="")
    rose.show()


if __name__ == "__main__":
    ft_garden_security()
