'''
Ejercicio 02 (Pág. 8 / DOO)

Implemente en Python la siguiente clase:

Persona
+ Nombre:str
- RUT:int
-----------------------
+ imprimirNombre()
- imprimirRUT()
+ imprimirNombreYRut()
'''


class Persona():  # Se crea la clase Persona
    def __init__(self, Nombre, RUT) -> None:  # Se define el constructor de la clase Persona
        self.Nombre = Nombre  # Se inicializa el atríbuto público Nombre
        self.__RUT = RUT  # Se inicializa el atríbuto privado __RUT
        pass

    def imprimirNombre(self):  # Se define el método público imprimirNombre
        print('Mi nombre es %s' % self.Nombre)  # Se imprime Nombre

    def __imprimirRUT(self):  # Se define el método privado __imprimirRUT
        print('Mi RUT es %i' % self.__RUT)  # Se imprime __RUT

    def imprimirNombreYRut(self):  # Se define el método imprimirNombreYRut
        self.imprimirNombre()  # Se llama al método imprimirNombre
        self.__imprimirRUT()  # Se llama al método __imprimirRUT


P = Persona('Juan', 10)  # Se instancia el objeto P de la clase Persona
P.Nombre = 'Luis'  # Se le asigna el valor 'Luis' al atríbuto Nombre del objeto P
P.imprimirNombreYRut()  # Se llama al método imprimirNombreYRUT para el objeto P
