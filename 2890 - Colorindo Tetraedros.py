from math import factorial

def solve(r):
    if r == 1:
        return 1
    elif r == 2:
        return 5
    elif r == 3:
        return 15

    fatR = factorial(r)
    fatR_m1 = factorial(r-1)

    comb_part_one = fatR/(2*factorial(r-2))
    comb_part_two = r * (fatR_m1/(2*factorial((r-1)-2)))
    arranjo = fatR / (factorial(r-4))

    return int(r + (r*(r-1)) + comb_part_one + comb_part_two + (arranjo/12))

if __name__ == '__main__':
    while True:
        try:
            r = int(input())
            if r == 0:
                break

            print(solve(r)%1000007)
        except EOFError:
            break
