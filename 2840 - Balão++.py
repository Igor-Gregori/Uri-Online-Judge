pi = 3.1415


def solve(r, l):
    v = (4/3) * pi * (r*r*r)
    return int(l/v)


if __name__ == '__main__':
    r, l = [int(inp) for inp in input().split(' ')]
    print(solve(r, l))