if __name__ == '__main__':
    n = int(input())
    vet = [int(inp) for inp in input().split(' ')]
    vet = sorted(vet, reverse=True)
    for i in range(1, n):
        vet[i-1] -= (n-i)
    print(n+max(vet)+1)