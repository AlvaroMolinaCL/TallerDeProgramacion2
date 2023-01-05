'''
Ejemplo 05 (Pág. 22 / DOO)

Manejo de errores: Excepción personalizada
'''


class PotenciaZeroException(Exception):
    def __init__(self, value):
        # Este atríbuto permite tener una información adicional
        self.value = value

    def __str__(self):
        # Mensaje de error que mostrará si la excepción se captura
        return "Error: Valor {} elevado a 0".format(self.value)


def potencia(a, b):
    if b == 0:
        raise PotenciaZeroException(a)
    return a ** b


try:
    print('La potencia es {}' .format(potencia(5, 2)))
    print('La potencia es {}' .format(potencia(5, 0)))
except PotenciaZeroException as e:
    print(e)
