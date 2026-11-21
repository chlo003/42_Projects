from ex2.strategy import NormalStrategy, AggressiveStrategy, DefensiveStrategy, BattleStrategy
from ex0 import CreatureFactory
from ex1 import HealingCreatureFactory, TransformCreatureFactory


def battle(opponents: list[tuple[CreatureFactory, BattleStrategy]]) -> None:
    print("* Battle *")
    creature_list = [for opponent in opponents ]
    try:
        for first_opponent in opponents:
            second_opponent = first_opponent + 1
            for second_opponent in opponents:
                print(f"{first_opponent.describe()}\nvs\n{second_opponent.describe()}")
                print("now fight!")
                print(f"{first_opponent}\n{second_opponent}")
    except:
        print("Battle error, aborting tournament:")



#  la fonction battle va juste boucle jusqua lire tout les opponents,
#  et ensuite dans sa boucle imbriquee, elle va faire battre les opponents
#  un par un seulement s'ils sont eligible a la strategy et si ils ne se
#  sont pas encore battu . Sinon la fonction rend un message d'erreur en 
#  utilisant la ClassError.

# Etape 3:
# Avant de partir pour les combats, il nous fait des pokémons. 
# Mais tu as seulement une factory et une stratégie. 
# Comment tu peux me préparer tes pokémons avec leurs stratégies
# 
# Etape 4:
# Ta boucle imbriquée qui va te permettre de fight le pokémon
# avec le prochain pokémon, il doit éviter de s'auto affronter
# ou un affrontement en double.  (cf: penses à comment tu fais 
# un tri dans un tableau, du plus petit au plus grand )
# Quand tu as tout ca tu dois montrer qui s'affronte, 
# et faire leurs (ATTENTION t'es pas sur que ca marche 

if __name__ == "__main__":

    print("Tournament 0 (basic)")
    print("[ (Flameling+Normal), (Healing+Defensive) ]")
    print("*** Tournament ***")
    print("2 opponents involved\n")

    # print(f"[ ({CreatureFactory.create_base()}+{NormalStrategy()}), (Healing+Defensive) ]")
    battle([(Flameling+Normal), (Healing+Defensive)])


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