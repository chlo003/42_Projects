from typing import Generator
import random


def gen_event() -> Generator[tuple[str, str]]:
    name_list = ["bob", "alice", "dylan", "charlie"]
    action_list = ["run", "eat", "sleep",
                   "grab", "climb", "swim", "release", "move"]
    while True:
        random_name = random.choice(name_list)
        random_action = random.choice(action_list)
        yield random_name, random_action


def consume_event(prev_list: list[tuple[str, str]]
                  ) -> Generator[tuple[str, str]]:
    while len(prev_list) > 0:
        yield prev_list.pop(random.randint(0, len(prev_list) - 1))


if __name__ == "__main__":
    print("=== Game Data Stream Processor ===")

    for i in range(10):
        n, a = next(gen_event())
        print(f"Event {i}: Player {n} did action {a}")

    tuple_list = []
    for i in range(10):
        tuple_list.append(next(gen_event()))
    print(f"Built list of 10 events: {tuple_list}")

    for element in consume_event(tuple_list):
        print(f"Got event from list: {element}")
        print(f"Remains in list: {tuple_list}")
