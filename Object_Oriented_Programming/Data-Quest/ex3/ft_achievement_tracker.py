import random


def gen_player_achievements() -> set[str]:
    generate = set(('Crafting Genius', 'Strategist', 'World Savior',
                    'Speed Runner', 'Survivor', 'Master Explorer',
                    'Treasure Hunter', 'Unstoppable', 'First Steps',
                    'Collector Supreme', 'Untouchable',
                    'Sharp Mind', 'Boss Slayer'))
    number_random_generate = random.randint(5, 10)
    random_generate = random.sample(list(generate), number_random_generate)
    return set(random_generate)


if __name__ == "__main__":
    print("=== Achievement Tracker System ===")
    print()
    alice = gen_player_achievements()
    print(f"Player Alice: {alice}")
    bob = gen_player_achievements()
    print(f"Player Bob: {bob}")
    charlie = gen_player_achievements()
    print(f"Player Charlie: {charlie}")
    dylan = gen_player_achievements()
    print(f"Player Dylan: {dylan}")
    print()
    print(f"All distinct achievements: {alice.union(bob, charlie, dylan)}\n")
    print(f"Common achievements: {alice.intersection(bob, charlie, dylan)}\n")
    print(f"Only Alice has: {alice.difference(bob, charlie, dylan)}")
    print(f"Only Bob has: {bob.difference(alice, charlie, dylan)}")
    print(f"Only Charlie has: {charlie.difference(alice, bob, dylan)}")
    print(f"Only Dylan has: {dylan.difference(alice, bob, charlie)}")
    print()
    generate = set(('Crafting Genius', 'Strategist', 'World Savior',
                    'Speed Runner', 'Survivor', 'Master Explorer',
                    'Treasure Hunter', 'Unstoppable', 'First Steps',
                    'Collector Supreme', 'Untouchable',
                    'Sharp Mind', 'Boss Slayer'))
    print(f"Alice is missing: {generate.difference(alice)}")
    print(f"Bob is missing: {generate.difference(bob)}")
    print(f"Charlie is missing: {generate.difference(charlie)}")
    print(f"Dylan is missing: {generate.difference(dylan)}")
