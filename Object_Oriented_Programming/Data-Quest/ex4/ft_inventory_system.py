import sys

if __name__ == "__main__":
    print("=== Inventory System Analysis ===")
    dictionary = {}
    for element in sys.argv[1:]:
        try:
            key, value = element.split(":")
            if key in dictionary:
                print(f"Redundant item '{key}' - discarding")
                continue
            try:
                dictionary[key] = int(value)
            except ValueError as e:
                print(f"Quantity error for '{key}': {e}")
        except ValueError:
            print(f"Error - invalid parameter '{element}'")

    print(f"Got inventory: {dictionary}")
    list_item = list(dictionary.keys())
    print(f"Item list: {list_item}")
    total_value = sum(dictionary.values())
    print(f"Total quantity of the {len(list_item)} items: {total_value}")
    for element in list_item:
        print(f"Item {element} represents "
              f" {round((dictionary[element] / total_value) * 100, 1)}%")

    val_min = None
    for data in dictionary:
        dict_value: int = dictionary[data]
        if val_min is None or val_min > dict_value:
            val_min = dict_value
            name = data

    val_max = None
    for data in dictionary:
        dictionary_value: int = dictionary[data]
        if val_max is None or val_max < dictionary_value:
            val_max = dictionary_value
            blaz = data

    print(f"Item most abundant: {blaz} with quantity {val_max}")
    print(f"Item least abundant: {name} with quantity {val_min}")
    dictionary.update({"magic_item": 1})
    print(f"Updated inventory: {dictionary}")
