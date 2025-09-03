#include <iostream>

using namespace std;

struct Empleado {
    string nombre;
    int edad;
    float salario;
};

//lista de empleados
void mostrarEmpleados(Empleado empleados[], int n) {
    cout << "\nLista de empleados" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << empleados[i].nombre << endl;
        cout << "Edad: " << empleados[i].edad << endl;
        cout << "Salario: $" << empleados[i].salario << endl;
    }
}

//empleado con mayor salario
Empleado mayorSalario(Empleado empleados[], int n) {
    Empleado mayor = empleados[0];
    for (int i = 1; i < n; i++) {
        if (empleados[i].salario > mayor.salario) {
            mayor = empleados[i];
        }
    }
    return mayor;
}

int main() {
    const int N = 5;
    Empleado empleados[N];

    cout << "Ingrese los datos de " << N << " empleados:\n";
    for (int i = 0; i < N; i++) {
        cout << "\nEmpleado " << i + 1 << ":\n";
        cout << "Nombre: ";
        cin >> empleados[i].nombre;
        cout << "Edad: ";
        cin >> empleados[i].edad;
        cout << "Salario: ";
        cin >> empleados[i].salario;
    }

    mostrarEmpleados(empleados, N);

    Empleado mejor = mayorSalario(empleados, N);
    cout << "\nEmpleado con mayor salario:" << endl;
    cout << "Nombre: " << mejor.nombre << endl;
    cout << "Edad: " << mejor.edad << endl;
    cout << "Salario: $" << mejor.salario << endl;

    return 0;
}
