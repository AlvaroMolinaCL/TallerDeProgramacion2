'''
Ejercicio 01 (Pág. 6 / DOO)

1. Implemente el UML anterior en Python (se puede revisar en el PDF).

2. Implemente la suma de Figuras, que entrega como resultado la suma de sus áreas

3. Sume un triángulo con un cuadrado.
'''

from abc import ABCMeta, abstractmethod


# La clase Figura es una clase abstracta, ya que no se le puede definir un área
class Figura(metaclass=ABCMeta):
    def __init__(self) -> None:  # Se define el constructor de la clase Figura
        pass

    @abstractmethod  # Se indica que el método es abstracto
    def area(self):  # Se declara el método area
        # Se imprime por pantalla el mensaje de "Calculando área..."
        print("Calculando área...")
        pass

    def __add__(self, otraFigura):  # Se sobrecarga el operador de suma
        # Se retorna la suma del área de dos figuras
        return self.area() + otraFigura.area()
        pass


class Triangulo(Figura):  # La clase hija Triangulo hereda de la clase padre Figura
    def __init__(self, base, altura) -> None:  # Constructor
        super().__init__()  # Se llama al constructor de la clase padre Figura
        self.base = base  # Se inicializa el atríbuto base de la clase Triangulo
        self.altura = altura  # Se inicializa el atríbuto altura de la clase Triangulo
        pass

    def area(self):  # Se define el método para cálcular el área del triángulo
        super().area()  # Se llama al método area de la clase padre Figura
        # Se aplica la fórmula para cálcular el área de un triángulo
        a = self.base * self.altura / 2
        # Se imprime por pantalla el área del triángulo
        print('El área del triángulo es %.2f' % a)
        return a  # Se retorna el área del triángulo
        pass


class Cuadrado(Figura):  # La clase hija Cuadrado hereda de la clase padre Figura
    def __init__(self, lado) -> None:  # Constructor
        super().__init__()  # Se llama al constructor de la clase padre Figura
        self.lado = lado  # Se inicializa el atríbuto lado de la clase Cuadrado
        pass

    def area(self):  # Se define el método para cálcular el área del cuadrado
        super().area()  # Se llama al método area de la clase padre Figura
        a = self.lado ** 2  # Se aplica la fórmula para cálcular el área de un cuadrado
        # Se imprime por pantalla el área del cuadrado
        print('El área del cuadrado es %.2f' % a)
        return a  # Se retorna el área del cuadrado
        pass


class Rectangulo(Figura):  # La clase hija Rectangulo hereda de la clase padre Figura
    def __init__(self, lado1, lado2) -> None:  # Constructor
        super().__init__()  # Se llama al constructor de la clase padre Figura
        self.lado1 = lado1  # Se inicializa el atríbuto lado1 de la clase Rectangulo
        self.lado2 = lado2  # Se inicializa el atríbuto lado2 de la clase Rectangulo
        pass

    def area(self):  # Se define el método para cálcular el área del rectángulo
        super().area()  # Se llama al método area de la clase padre Figura
        # Se aplica la fórmula para cálcular el área de un rectángulo
        a = self.lado1 * self.lado2
        # Se imprime por pantalla el área del rectángulo
        print('El área del rectángulo es %.2f' % a)
        return a  # Se retorna el área del rectángulo
        pass


T = Triangulo(2, 1)  # Se instancia el objeto T de la clase Triangulo
T.area()  # Se usa el método area para cálcular el área del tríangulo T
C = Cuadrado(1)  # Se instancia el objeto C de la clase Cuadrado
C.area()  # Se usa el método area para cálcular el área del cuadrado C
R = Rectangulo(1, 2)  # Se instancia el objeto R de la clase Rectangulo
R.area()  # Se usa el método area para cálcular el área del rectángulo R
# Se crea la variable sumaAreaTC que suma las áreas de T (Triangulo) y R (Rectangulo)
sumaAreaTC = T + C
# Se imprime por pantalla la suma de las áreas de T (Triangulo) y R (Rectangulo)
print('La suma del área entre triángulo y cuadrado es %.2f' % sumaAreaTC)
