from ex2.strategy import NormalStrategy, AggressiveStrategy, DefensiveStrategy, BattleStrategy
from ex0 import CreatureFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory


def battle(opponents: list[tuple[CreatureFactory, BattleStrategy]]) -> None:
    print("* Battle *")
    for _ in range(len(opponents)):
        ...




if __name__ == "__main__":

    print("Tournament 0 (basic)")
    print("[ (Flameling+Normal), (Healing+Defensive) ]")
    print("*** Tournament ***")
    print("2 opponents involved\n")



    print("Tournament 1 (error)")
    print(" [ (Flameling+Aggressive), (Healing+Defensive) ]")
    print("*** Tournament ***")
    print("2 opponents involved\n")


    print("Tournament 2 (multiple)")
    print("[ (Aquabub+Normal), (Healing+Defensive), (Transform+Aggressive) ]")
    print("*** Tournament ***")
    print("3 opponents involved\n")


# Battle error, aborting tournament: 
# est afficher en attrapant l'exception