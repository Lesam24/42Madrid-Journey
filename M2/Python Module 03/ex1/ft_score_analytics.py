#!/usr/bin/env python3

import sys


def ft_score_analytics() -> None:
    if (len(sys.argv) > 1):
        scores = []
        for i in sys.argv[1:]:
            try:
                score = int(i)
                scores.append(score)
            except ValueError:
                print(f"Invalid score '{i}'")
    else:
        print(f"No scores provided. Usage: {sys.argv[0]} <score1> <score2>...")

    if scores:
        print(f"Scores processed: {scores}")
        print(f"Total players: {len(scores)}")
        print(f"Total score: {sum(scores)}")
        print(f"Average score: {sum(scores) / len(scores)}")
        print(f"High score: {max(scores)}")
        print(f"Low score: {min(scores)}")
        print(f"Score range: {max(scores) - min(scores)}")
    else:
        print(f"No scores provided. Usage: {sys.argv[0]} <score1> <score2>...")


if __name__ == "__main__":
    print("=== Player Score Analytics ===")
    ft_score_analytics()
