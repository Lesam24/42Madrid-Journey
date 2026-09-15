#!/usr/bin/env python3

def garden_operations(operation_number: int) -> None:
    if operation_number == 0:
        int("abc")
    elif operation_number == 1:
        0 // 0
    elif operation_number == 2:
        open("/non/existent/file")
    elif operation_number == 3:
        "42" + int(5)
    else:
        return


def test_error_types() -> None:
    for i in range(5):
        print(f"Testing operation {i}...")
        try:
            garden_operations(i)
            print("Operation completed successfully")
        except ValueError as error:
            print(f"Caught ValueError: {error}")
        except ZeroDivisionError as error:
            print(f"Caught ZeroDivisionError: {error}")
        except FileNotFoundError as error:
            print(f"Caught FileNotFoundError: {error}")
        except TypeError as error:
            print(f"Caught TypeError: {error}")


if __name__ == "__main__":
    print("=== Garden Error Types Demo ===")
    test_error_types()
    print("")
    print("All tests complete - program didn't crash!")
