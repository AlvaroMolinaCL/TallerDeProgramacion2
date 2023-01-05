/*
Problema A | Laboratorio 3 - Taller de Programación II (IN1071C)

Lea tres números enteros y ordénelos en orden ascendente. Después, imprima estos valores en orden ascendente,
una línea en blanco y luego los valores en la secuencia tal como fueron leídos.

-- Entrada --
La entrada contiene tres números enteros.

-- Salida --
Presente la salida como se solicitó anteriormente.

NOTA: En los archivos input.txt y output.txt se encuentran los ejemplos de entrada y salida, respectivamente.
*/

#include <fstream>   // ifstream, ofstream
#include <iostream>  // Biblioteca estándar de C++
#include <algorithm> // sort

#define MAX 3

using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
#endif

    int vAscendente[MAX], vSecuencia[MAX];

    for (int i = 0; i < MAX; i++)
    {
        cin >> vAscendente[i];
        vSecuencia[i] = vAscendente[i];
    }

    sort(vAscendente, vAscendente + MAX);

    for (int i = 0; i < MAX; i++)
    {
        cout << vAscendente[i] << endl;
    }

    cout << endl;

    for (int i = 0; i < MAX; i++)
    {
        cout << vSecuencia[i] << endl;
    }

    return 0;
}