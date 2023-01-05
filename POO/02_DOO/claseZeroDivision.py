'''
Ejercicio 04 (Pág. 13 / DOO)
'''

class NotNumberException(Exception): # Se crea clase para la excepción NotNumberException
    def __init__(self, valor): # Se define el constructor de la clase NotNumberException
        self.valor = valor # Se inicializa el atríbuto público valor

    def __str__(self) -> str: # Se sobrecarga str
        return f"Error: El valor del tipo no es un número, se recibió {type(self.valor)}" # Se retorna el mensaje para la excepción


class ZeroDivision(Exception): # Se crea clase para la excepción ZeroDivision
    def __str__(self) -> str: # Se sobrecarga str
        return "Division Error: No se puede dividir por cero" # Se retorna el mensaje para la excepción


def division(a, b): # Se crea la función division
    tiposAceptados = [int, float, complex] # Se declara una lista con los tipos de datos aceptados
    if type(a) not in tiposAceptados: # Si el tipo de a no corresponde a los que están definidos en tiposAceptados
        raise NotNumberException(a) # Se lanza la excepción NotNumberException para a
    if type(b) not in tiposAceptados: # Si el tipo de b no corresponde a los que están definidos en tiposAceptados
        raise NotNumberException(b) # Se lanza la excepción NotNumberException para b
    if b != 0: # Si el valor de b es igual a 0
        raise ZeroDivision()  # Se lanza la excepción ZeroDivision (o ZeroDivisionError() <- excepción nativa)
    return a / b # Se retorna el resultado de la división entre a y b


a = 1
b = 0
try:
    resultado = division(a, b)
    print(f'El resultado de la división entre {a} y {b} es {resultado}')
except Exception as expt:
    print(expt)
