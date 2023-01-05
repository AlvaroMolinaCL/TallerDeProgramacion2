/* Algoritmo de Prim */

#include <fstream>
#include <iostream>
#include <queue>
#include <vector>

using namespace std;

vector<vector<pair<int, int>>> listaAdyacencia;
vector<int> vDistancias;

void nuevaLista(int n)
{
	for (int i = 0; i <= n; i++)
	{
		vDistancias.push_back(INT32_MAX);
		vector<pair<int, int>> nodo = {};
		listaAdyacencia.push_back(nodo);
	}
}

void nuevaArista(int nodo1, int nodo2, int peso)
{
	listaAdyacencia[nodo1].push_back(pair<int, int>(nodo2, peso));
	listaAdyacencia[nodo2].push_back(pair<int, int>(nodo1, peso));
}

void imprimirLista()
{
	for (int i = 0; i < listaAdyacencia.size(); i++)
	{
		cout << i << ": ";
		for (int j = 0; j < listaAdyacencia[i].size(); j++)
		{
			cout << listaAdyacencia[i][j].first << " ";
		}
		cout << endl;
	}
}

void prim()
{
	vDistancias[1] = 0;

	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> siguiente;
	siguiente.push(pair<int, int>(0, 1));

	while (!siguiente.empty())
	{
		int nodo = siguiente.top().second;
		int distancia = siguiente.top().first;

		siguiente.pop();

		if (distancia <= vDistancias[nodo])
		{
			for (int i = 0; i < listaAdyacencia[nodo].size(); i++)
			{
				int vecino = listaAdyacencia[nodo][i].first;
				int peso = listaAdyacencia[nodo][i].second;

				if (vDistancias[vecino] > peso)
				{
					vDistancias[vecino] = peso;
					siguiente.push(pair<int, int>(vDistancias[vecino], vecino));
				}
			}
		}
	}
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
	ifstream cin("input.txt");
	ofstream cout("output.txt");
#endif

	int casosPrueba;
	cin >> casosPrueba;

	for (int i = 0; i < casosPrueba; i++)
	{
		int n, m, nodo1, nodo2, peso;
		cin >> n >> m;
		nuevaLista(n);
		for (int j = 0; j < m; j++)
		{
			cin >> nodo1 >> nodo2 >> peso;
			nuevaArista(nodo1, nodo2, peso);
		}
		prim();
		int suma = 0;
		for (int j = 1; j < vDistancias.size(); j++)
		{
			suma += vDistancias[j];
		}
		cout << suma << endl;
		listaAdyacencia.clear();
		vDistancias.clear();
	}

	return 0;
}