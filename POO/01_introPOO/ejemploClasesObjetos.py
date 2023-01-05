'''
Ejemplo y Ejercicios (Pág. 11-12 / POO)

Clases, objetos, atríbutos y métodos
'''


class Vehiculo():
    def __init__(self, ruedas, cap=1, pas=0, color=0):
        self.ruedas = ruedas  # Ruedas
        self.cap = cap  # Capacidad
        self.pas = pas  # Pasajeros
        self.color = str(color)  # Color
        pass

    # Métodos de la clase Vehículo
    def subirPasajero(self, n):
        if (self.pas + n) < self.cap:
            self.pas = self.pas + n
        else:
            print('No se puede agregar más pasajeros que la capacidad del vehículo.')
        pass

    def bajarPasajero(self, n):
        if n < self.pas:
            self.pas = self.pas - n
        else:
            print('No se pueden quitar más pasajeros de los ya existentes.')
        pass


# Se instancia el objeto Auto de la clase Vehiculo
Auto = Vehiculo(4, 5, 0, 'Color')
# Se instancia el objeto Avion de la clase Vehiculo
Avion = Vehiculo(3, 2, 0, 'Rojo')
# Se instancia el objeto Bus de la clase Vehiculo
Bus = Vehiculo(8, 40, 0, 'Azul')
# Se instancia el objeto Bicicleta de la clase Vehiculo
Bicicleta = Vehiculo(2, 1, 0, 'Verde')
# Se instancia el objeto Bote de la clase Vehiculo
Bote = Vehiculo(0, 4, 2, 'Gris')

# Se verifica que Avión tiene 3 ruedas, capacidad de 2, y 0 pasajeros abordo
print(
    f'Avión tiene {Avion.ruedas} ruedas, capacidad de {Avion.cap}, y {Avion.pas} pasajeros abordo.')

# Se agrega un pasajero en cada vehículo
Auto.subirPasajero(1)
Avion.subirPasajero(1)
Bus.subirPasajero(1)
Bicicleta.subirPasajero(1)
Bote.subirPasajero(1)
