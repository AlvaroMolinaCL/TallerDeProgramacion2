'''
Ejercicio (Pág. 16 / POO)

Herencia
'''

import random


class Persona():
    def __init__(self, fechaNacimiento, RUT):
        self.fechaNacimiento = fechaNacimiento
        self.RUT = RUT


class IngenieroInformatico(Persona):
    def __init__(self, fechaNacimiento, RUT, cargo, proyectosRealizados):
        super().__init__(fechaNacimiento, RUT)
        self.cargo = str(cargo)
        self.proyectosRealizados = int(proyectosRealizados)

    def hacerProyecto(self):
        self.proyectosRealizados = self.proyectosRealizados + 1
        pass


class AlumnoPracticaInformatica(IngenieroInformatico):
    def __init__(self, fechaNacimiento, RUT, cargo, proyectosRealizados, fechaIngreso, proyectosArruinados):
        super().__init__(fechaNacimiento, RUT, cargo, proyectosRealizados)
        self.fechaIngreso = str(fechaIngreso)
        self.proyectosArruinados = int(proyectosArruinados)

    def hacerProyecto():
        # Pendiente
        pass
