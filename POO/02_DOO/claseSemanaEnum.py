'''
Ejemplo 07 (Pág. 24 / DOO)

Enumeración
'''


from enum import Enum


class semanaEnum(Enum):
    lu = 0
    ma = 1
    mi = 2
    ju = 3
    vi = 4
    sa = 5
    do = 6


meses = Enum(
    value='meses',
    names=('ENE FEB MAR ABR MAY JUN JUL AGO SEP OCT NOV DIC')
)
