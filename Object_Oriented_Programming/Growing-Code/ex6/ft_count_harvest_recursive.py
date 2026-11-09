def days_until_harvest(count, day):
    if day < count:
        print(f"Day {day}")
        days_until_harvest(count, day + 1)


def ft_count_harvest_recursive():
    count = int(input("Days until harvest:"))
    days_until_harvest(count + 1, 1)
    print("Harvest time!")
