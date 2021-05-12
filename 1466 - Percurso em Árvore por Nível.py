import queue


class Nodo:
    def __init__(self, valor, esquerda=None, direita=None):
        self.valor = valor
        self.esquerda = esquerda
        self.direita = direita


def insere_no(no, valor):
    if no is None:
        return Nodo(valor)
    elif valor < no.valor:
        if no.esquerda is None:
            no.esquerda = Nodo(valor)
        else:
            return insere_no(no.esquerda, valor)
    elif valor > no.valor:
        if no.direita is None:
            no.direita = Nodo(valor)
        else:
            return insere_no(no.direita, valor)


if __name__ == '__main__':
    fila = queue.Queue()
    raiz = None

    c = int(input())
    for i in range(c):
        n = int(input())
        for idx, val in enumerate(input().split(' ')):
            if idx == 0:
                raiz = Nodo(int(val))
                fila.put(raiz)
            else:
                insere_no(raiz, int(val))

        res = ""

        while fila.qsize():
            node = fila.get()
            if node.esquerda:
                fila.put(node.esquerda)
            if node.direita:
                fila.put(node.direita)
            res += str(node.valor) + " "

        print("Case {0}:".format(i+1))
        print("{0}".format(res[0:res.__len__()-1]))
        print("")
