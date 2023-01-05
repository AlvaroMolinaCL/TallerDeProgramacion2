'''
Ejercicio (Pág. 17 / POO)

Agregación
'''

class Alumno():
    def __init__(self, nombre):
        self.nombre = nombre

class Asignatura():
    def __init__(self, nombre, listaAlumnos):
        self.nombre = nombre
        # self.listaAlumnos = list(listaAlumnos) -- Pendiente