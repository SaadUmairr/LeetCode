def checkPowersOfThree(n: int) -> bool:
    while n:
        if n % 3 > 1:
            return False
        n //= 3
    return True


if __name__ == "__main__":
    number = int(input())
    result = checkPowersOfThree(number)

    if result:
        print(f"{number} is sum of power of 3")
    else:
        print(f"{number} is not sum of power of 3")
