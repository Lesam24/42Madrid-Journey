class Plant:
    def __init__(self, name: str, height: float, aged: int,
                 grow_index: float) -> None:
        self.name = name
        self._height = height
        self._aged = aged
        self.grow_index = grow_index
        self._stats = self.PlantStats()

    class PlantStats:
        def __init__(self) -> None:
            self._grow_calls = 0
            self._age_calls = 0
            self._show_calls = 0

        def increment_grow_calls(self) -> None:
            self._grow_calls += 1

        def increment_age_calls(self) -> None:
            self._age_calls += 1

        def increment_show_calls(self) -> None:
            self._show_calls += 1

        def display_stats(self) -> None:
            print(f"Stats: {self._grow_calls} grow, "
                  f"{self._age_calls} age, {self._show_calls} show")

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
        self._stats.increment_show_calls()

    def grow(self) -> None:
        self.set_height(round((self.get_height() + self.grow_index), 1))
        self._stats.increment_grow_calls()

    def age(self) -> None:
        self.set_age(self.get_age() + 1)
        self._stats.increment_age_calls()

    def display_stats(self) -> None:
        self._stats.display_stats()

    @staticmethod
    def is_older_than_one_year(age: int) -> bool:
        return age > 365

    @classmethod
    def create_anonymous(cls) -> "Plant":
        return cls("Unkown Plant", 0.0, 0, 1.0)


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
        self._stats: "Tree.PlantStats"
        self.trunk_size = trunk_size
        self.shade_w = shade_w
        self.shade_h = shade_h

    class PlantStats(Plant.PlantStats):
        def __init__(self) -> None:
            super().__init__()
            self._shade_calls = 0

        def increment_shade_calls(self) -> None:
            self._shade_calls += 1

        def display_stats(self) -> None:
            super().display_stats()
            print(f" {self._shade_calls} shade")

    def show(self) -> None:
        super().show()
        print(f" Trunk diameter: {self.trunk_size}")

    def produce_shade(self) -> None:
        self.shades = True
        self._stats.increment_shade_calls()
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


class Seed(Flower):
    def __init__(self, name: str, height: float, aged: int, grow_index: float,
                 color: str, bloomed: bool) -> None:
        super().__init__(name, height, aged, grow_index, color, bloomed)
        self._seeds = 0

    def bloom(self) -> None:
        super().bloom()
        self._seeds += 5

    def show(self) -> None:
        super().show()
        print(f" Seeds: {self._seeds}")


def ft_display_stats(plant: Plant) -> None:
    print(f"[statistics for {plant.name}]")
    plant.display_stats()


def ft_garden_analytics() -> None:
    print("=== check year-old")
    print(f"Is 30 days more than a yer? -> "
          f"{Plant.is_older_than_one_year(30)}")
    print(f"Is 400 days more than a year? -> "
          f"{Plant.is_older_than_one_year(400)}")

    print("=== Flower ===")
    rose = Flower("Rose", 15.0, 10, 1.3, "red", False)
    rose.show()
    ft_display_stats(rose)
    print("[asking the Rose to grow and bloom]")
    rose.grow()
    rose.bloom()
    rose.show()
    ft_display_stats(rose)

    print("=== Tree ===")
    oak = Tree("Oak", 200.0, 365, 1.2, 5.0, 100.0, 200.0)
    oak.show()
    ft_display_stats(oak)
    print("[asking the Oak to produce shade]")
    oak.produce_shade()
    ft_display_stats(oak)

    print("=== Seed ===")
    sunflower_seed = Seed("Sunflower Seed", 0.5, 5, 1.5, "yellow", False)
    sunflower_seed.show()
    print("[asking the Sunflower Seed to grow, age and bloom]")
    sunflower_seed.grow()
    sunflower_seed.age()
    sunflower_seed.bloom()
    ft_display_stats(sunflower_seed)

    print("=== Anonymous ===")
    anonymous_plant = Plant.create_anonymous()
    anonymous_plant.show()
    ft_display_stats(anonymous_plant)


if __name__ == "__main__":
    print("=== Garden statistics ===")
    ft_garden_analytics()
