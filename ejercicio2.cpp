/*
Implementa la búsqueda binaria en un array ordenado
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros = {2, 4, 8, 12, 25, 43, 54, 55, 65, 70};

int busquedaBinaria(vector<int> &numeros, int menor, int mayor, int valorABuscar)
{
  if (mayor >= menor)
  {
    int mitad = menor + (mayor - menor) / 2;

    // Si el elemento se encuentra en la mitad
    if (numeros[mitad] == valorABuscar)
      return mitad;

    if (numeros[mitad] > valorABuscar)
      return busquedaBinaria(numeros, menor, mitad - 1, valorABuscar);

    return busquedaBinaria(numeros, mitad + 1, mayor, valorABuscar);
  }

  // Retorno -1 para decir que no se encontró el elemento dentro del arreglo
  return -1;
}

int main()
{
  int valorAEncontrar;
  cout << "Ingrese el número que quiere buscar dentro del arreglo: ";
  cin >> valorAEncontrar;

  int ultimoElemento = numeros.size();

  int resultado = busquedaBinaria(numeros, 0, ultimoElemento - 1, valorAEncontrar);

  if (resultado == -1)
  {
    cout << "El elemento que buscaste no se encuentra dentro del arreglo :(";
  }
  else
  {

    cout << "El elemento que buscaste se encuentra en el índice: " << resultado;
  }

  return 0;
}
