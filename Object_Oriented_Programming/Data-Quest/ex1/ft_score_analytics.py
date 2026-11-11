import sys


def store_score() -> None:
    argv_number = len(sys.argv)
    if argv_number >= 2:
        new = []
        for element in sys.argv[1:]:
            try:
                new.append(int(element))
            except ValueError:
                print(f"Invalid parameter: '{element}'")
                continue
        if len(new) == 0:
            print("No scores provided. Usage: python3 "
                  "ft_score_analytics.py <score1> <score2> ...")
            return
        print(f"Scores processed: {new}")
        print(f"Total players: {len(new)}")
        print(f"Total score: {sum(new)}")
        print(f"Average score: {sum(new) / len(new)}")
        print(f"High score: {max(new)}")
        print(f"Low score: {min(new)}")
        print(f"Score range: {max(new) - min(new)}")
    else:
        print("No scores provided. "
              "Usage: python3 ft_score_analytics.py <score1> <score2> ...")


if __name__ == "__main__":
    print("=== Player Score Analytics ===")
    store_score()
    print()
