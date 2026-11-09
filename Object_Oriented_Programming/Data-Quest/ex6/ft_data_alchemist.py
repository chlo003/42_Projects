import random


if __name__ == "__main__":
    print("=== Game Data Alchemist ===\n")

    players = ['Alice', 'bob', 'Charlie', 'dylan', 'Emma',
               'Gregory', 'john', 'kevin', 'Liam']
    print(f"Initial list of players: {players}")

    do_capitalized = [name.capitalize() for name in players]
    print(f"New list with all names capitalized: {do_capitalized}")

    only_capitalized = [name for name in players if name[0].isupper()]
    print(f"New list of capitalized names only: {only_capitalized}\n")

    new_dictio = {name: random.randint(50, 1000) for name in do_capitalized}
    print(f"Score dict: {new_dictio}")

    value = [new_dictio[name] for name in new_dictio]
    average_score = sum(value) / len(new_dictio)
    print(len(new_dictio))
    print(f"Score average is {average_score}")

    high_scores = {name: new_dictio[name]
                   for name in new_dictio if new_dictio[name] > average_score}
    print(f"High scores: {high_scores}")
