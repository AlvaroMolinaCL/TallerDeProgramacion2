/*
Problema B | Laboratorio Búsqueda Completa - Taller de Programación II (IN1071C)

En el archivo PDF, se encuentra el enunciado del problema (en inglés) junto a sus entradas y salidas de ejemplo.
*/

#include <fstream> // ifstream, ofstream
#include <iostream> // Biblioteca estándar de C++
#include <vector> // vector

using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
#endif

    int k, juego;
    bool primerNumero = true;

    while (cin >> k, k)
    {
        vector<int> S;

        if (!primerNumero)
        {
            cout << endl;
        }

        primerNumero = false;

        while (k--)
        {
            cin >> juego;
            S.push_back(juego);
        }

        for (int a = 0; a < S.size() - 5; a++)
        {
            for (int b = a + 1; b < S.size() - 4; b++)
            {
                for (int c = b + 1; c < S.size() - 3; c++)
                {
                    for (int d = c + 1; d < S.size() - 2; d++)
                    {
                        for (int e = d + 1; e < S.size() - 1; e++)
                        {
                            for (int f = e + 1; f < S.size(); f++)
                            {
                                cout << S[a] << " " << S[b] << " " << S[c] << " " << S[d] << " " << S[e] << " " << S[f] << endl;
                            }
                        }
                    }
                }
            }
        }
    }

    return 0;
}