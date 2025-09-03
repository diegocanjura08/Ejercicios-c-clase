#include <iostream>
#include <string>
using namespace std;

struct Producto {
    int codigo;
    string nombre;
    float precio;
    int cantidad;
};

//agregar producto
void agregarProducto(Producto inventario[], int &n) {
    cout << "Codigo: ";
    cin >> inventario[n].codigo;

    cin.ignore();
    cout << "Nombre: ";
    getline(cin, inventario[n].nombre);

    cout << "Precio: ";
    cin >> inventario[n].precio;
    cout << "Cantidad: ";
    cin >> inventario[n].cantidad;
    n++;
}

//buscar producto
void buscarProducto(Producto inventario[], int n, int codigo) {
    for (int i = 0; i < n; i++) {
        if (inventario[i].codigo == codigo) {
            cout << "Producto encontrado: " << endl;
            cout << "Nombre: " << inventario[i].nombre << endl;
            cout << "Precio: " << inventario[i].precio << endl;
            cout << "Cantidad: " << inventario[i].cantidad << endl;
            return;
        }
    }
    cout << "Producto no encontrado." << endl;
}

// Función para calcular el valor total del inventario
float valorInventario(Producto inventario[], int n) {
    float total = 0;
    for (int i = 0; i < n; i++) {
        total += inventario[i].precio * inventario[i].cantidad;
    }
    return total;
}

int main() {
    Producto inventario[100];
    int n = 0;
    int opcion;

    do {
        cout << "\nMenu" << endl;
        cout << "1. Agregar producto" << endl;
        cout << "2. Buscar producto por codigo" << endl;
        cout << "3. Calcular valor total del inventario" << endl;
        cout << "4. Salir" << endl;
        cout << "Opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            agregarProducto(inventario, n);
        } else if (opcion == 2) {
            int codigo;
            cout << "Ingrese el codigo: ";
            cin >> codigo;
            buscarProducto(inventario, n, codigo);
        } else if (opcion == 3) {
            cout << "Valor total: " << valorInventario(inventario, n) << endl;
        }
    } while (opcion != 4);

    return 0;
}
