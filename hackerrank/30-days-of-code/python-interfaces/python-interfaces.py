#!/usr/bin/env python

class Animal(object):
    def run():
        raise NotImplementedError

class Horse(Animal):
    def run(self):
        print("Running with 4 legs")

class Human(Animal):
    def run(self):
        print("Running with 2 legs")


human = Human()
horse = Horse()

human.run()
horse.run()
