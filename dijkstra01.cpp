#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> listaAdyacencia;
vector<int> vDistancias;

void nuevaLista(int n)
{
    for (int i = 0; i < n; i++)
    {
        vDistancias.push_back(INT32_MAX);
        vector<pair<int, int>> nodo = {};
        listaAdyacencia.push_back(nodo);
    }
}

void nuevaArista(int u, int v, int w)
{
	listaAdyacencia[u].push_back(pair<int, int>(v, w));
	listaAdyacencia[v].push_back(pair<int, int>(u, w));
}

int dijkstra(int nodo, int nodoFinal)
{
    vDistancias[nodo] = 0;
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> siguiente;
    siguiente.push(pair<int, int>(0, nodo));

    while (!siguiente.empty())
    {
        int nodo = siguiente.top().second;
        int distancia = siguiente.top().first;
        siguiente.pop();
        if (nodo != nodoFinal && distancia <= vDistancias[nodo])
        {
            for (int i = 0; i < listaAdyacencia[nodo].size(); i++)
            {
                int vecino = listaAdyacencia[nodo][i].first;
                int peso = listaAdyacencia[nodo][i].second;
                if (vDistancias[vecino] > vDistancias[nodo] + peso)
                {
                    vDistancias[vecino] = vDistancias[nodo] + peso;
                    siguiente.push(pair<int, int>(vDistancias[vecino], vecino));
                }
            }
        }
    }
    return vDistancias[nodoFinal];
}

int main(int argc, char const *argv[])
{
	#ifndef ONLINE_JUDGE
	ifstream cin("input.txt");
	ofstream cout("output.txt");
	#endif
	
	return 0;
}