#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// Función de ordenamiento por burbuja
void bubbleSort(vector<int>& lista) {
    int n = lista.size();
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (lista[j] > lista[j + 1]) {
                swap(lista[j], lista[j + 1]);
            }
        }
    }
}

// Función de ordenamiento por selección en orden descendente
void selectionSort(vector<vector<int>>& matriz) {
    int n = matriz.size();
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (matriz[j][j] > matriz[i][i]) {
                swap(matriz[i], matriz[j]);
            }
        }
    }
}

// Función de ordenamiento por inserción
void insertionSort(vector<int>& lista) {
    int n = lista.size();
    for (int i = 1; i < n; i++) {
        int valorActual = lista[i];
        int j = i - 1;
        while (j >= 0 && lista[j] > valorActual) {
            lista[j + 1] = lista[j];
            j--;
        }
        lista[j + 1] = valorActual;
    }
}

int main() {
    // Declaración de la lista de números
    vector<int> numeros = {7, 3, 9, 2, 5, 1, 8, 4, 6, 0};

    // Operaciones matemáticas
    int suma = numeros[0] + numeros[numeros.size() - 1];
    int producto = numeros[1] * numeros[4];
    int resto = numeros[5] % numeros[2];

    // Operaciones lógicas
    bool comparacion = suma > producto;
    bool es_cero = resto == 0;

    // Ordenamiento de la lista utilizando el algoritmo de burbuja
    bubbleSort(numeros);

    // Impresión de la lista ordenada
    cout << "Lista ordenada: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    // Creación de la matriz
    vector<vector<int>> matriz = {
                                    {4, 9, 2},
                                    {1, 5, 7},
                                    {3, 6, 8}
                                    };

    // Ordenamiento de la matriz utilizando el algoritmo de selección en orden descendente
    selectionSort(matriz);

    // Impresión de la matriz ordenada
    cout << "Matriz ordenada:" << endl;
    for (const auto& fila : matriz) {
        for (int num : fila) {
            cout << num << " ";
        }
        cout << endl;
    }

    // Llamada a la función de ordenamiento por inserción con la lista "numeros"
    insertionSort(numeros);

    // Impresión de la lista ordenada por inserción
    cout << "Lista ordenada por inserción: ";
    for (int num : numeros) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
