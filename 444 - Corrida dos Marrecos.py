def solve(n):
    if n == 1:
        return 0
    elif n == 2:
        return 1
    elif n == 3:
        return 1
    elif n == 4:
        return 3
    else:
        if n % 3 > 0:
            res = int(n/3) + 1
            return res + solve(res)
        else:
            res = int(n/3)
            return res + solve(res)


if __name__ == '__main__':
    while True:
        try:
            n = int(input())
            if n == 0:
                break

            print(solve(n))
        except EOFError:
            break
