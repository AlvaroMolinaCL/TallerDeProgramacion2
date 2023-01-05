'''
Ejemplos (Pág. 5-6 / POO)

'''

# Para imprimir "¡Hola Mundo!" por pantalla
print('¡Hola Mundo!\n')

# Tipos de datos básicos en Python
n = 10  # Número entero
x = 10.5  # Número flotante
s = 'Hola'  # String (cadena)
l = [n, x, s]  # Lista

# Para imprimir la lista l por pantalla
print(f"Lista 'l': {l}\n")

# Estructuras de control en Python
for x in range(10):
    pass

n = 1

while n < 10:
    n = n + 1
    pass

z = 1

if z == 1:
    pass
elif z == 2:
    pass
else:
    pass

# Para imprimir range(0, 10)
print(f'El resultado de imprimir range(10) es: {range(10)}\n')

# Para imprimir los números del 1 al 10
print('Números del 1 al 10:')
for i in range(10):
    print(i + 1)
    pass

# Para imprimir los números pares del 1 al 10
print('\nNúmeros pares del 1 al 10:')
for j in range(10):
    if j % 2:
        print(j + 1)
    else:
        pass
    pass

# Dado un número x, determine si es o no divisible por 3
x = int(input('\nIngrese un número: '))

if (x % 3) == 0:
    print(f'{x} es divisible por 3')
    pass
else:
    print(f'{x} no es divisible por 3')
    pass
pass
