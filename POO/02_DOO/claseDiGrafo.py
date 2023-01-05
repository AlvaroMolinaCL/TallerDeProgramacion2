'''
Ejercicio 03 - Modificado (Pág. 12 / DOO)

Construiremos la clase DiGrafo en Python, para esto:

1. Determine las condiciones que debe satisfacer el conjunto de vértices y aristas

2. Cree métodos para verificar estas condiciones.

3. Cree los métodos para añadir vértice y añadir arista.
'''


class DiGrafo():  # Se crea la clase DiGrafo
    '''Propiedades DiGrafo:
    V (Vértices):
        Conjunto: tipo set
    E (Aristas): 
        Conjunto: tipo set
        Elementos de E son: pares ordenados: tuple
                            tamaño 2 (pares ordenados)
                            sus componentes están en V (apuntan a vértices dentro del grafo)
    '''

    def __init__(self, V, E) -> None:  # Se define el constructor de la clase DiGrafo
        # Se inicializa el atríbuto privado V con un método de validación
        self.__V = self.validacionV(V)
        # Se inicializa el atríbuto privado E con un método de validación
        self.__E = self.validacionE(E)
        pass

    def validacionV(self, V):  # Se define el método para la validación de __V
        # Se verifica que V (conjunto de vértices) es del tipo set
        assert type(V) is set, 'Tipo de conjunto de vértices incorrecto'
        return V  # Si la validación es correcta, se retorna V

    def validacionE(self, E):  # Se define el método para la validación de __E
        # Se verifica que E (conjunto de aristas) es del tipo set
        assert type(E) is set, 'Tipo de conjunto de aristas incorrecto'
        for e in E:  # Para cada e (arista) en E (conjunto de aristas)
            # Se verifica que e (arista) es del tipo set
            assert type(e) is tuple, 'El tipo de dato de una arista es incorrecto'
            # Se verifica que la longitud de e (arista) sea igual a 2
            assert len(e) == 2, 'Aristas de tamaño incorrecto'
            for v in e:  # Para cada v (vértice) en e (arista)
                # Se verifica que v (vértice) pertenezca a V (conjunto de vértices)
                assert v in V, 'Hay un vertice que no esta en V'
        return E  # Si la validación es correcta, se retorna E

    def agregarArista(self, e):  # Se define el método público agregarArista
        # Se verifica que e (arista) sea del tipo tuple
        assert type(e) is tuple, 'El tipo de dato de una arista incorrecto'
        # Se verifica que la longitud de e (arista) sea igual a 2
        assert len(e) == 2, 'Aristas de tamaño incorrecto'
        for v in e:  # Para cada v (vértice) en e (arista)
            # Se verifica que v (vértice) pertenezca a V (conjunto de vértices)
            assert v in V, 'Hay un vertice que no esta en V'
        self.__E.add(e)  # Se agrega e (arista) a E (conjunto de aristas)
        pass

    def verAristas(self):  # Se define el método público verAristas
        print(self.__E)  # Se imprime por pantalla E (conjunto de aristas)
        pass


V = set([1, 2, 3])  # Se define el conjunto de vértices V
E = set([(1, 2), (2, 3)])  # Se define el conjunto de aristas E
G = DiGrafo(V, E)  # Se instancia el objeto G de la clase DiGrafo
G.verAristas()  # Se llama al método verAristas para imprimir las aristas de G
# Se llama al método agregarArista para agregar una nueva arista al conjunto de aristas E de G
G.agregarArista((3, 1))
G.verAristas()  # Se llama al método verAristas para imprimir las aristas de G
