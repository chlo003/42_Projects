from ex0.factory import CreatureFactory
from .creature import Sproutling, Bloomelle, Shifting, Morphagon


class HealingCreatureFactory(CreatureFactory):

    def create_base(self) -> Sproutling:
        return Sproutling()

    def create_evolved(self) -> Bloomelle:
        return Bloomelle()


class TransformCreatureFactory(CreatureFactory):

    def create_base(self) -> Shifting:
        return Shifting()

    def create_evolved(self) -> Morphagon:
        return Morphagon()
