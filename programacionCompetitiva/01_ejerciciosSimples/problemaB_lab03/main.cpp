/*
Problema B | Laboratorio 3 - Taller de Programación II (IN1071C)

Lea 3 números del tipo punto flotante (A, B y C) y verifique si es posible realizar un triángulo con ellos.
Si esto es posible, calcular el perímetro del triángulo y mostrar el siguiente mensaje:

Perimetro = XX.X

Si esto no es posible, calcular el área de un trapecio, cuyas bases son A, B y su altura es C, y mostrar el siguiente mensaje:

Area = XX.X

-- Entrada --
El archivo de entrada contiene tres valores del tipo punto flotante.

-- Salida --
Imprima el resultado con un dígito luego del punto decimal.

NOTA: En los archivos input.txt y output.txt se encuentran los ejemplos de entrada y salida, respectivamente.
*/

#include <fstream> // ifstream, ofstream
#include <iostream> // Biblioteca estándar de C++

using namespace std;

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
    ifstream cin("input.txt");
    ofstream cout("output.txt");
#endif

	float A, B, C;
	cin >> A >> B >> C;

	if ((A + B) > C && (A + C) > B && (B + C) > A)
	{
		printf("Perimetro = %.1f\n", A + B + C);
	}
	else
	{
		printf("Area = %.1f\n", ((A + B) / 2) * C);
	}

	return 0;
}