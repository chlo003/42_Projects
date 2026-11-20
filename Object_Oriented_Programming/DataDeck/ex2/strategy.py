from abc import ABC, abstractmethod
from ex0.creature import Creature
from ex1.capabilities import TransformCapability, HealCapability


class ClassError(Exception):

    def __init__(self, custom_error: str) -> None:
        super().__init__(custom_error)


class BattleStrategy(ABC):

    def __init__(self, name: str) -> None:
        self.name = name

    @abstractmethod
    def is_valid(self, creation: Creature) -> bool:
        pass

    @abstractmethod
    def act(self, creation: Creature) -> None:
        pass


class NormalStrategy(BattleStrategy):

    def __init__(self) -> None:
        super().__init__("normal")

    def is_valid(self, _: Creature) -> bool:
        return True

    def act(self, creation: Creature) -> None:
        print(creation.attack())


class AggressiveStrategy(BattleStrategy):

    def __init__(self) -> None:
        super().__init__("aggressive")

    def is_valid(self, creation: Creature) -> bool:
        return isinstance(creation, TransformCapability)

    def act(self, creation: Creature) -> None:
        if not isinstance(creation, TransformCapability):
            raise ClassError(f"Invalid Creature '{creation.name}'"
                             f" for this {self.name} strategy")
        else:
            print(creation.transform())
            print(creation.attack())
            print(creation.revert())


class DefensiveStrategy(BattleStrategy):

    def __init__(self) -> None:
        super().__init__("defensive")

    def is_valid(self, creation: Creature) -> bool:
        return isinstance(creation, HealCapability)

    def act(self, creation: Creature) -> None:
        if not isinstance(creation, HealCapability):
            raise ClassError(f"Invalid Creature '{creation.name}'"
                             f" for this {self.name} strategy")
        else:
            print(creation.attack())
            print(creation.heal())
