def ft_seed_inventory(seed_type: str, quantity: int, unit: str) -> None:
    if unit not in ["packets", "grams", "area"]:
        print("Unkown unit type")
        return
    print(seed_type.capitalize() + " seeds:", quantity, unit, "available")
