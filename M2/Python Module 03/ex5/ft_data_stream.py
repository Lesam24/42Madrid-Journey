#!/usr/bin/env python3

import typing
import random


def gen_event() -> typing.Generator[tuple[str, str], None, None]:
    players = ["alice", "bob", "charlie", "dylan"]
    actions = [
        "run", "eat", "sleep", "jump", "walk", "talk",
        "read", "write", "play", "sing", "dance", "swim",
        "drive", "cook", "paint"
    ]
    while True:
        yield (random.choice(players), random.choice(actions))


def consume_event(event: list[tuple[str, str]]
                  ) -> typing.Generator[tuple[str, str], None, None]:
    while len(event) > 0:
        i = random.randrange(len(event))
        yield event.pop(i)


def ft_data_stream() -> None:
    print("=== Game Data Stream Processor ===")
    generator = gen_event()
    for i in range(1000):
        player, action = next(generator)
        print(f"Event {i}: Player {player} did action {action}")
    ten_events: list[tuple[str, str]] = []
    for _ in range(10):
        ten_events.append(next(generator))
    print(f"Built list of 10 events: {ten_events}")
    for event in consume_event(ten_events):
        print(f"Got event from list {event}")
        print(f"Remains in list {ten_events}")


if __name__ == "__main__":
    ft_data_stream()
