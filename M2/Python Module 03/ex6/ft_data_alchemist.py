#!/usr/bin/env python3

import random


def ft_data_alchemist() -> None:
    players = ["alice", "bob", "charlie", "dylan", "Emma",
               "Gregory", "john", "kevin", "Liam"]
    print(f"Initial list of players: {players}")
    all_caps = []
    for player in players:
        all_caps.append(player.capitalize())
    print(f"New list with all names capitalized: {all_caps}")
    caps_only = []
    for player in players:
        if (player[0].isupper()):
            caps_only.append(player)
    print(f"New list of capitalized names only: {caps_only}")
    print()
    scores = {}
    for player in all_caps:
        scores[player] = random.randint(0, 999)
    print(f"Score dict: {scores}")
    average = round(sum(scores.values()) / len(scores), 2)
    print(f"Score average: {average}")
    high_scores = {}
    for player, score in scores.items():
        if score > average:
            high_scores[player] = score
    print(f"High scores: {high_scores}")


if __name__ == "__main__":
    ft_data_alchemist()
