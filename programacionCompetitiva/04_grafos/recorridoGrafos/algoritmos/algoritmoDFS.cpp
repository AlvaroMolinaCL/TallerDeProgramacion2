/* Algoritmo DFS - Depth First Search | Recorrido de Grafos en Profundidad */

#include <fstream>
#include <iostream>
#include <vector>
#include <stack>

using namespace std;

void nuevaArista(int nodo1, int nodo2, vector<int> *listaAdyacencia)
{
    listaAdyacencia[nodo1].push_back(nodo2);
}

void DFS(int nodoFuente, vector<int> *listaAdyacencia, int n)
{
    int visitado[n + 1] = {0}; // Se marcan inicialmente todos los vértices como no visitados
    stack<int> pilaDFS;        // Se crea una pila para el algoritmo DFS

    pilaDFS.push(nodoFuente); // Se inserta el nodo de inicio a la pila

    while (!pilaDFS.empty()) // Mientras la pila no esté vacía
    {
        nodoFuente = pilaDFS.top(); // Se posiciona el nodo fuente al tope de la pila del DFS
        pilaDFS.pop();              // Se elimina el último nodo insertado a la pila del DFS

        if (!visitado[nodoFuente]) // Si el nodo fuente no ha sido visitado
        {
            cout << nodoFuente << " ";   // Se imprime por pantalla el nodo
            visitado[nodoFuente] = true; // Se marca el nodo como visitado
        }

        for (vector<int>::iterator i = listaAdyacencia[nodoFuente].begin(); i != listaAdyacencia[nodoFuente].end(); i++) // Se recorre toda la lista de adyacencia
        {
            if (!visitado[*i]) // Si un nodo de la lista de adyacencia no ha sido visitado
            {
                pilaDFS.push(*i); // Se inserta el nodo a la pila del DFS
            }
        }
    }
}

int main(int argc, char const *argv[])
{
    // #ifndef ONLINE_JUDGE
    //     ifstream cin("input.txt");
    //     ofstream cout("output.txt");
    // #endif

    int numVertices, numAristas, nodoInicial, nodoFinal;
    vector<int> listaAdyacencia[numVertices + 1];

    cout << "Ingrese el numero de vertices" << endl;
    cin >> numVertices;
    cout << "Ingrese el numero de aristas" << endl;
    cin >> numAristas;

    for (int i = 0; i < numAristas; i++)
    {
        cout << "Ingrese el nodo inicial" << endl;
        cin >> nodoInicial;
        cout << "Ingrese el nodo final" << endl;
        cin >> nodoFinal;

        nuevaArista(nodoInicial, nodoFinal, listaAdyacencia);
    }

    cout << "La representacion del grafo usando lista de adyacencia es" << endl;

    for (int i = 1; i <= numVertices; i++)
    {
        cout << i << " -> ";

        for (vector<int>::iterator j = listaAdyacencia[i].begin(); j != listaAdyacencia[i].end(); j++)
        {
            cout << *j << " -> ";
        }

        cout << endl;
    }

    cout << "El recorrido en profundidad de este grafo es" << endl;
    DFS(1, listaAdyacencia, numVertices);

    return 0;
}