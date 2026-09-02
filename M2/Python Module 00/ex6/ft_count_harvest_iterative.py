def ft_count_harvest_iterative() -> None:
    final_day = int(input("Days until harvest: "))
    for i in range(1, final_day + 1):
        print("Day", i)
    print("Harvest time!")
