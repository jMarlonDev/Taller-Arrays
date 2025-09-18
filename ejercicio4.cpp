/*
Crea un sistema de inventario simple con arrays
funcion pendiente para eliminar un producto
*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

/*
Clase Producto: Donde se definen los valores del
tipo de elementos que se van a guardar en el arreglo
*/

class Producto
{
public:
  string nombre;
  int cantidadProducto;
  int precio;
};

vector<Producto> inventario;

Producto crearProducto()
{
  string nombre;
  int cantidadProducto, precio;

  cout << "Ingrese el nombre del elemento: ";
  cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Limpia la entrada del caracter \n para la nueva linea
  getline(cin, nombre);

  cout << "Ingrese la cantidad que va a tener el elemento: ";
  cin >> cantidadProducto;

  cout << "Ingrese el precio que va a tener el elemento: ";
  cin >> precio;

  Producto nuevoProducto = {nombre, cantidadProducto, precio};
  cout << "\n";
  return nuevoProducto;
}

void agregarElementos(vector<Producto> &inventario)
{
  int cantidadElementos;
  cout << "Ingrese la cantidad de elementos que quiere agregar: ";
  cin >> cantidadElementos;

  for (int e = 0; e < cantidadElementos; e++)
  {
    Producto nuevoProducto = crearProducto();
    inventario.push_back(nuevoProducto);
  }
}

void mostrarElementos(vector<Producto> &inventario, int index)
{
  if (inventario.size() == 0)
  {
    cout << "No hay elementos agregados al inventario...\n\n";
    return;
  }

  if (index == inventario.size())
  {
    // Para la función cuando se cumple el caso base
    // Donde el índice alcanza el tamaño del vector
    return;
  }

  cout << "Nombre: " << inventario[index].nombre << "\n";
  cout << "Cantidad: " << inventario[index].cantidadProducto << "\n";
  cout << "Precio: " << inventario[index].precio << "\n\n";
  mostrarElementos(inventario, index + 1);
}

char menu()
{
  char opcion;
  cout << "Menu del sistema de inventario...\n";
  cout << "[1]. Agregar productos al inventario.\n";
  cout << "[2]. Mostrar elementos.\n";
  cout << "[3]. Salir del inventario.\n";
  cout << "Ingresa un opción entre [ 1 - 3 ]: ";
  cin >> opcion;

  cout << "\n";

  return opcion;
}

void operacionesInventario()
{
  char opcion;
  do
  {
    opcion = menu();
    switch (opcion)
    {
    case '1':
      agregarElementos(inventario);
      break;

    case '2':
      mostrarElementos(inventario, 0);
      break;

    case '3':
      cout << "Saliendo...";
      break;

    default:
      cout << "Opción no valida..";
      break;
    }
  } while (opcion != '3');
}

int main()
{
  operacionesInventario();
  return 0;
}
