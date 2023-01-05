/*
Problema D | Laboratorio 4 - Taller de Programación II (IN1071C)

Tenemos algunas palabras y queremos justificarlas a la derecha, es decir, alinearlas a la derecha.
Cree un programa que lea una palabra e imprima todo justificado a la derecha, en el mismo orden en que
aparecen en la entrada.

-- Entrada --
La entrada contiene varios casos de prueba. La primera línea de un caso de prueba contendrá un número
entero N (1 ≤ N ≤ 50) que indica el número de palabras siguientes. Cada palabra está compuesta de hasta
50 letras mayúsculas (‘A’-‘Z’) y contendrá al menos una letra. El final de la entrada se indica con N = 0.

-- Salida --
Para cada caso de prueba, imprima las palabras rellenadas a la izquierda con caracteres de espacio para que
tengan la misma longitud que la palabra más larga encontrada en ese texto. Imprima una línea vacía entre todos
los casos de prueba. No debe haber ningún espacio impreso en la parte de atrás, y debe descartar cualquier
espacio principal innecesario, para que al menos una línea en cada palabra de salida comienza con una letra.

NOTA: En los archivos input.txt y output.txt se encuentran los ejemplos de entrada y salida, respectivamente.
*/

#include <iostream> // Biblioteca estándar de C++
#include <string> // string

#define MAX 100

using namespace std;

int main(int argc, char const *argv[])
{
    int N;
    cin >> N;

    while (N != 0)
    {
        int a = 0;

        struct sCadena
        {
            string cadena;
        };

        sCadena tabla[MAX];

        for (int i = 0; i < N; i++)
        {
            cin >> tabla[i].cadena;

            if (a < tabla[i].cadena.length())
            {
                a = tabla[i].cadena.length();
            }
        }

        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < a - tabla[i].cadena.length(); j++)
            {
                cout << " ";
            }

            cout << tabla[i].cadena << endl;
        }

        cin >> N;

        if (N != 0)
        {
            cout << endl;
        }
    }
}