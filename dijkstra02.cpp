#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> listaAdyacencia;
vector<int> vDistanciasa;

void nuevaLista(int n)
{
	for (int i = 0; i <= n; i++)
	{
		vDistanciasa.push_back(INT32_MAX);
		vector<pair<int, int>> nodo = {};
		listaAdyacencia.push_back(nodo);
	}
}

void nuevaArista(int nodo1, int nodo2, int peso)
{
	listaAdyacencia[nodo1].push_back(pair<int, int>(nodo2, peso));
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

void imprimirGrafo()
{
	for (int i = 0; i < listaAdyacencia.size(); i++)
	{
		cout << i << ": ";
		for (int j = 0; j < listaAdyacencia[i].size(); j++)
		{
			cout << listaAdyacencia[i][j].first << " " << listaAdyacencia[i][j].second << " ";
		}
		cout << endl;
	}
}

void dijkstra(int nodoFinal)
{
	vDistanciasa[nodoFinal] = 0;
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> siguiente;
	siguiente.push(pair<int, int>(0, nodoFinal));
	while (!siguiente.empty())
	{
		int nodo = siguiente.top().second;
		int distancia = siguiente.top().first;
		siguiente.pop();
		if (distancia <= vDistanciasa[nodo])
		{
			for (int i = 0; i < listaAdyacencia[nodo].size(); i++)
			{
				int vecino = listaAdyacencia[nodo][i].first;
				int peso = listaAdyacencia[nodo][i].second;
				if (vDistanciasa[vecino] > vDistanciasa[nodo] + peso)
				{
					vDistanciasa[vecino] = vDistanciasa[nodo] + peso;
					siguiente.push(pair<int, int>(vDistanciasa[vecino], vecino));
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
	
	return 0;
}