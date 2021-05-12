from math import sqrt

if __name__ == '__main__':
    while True:
        try:
            while True:
                n = int(input())
                h, c, l = [int(v) for v in input().split(' ')]
                res = ((sqrt(h**2 + c**2) * n) * l) / 10000
                print('{0:.4f}'.format(res))
        except EOFError:
            break
