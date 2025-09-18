/*
Desarrolla un programa que encuentre elementos duplicados de un arreglo
*/

#include <iostream>
#include <vector>
using namespace std;

/*
Lo primero es ordenar los elementos con el
algoritmo de burble sort o burbuja,
crendo una copia con los mismos elementos del arreglo original
para ordenarlos sin alterar los datos del arreglo original
*/

// variables globales: numeros, copiaNúmeros
vector<int> numeros = {2, 3, 12, 45, 123, 89, 125, 1, 9, 8, 12, 8};

// Copia del arreglo de números
vector<int> copiaNumeros = numeros;

void mostrarOriginal(int index)
{
  /*
  Evaluamos con la variables índice si se alcanza
  el caso base de la recursividad que el índice sea
  igual a la cantidad de elementos que hay dentro del arreglo
  si es así se detiene la función
  */

  if (index == numeros.size())
  {
    return; // Detiene la función
  }

  cout << numeros[index] << "\n";
  mostrarOriginal(index + 1);
}

void ordenar()
{
  for (int i = 0; i < copiaNumeros.size(); ++i)
  {
    for (int j = 0; j + 1 < copiaNumeros.size() - i; ++j)
    {
      if (copiaNumeros[j] > copiaNumeros[j + 1])
      {
        int temporal = copiaNumeros[j];
        copiaNumeros[j] = copiaNumeros[j + 1];
        copiaNumeros[j + 1] = temporal;
      }
    }
  }
}

void mostrarCopiaOrdenada(int index)
{
  if (index == copiaNumeros.size())
  {
    return;
  }

  cout << copiaNumeros[index] << "\n";
  mostrarCopiaOrdenada(index + 1);
}

void encontrarDuplicados()
{
  bool duplicados = false;

  for (int i = 1; i < copiaNumeros.size(); ++i)
  {
    if (copiaNumeros[i] == copiaNumeros[i - 1])
    {
      cout << "Elemento duplicado dentro del arreglo: " << copiaNumeros[i] << "\n";
      duplicados = true;
      return;
    }
  }

  cout << "No hay elementos duplicados dentro del arreglo: ";
}

int main()
{
  cout << "Vector original...\n";
  mostrarOriginal(0);
  cout << "\n";

  ordenar();
  cout << "\n";

  cout << "Vector ordenado de menor a mayor...\n";
  mostrarCopiaOrdenada(0);
  cout << "\n";

  encontrarDuplicados();
  return 0;
}
