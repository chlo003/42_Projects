from ex0 import CreatureFactory, FlameFactory, AquaFactory


def test_all(factory: CreatureFactory) -> None:
    print("Testing factory")

    creation = factory.create_base()
    print(creation.describe())
    print(creation.attack())

    evolved = factory.create_evolved()
    print(evolved.describe())
    print(evolved.attack())


def fight_basic_creature(factory: FlameFactory, factory2: AquaFactory) -> None:
    print("Testing battle")
    creation = factory.create_base()
    creation2 = factory2.create_base()
    print(f"{creation.describe()}\nvs.\n{creation2.describe()}")
    print(f"fight!\n{creation.attack()}\n{creation2.attack()}")


if __name__ == "__main__":
    test_all(FlameFactory())
    print()
    test_all(AquaFactory())
    print()
    fight_basic_creature(FlameFactory(), AquaFactory())
