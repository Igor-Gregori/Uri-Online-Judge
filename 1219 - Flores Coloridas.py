from math import sqrt
from math import pi


def area_triangulo(a, b, c):
    p = (a + b + c) / 2
    res = p * ( p-a ) * ( p-b ) * ( p-c )
    return sqrt(res)

def area_circulo_fora(a, b, c):
    raio = (a*b*c)/sqrt(((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c)))
    return pi * raio * raio

def area_circulo_dentro(at, per):
    raio = (2*at)/per
    return pi * raio * raio


if __name__ == '__main__':
    while True:
        try:
            a, b, c = [int(inp) for inp in input().split(' ')]
            
            triangulo = area_triangulo(a, b, c)
            circulo_fora = area_circulo_fora(a, b, c)
            circulo_dentro = area_circulo_dentro(triangulo, (a+b+c))

            sunflowers = float(circulo_fora - triangulo)
            violets = float(triangulo - circulo_dentro)
            roses = float(circulo_dentro)

            print('{0:.4f} {1:.4f} {2:.4f}'.format(sunflowers, violets, roses))
        except EOFError:
            break