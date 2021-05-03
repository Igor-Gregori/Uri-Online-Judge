import locale


def solve(money):
    locale.setlocale(locale.LC_ALL, 'en_US.utf8')
    print(locale.currency(money, grouping=True))


if __name__ == '__main__':
    while True:
        try:
            dol = input()
            cent = input()
            if cent.__len__() == 1:
                cent = '0' + cent
            solve(float(dol+'.'+cent))
        except EOFError:
            break
