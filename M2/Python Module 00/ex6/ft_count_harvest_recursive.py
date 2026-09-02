def ft_harvest_helper(final_day: int, current_day: int) -> None:
    if current_day > final_day:
        print("Harvest time!")
        return
    print("Day", current_day)
    ft_harvest_helper(final_day, current_day + 1)


def ft_count_harvest_recursive() -> None:
    final_day = int(input("Days until harvest: "))
    ft_harvest_helper(final_day, 1)
