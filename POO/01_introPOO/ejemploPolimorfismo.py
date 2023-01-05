'''
Ejemplo y Ejercicio (Pág. 22 / POO)

Polimorfismo
'''


class Poligono():
    def __init__(self, lados):
        self.lados = lados

    def datos(self):
        print(f'Número de lados: {self.lados}')

    def area(self):
        pass


class Cuadrado(Poligono):
    def __init__(self, lado):
        super().__init__(2)
        self.lado = lado
        self.areaValor = self.area()

    def area(self):
        return self.lado * self.lado
        pass


class Triangulo(Poligono):
    def __init__(self, base, altura):
        super().__init__(3)
        self.base = base
        self.altura = altura
        self.areaValor = self.area()

    def area(self):
        return (self.base * self.altura) / 2
        pass


class Rectangulo(Poligono):
    def __init__(self, largo, ancho):
        super().__init__(4)
        self.largo = largo
        self.ancho = ancho
        self.areaValor = self.area()

    def area(self):
        return self.largo * self.ancho
        pass


Cuadrado1 = Cuadrado(1)
Cuadrado1.datos()
print(Cuadrado1.areaValor)

Cuadrado2 = Cuadrado(2)
Cuadrado2.datos()
print(Cuadrado2.areaValor)

Triangulo1 = Triangulo(3)
Triangulo1.datos()
print(Triangulo1.areaValor)

Rectangulo1 = Rectangulo(4)
Rectangulo1.datos()
print(Rectangulo1.areaValor)
