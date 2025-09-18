/*
Crea un programa que encuentre la mediana de un array

La mediana es el valor de dividir un conjunto de números
entre dos para hallar el valor que se encuentra en el centro

Para esto existen dos fórmulas para encontrar este valor
en un conjunto de datos

1. Los datos deben estar ordenados de menor a mayor
2. Cuando la cantidad de elementos en el conjunto es un número impar
   lo que hacemos sumar esa cantidad por 1 y luego dividirlo entre dos
   Mediana = (n+1) ÷ 2

3. Cuando la cantidad de elementos es Par
n÷2
(n÷2)+1
*/

#include <iostream>
#include <vector>
using namespace std;

vector<int> numeros = {11, 11, 15, 23, 24, 32, 33, 43, 54, 67, 88};

void mostrarElementos(vector<int> &numeros, int index)
{
  // caso base
  if (index == numeros.size())
  {
    return; // Para la función
  }

  cout << numeros[index] << "\n";
  mostrarElementos(numeros, index + 1);
}

void calcularMediana(vector<int> &numeros)
{
  int cantidadElementos = numeros.size();
  double mediana;

  // Caso cuando es Par
  if (cantidadElementos % 2 == 0)
  {
    int mitad = cantidadElementos / 2;
    // se resta -1 ya que necesitamos los dos valores centrales
    // Y los arreglos empiezan con índice 0
    int segundaMitad = mitad - 1;
    mediana = (numeros[mitad] + numeros[segundaMitad]) / 2.0;
    cout << "La mediana es: " << mediana;
    return;

    // 28
  }

  // caso Impar
  int mitad = cantidadElementos / 2;
  mediana = numeros[mitad];
  cout << "La mediana es: " << mediana;

  // 32
}

int main()
{
  calcularMediana(numeros);
  return 0;
}
