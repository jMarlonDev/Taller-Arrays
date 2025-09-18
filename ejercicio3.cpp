/*
Desarrolla un programa que calcule la transpuesta de una matriz
*/

#include <iostream>
using namespace std;

// La matriz de números es una variable global
int numeros[3][4] =
    {
        {1, 3, 4, 6},
        {3, 4, 5, -8},
        {4, 5, 7, 8}};

int traspuesta[4][3];

/*
Intercambiamos los valores del tamaño de la matriz
para acomodar las columnas como filas
*/

void mostrarMatriz()
{
  cout << "Matriz Original... \n";
  for (int filas = 0; filas < 3; filas++)
  {
    for (int columnas = 0; columnas < 4; columnas++)
    {
      cout << numeros[filas][columnas] << "   ";
    }
    cout << "\n";
  }

  cout << "\n";
}

void copiarElementos()
{
  for (int filas = 0; filas < 3; filas++)
  {
    for (int columnas = 0; columnas < 4; columnas++)
    {
      traspuesta[columnas][filas] = numeros[filas][columnas];
    }
  }
}

void mostrarTraspuesta()
{
  cout << "Matriz Traspuesta...\n";
  for (int filas = 0; filas < 4; filas++)
  {
    for (int columnas = 0; columnas < 3; columnas++)
    {
      cout << traspuesta[filas][columnas] << "   ";
    }

    cout << "\n";
  }
}

int main()
{
  mostrarMatriz();
  copiarElementos();
  mostrarTraspuesta();
}
