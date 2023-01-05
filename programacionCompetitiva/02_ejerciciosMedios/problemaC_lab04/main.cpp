/*
Problema C | Laboratorio 4 - Taller de Programación II (IN1071C)

Paulinho tiene en sus manos un pequeño problema. El maestro le pidió que hiciera un
programa que verifique dos números A y B si B corresponde al último dígito de A.

-- Entrada --
La entrada consiste en varios casos de pruebas. La primera línea de la entrada contiene
un entero N que indica la cantidad de casos de prueba. Cada caso de prueba consiste en
dos números A (1 ≤ A < 2^31) y B (1 ≤ B < 2^31) positivos.

-- Salida --
Para cada caso de prueba, imprima un mensaje que informe si el segundo número encaja
(“encaixa” en portugués) o no encaja (“nao encaixa”) en el primer número.

NOTA: En los archivos input.txt y output.txt se encuentran los ejemplos de entrada y salida, respectivamente.
*/

#include <iostream> // Biblioteca estándar de C++
#include <string> // string
#include <sstream> // stringstream

using namespace std;

int main(int argc, char const *argv[])
{
    int casosPrueba;
    int A, B, aux1, aux2;
    string a, b, c;
    cin >> casosPrueba;

    for (int i = 0; i < casosPrueba; i++)
    {
        cin >> A >> B;
        stringstream sstream, sstream1;
        sstream << A;
        sstream1 << B;

        a = sstream.str();
        b = sstream1.str();

        if (a.length() >= b.length())
        {
            aux1 = a.length() - b.length();
            aux2 = b.length();

            c = a.substr(aux1, aux2);

            if (c == b)
            {
                cout << "encaixa" << endl;
            }
            else
            {
                cout << "nao encaixa" << endl;
            }
        }
        else
        {
            cout << "nao encaixa" << endl;
        }
    }

    return 0;
}