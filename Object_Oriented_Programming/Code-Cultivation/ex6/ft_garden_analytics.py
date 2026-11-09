class Plant:
    class Statistic():
        def __init__(self) -> None:
            self.stat_grow = 0
            self.stat_age = 0
            self.stat_show = 0

        def hold_data_grow(self) -> None:
            self.stat_grow = self.stat_grow + 1

        def hold_data_age(self) -> None:
            self.stat_age = self.stat_age + 1

        def hold_data_show(self) -> None:
            self.stat_show = self.stat_show + 1

        def add_show(self) -> None:
            print(f"Stats: {self.stat_grow} grow,"
                  f"{self.stat_age} age,"
                  f"{self.stat_show} show")

    def __init__(self, name: str, height: float, age: int) -> None:
        self.name = name
        self.height = height
        self.day = age
        self.stats: Plant.Statistic = self.Statistic()

    def show(self) -> None:
        print(f"{self.name}: {round(self.height, 1)}cm, {self.day} days old")
        self.stats.hold_data_show()

    def grow(self, tall: float) -> None:
        self.height = self.height + tall
        self.stats.hold_data_grow()

    def age(self, old: int) -> None:
        self.day = self.day + old
        self.stats.hold_data_age()

    @staticmethod
    def check(age: int) -> int:
        return age > 365

    @classmethod
    def create(cls) -> Plant:
        return cls("Unknown plant", 0.0, 0)


def show_stats(plant: Plant) -> None:
    print(f"[statistics for {plant.name}]")
    plant.stats.add_show()


class Flower(Plant):
    def __init__(self, name: str, height: float, age: int, color: str):
        super().__init__(name, height, age)
        self.color = color
        self.has_bloom = False

    def show(self) -> None:
        super().show()
        print(f"Color: {self.color}")
        if self.has_bloom:
            print(f"{self.name} is blooming beautifully!")
        else:
            print(f"{self.name} has not bloom yet")

    def make_bloom(self) -> None:
        self.has_bloom = True


class Tree(Plant):
    class Statistic(Plant.Statistic):
        def __init__(self) -> None:
            super().__init__()
            self.stat_shade = 0

        def add_show(self) -> None:
            super().add_show()
            print(f"{self.stat_shade} shade")

        def hold_data_shade(self) -> None:
            self.stat_shade = self.stat_shade + 1

    def __init__(self, name: str, height: float, age: int,
                 trunk_diameter: float) -> None:
        super().__init__(name, height, age)
        self.trunk_diameter = trunk_diameter
        self.stats: Tree.Statistic = self.Statistic()

    def show(self) -> None:
        super().show()
        print(f"Trunk diameter: {self.trunk_diameter}cm")

    def produce_shade(self) -> None:
        print("[asking the oak to produce shade]")
        print(f"Tree Oak now produces a shade of {self.height}cm long and "
              f"{self.trunk_diameter}cm wide")
        self.stats.hold_data_shade()


class Seed(Flower):
    def __init__(self, name: str, height: float, age: int, color: str):
        super().__init__(name, height, age, color)

    def show(self) -> None:
        super().show()
        if self.has_bloom:
            print("Seeds: 42")
        else:
            print("Seeds: 0")


if __name__ == "__main__":
    print("=== Garden statistics ===")
    print("=== Check year-old")
    print(f"Is 30 days more than a year? -> {Plant.check(30)}")
    print(f"Is 400 days more than a year? -> {Plant.check(400)}")
    print()
    print("=== Flower")
    rose = Flower("Rose", 15.0, 10, "red")
    rose.show()
    show_stats(rose)
    print("[asking the rose to grow and bloom]")
    rose.make_bloom()
    rose.grow(8)
    rose.show()
    show_stats(rose)
    print()
    print("=== Tree")
    oak = Tree("Oak", 200.0, 365, 5.0)
    oak.show()
    show_stats(oak)
    oak.produce_shade()
    show_stats(oak)
    print()
    print("=== Seed")
    sunflower = Seed("Sunflower", 80.0, 45, "yellow")
    sunflower.show()
    print("[make sunflower grow, age and bloom]")
    sunflower.grow(30)
    sunflower.age(20)
    sunflower.make_bloom()
    sunflower.show()
    show_stats(sunflower)
    print()
    print("=== Anonymous")
    anonymous = Plant.create()
    anonymous.show()
    show_stats(anonymous)
