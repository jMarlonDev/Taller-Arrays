/*
Implementa el algoritmo de ordenamiento por selección
algoritmo de selection sort
solo es eficiente en el ordenamiento cuando la cantidad de elementos
que se almacenan dentro del arreglo es pequeña
*/

#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> &numeros)
{
  for (int i = 0; i < numeros.size() - 1; i++)
  {
    // Elemento menor
    int menor = i;

    for (int j = i + 1; j < numeros.size(); j++)
    {
      if (numeros[j] < numeros[menor])
      {
        menor = j;
      }
    }

    int temp = numeros[i];
    numeros[i] = numeros[menor];
    numeros[menor] = temp;
  }
}

void mostrarElementos(vector<int> &numeros, int index)
{
  // Caso base
  if (index == numeros.size())
  {
    return; // Se detiene la función
  }

  cout << numeros[index] << "\n";
  mostrarElementos(numeros, index + 1);
}

int main()
{

  vector<int> numeros = {64, 25, 12, 22, 11};
  cout << "Arreglo original: \n";
  mostrarElementos(numeros, 0);

  // Ordenar arreglo con selection sort
  selectionSort(numeros);

  cout << "Arreglo ordenado con selection sort: \n";
  mostrarElementos(numeros, 0);

  return 0;
}
