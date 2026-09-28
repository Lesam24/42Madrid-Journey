#!/usr/bin/env python3

import sys

inventory: dict[str, int] = {}


def init_inventory() -> None:
    for inv in sys.argv[1:]:
        try:
            key = inv.split(":")
            if (key[0]) in inventory.keys():
                print(f"Redundant item '{key[0]}' - discarting")
            else:
                inventory.update({key[0]: int(key[1])})
        except ValueError as e:
            print(f"Quantity error for '{inv}': {e}")
        except IndexError:
            print(f"Error - invalid parameter '{inv}'")


def ft_inventory_system() -> None:
    init_inventory()
    print(f"Got inventory: {inventory}")
    items = list(inventory.keys())
    quantities = list(inventory.values())
    print(f"Item list: {items}")
    leng = len(items)
    total = sum(quantities)
    print(f"Total quantity of the {leng} items: {total}")
    for i in items:
        print(f"Item {i} represents {inventory[i]/total*100:.1f}%")

    if items:
        start = items[0]
        keys_max = start
        value_max_max = inventory[start]
        for item in inventory:
            if inventory[item] > value_max_max:
                value_max_max = inventory[item]
                keys_max = item
        print(f"Item most abundant: {keys_max} with quantity {value_max_max}")
        item_min = start
        value_max_min = inventory[start]
        for item in inventory:
            if inventory[item] < value_max_min:
                value_max_min = inventory[item]
                item_min = item
        print(f"Item least abundant: {item_min} with quantity {value_max_min}")

    inventory.update({"magic item": 1})
    print(f"Updated inventory: {inventory}")


if __name__ == "__main__":
    ft_inventory_system()
