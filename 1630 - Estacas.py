from math import gcd


if __name__ == '__main__':
    while True:
        try:
            while True:
                x, y = [int(v) for v in input().split(' ')]
                print(int(((x*2)+(y*2))/gcd(x, y)))
        except EOFError:
            break
