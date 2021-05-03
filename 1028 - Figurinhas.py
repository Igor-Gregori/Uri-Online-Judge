from math import gcd


if __name__ == '__main__':
    n = int(input())
    for i in range(n):
        f1, f2 = [int(inp) for inp in input().split(' ')]
        print(gcd(f1, f2))
