#!/usr/bin/env python3

import random

achievements = [
    "Stone Age",
    "Getting an upgrade",
    "Acquire Hardware",
    "Suite up",
    "Hot stuff",
    "Isn't it Iron Pick",
    "Not Today, Thank You",
    "Ice Bucket Challenge",
    "Diamonds!",
    "We Need to Go Deeper",
    "Cover me with Diamonds",
    "Enchanter",
    "Zombie Doctor",
    "Eye Spy",
    "The End?",
    "Nether",
    "Return to sender",
    "Oh Shiny",
    "Who is Cutting Onions?",
    "Hidden in the Depths"
]


def gen_player_achievements() -> set[str]:
    k = random.randint(5, 9)
    return set(random.sample(achievements, k))


def main() -> None:
    print("=== Achievement Tracker System ===")
    alice = gen_player_achievements()
    bob = gen_player_achievements()
    charlie = gen_player_achievements()
    dylan = gen_player_achievements()
    print(f"Player Alice: {alice}")
    print(f"Player Bob: {bob}")
    print(f"Player Charlie: {charlie}")
    print(f"Player Dylan: {dylan}")
    print()
    print(f"All distinct achievements: {alice.union(bob, charlie, dylan)}")
    print()
    print(f"Common achievements: {alice.intersection(bob, charlie, dylan)}")
    print()
    print(f"Only Alice has: {alice.difference(bob, charlie, dylan)}")
    print(f"Only Bob has: {bob.difference(alice, charlie, dylan)}")
    print(f"Only Charlie has: {charlie.difference(bob, alice, dylan)}")
    print(f"Only Dylan has: {dylan.difference(bob, charlie, alice)}")
    print()
    print(f"Alice is missing: {set(achievements).difference(alice)}")
    print(f"Bob is missing: {set(achievements).difference(bob)}")
    print(f"Charlie is missing: {set(achievements).difference(charlie)}")
    print(f"Dylan is missing: {set(achievements).difference(dylan)}")


if __name__ == "__main__":
    main()
