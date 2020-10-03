#!/usr/bin/env python3
import random

class Coin(object):
    def __init__(self, sideup="Heads"):
        self.sideup = sideup

    def __str__(self):
        return "Current state : {}".format(self.sideup)

    def flip(self):
        if random.randrange(2) == 0:
            self.sideup = "Tails"
        else:
            self.sideup = "Heads"
        print(self)

def main():
    coin = Coin()
    coin.flip()

if __name__ == "__main__":
    main()
