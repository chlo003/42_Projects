from ex1 import HealingCreatureFactory, TransformCreatureFactory


if __name__ == "__main__":

    print("Testing Creature with healing capability")

    print("base:")
    creation = HealingCreatureFactory().create_base()
    print(creation.describe())
    print(creation.attack())
    print(creation.heal())

    print("evolved:")
    creation2 = HealingCreatureFactory().create_evolved()
    print(creation2.describe())
    print(creation2.attack())
    print(creation2.heal())

    print()

    print("Testing Creature with transform capability")

    print("base:")
    creation3 = TransformCreatureFactory().create_base()
    print(creation3.describe())
    print(creation3.attack())
    print(creation3.transform())
    print(creation3.attack())
    print(creation3.revert())

    print("evolved:")
    creation4 = TransformCreatureFactory().create_evolved()
    print(creation4.describe())
    print(creation4.attack())
    print(creation4.transform())
    print(creation4.attack())
    print(creation4.revert())
