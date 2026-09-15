#!/usr/bin/env python3

def input_temperature(temp_str: str) -> int:
    if int(temp_str) < 0 or int(temp_str) > 40:
        raise ValueError(
            f"{temp_str} is not a valid temperature "
            f"(must be between 0 and 40)")
    else:
        return int(temp_str)


def test_tempertaure() -> None:
    test_inputs = ["25", "abc", "100", "-50"]
    for i in test_inputs:
        try:
            print(f"Input data is: '{i}'")
            temperature = input_temperature(i)
            print(f"Temperature is now: {temperature}ºC")
        except ValueError as error:
            print(f"Caught input_temperature error: {error}")
        print("")


if __name__ == "__main__":
    print("=== Garden Temperature ===")
    test_tempertaure()
    print("All tests complete - program didn't crash!")
