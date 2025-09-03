#include <iostream>

using namespace std;

struct Estudiante {
    string nombre;
    int edad;
    float promedio;
};

//datos de estudiantes
void insertarDatos(Estudiante* estudiantes, int n) {
    for (int i = 0; i < n; i++) {
        cout << "\nEstudiante " << i + 1 << endl;
        cout << "Nombre: ";
        cin >> estudiantes[i].nombre;
        cout << "Edad: ";
        cin >> estudiantes[i].edad;
        cout << "Promedio: ";
        cin >> estudiantes[i].promedio;
    }
}
//lista de estudiantes
void mostrarLista(Estudiante* estudiantes, int n) {
    cout << "\nLista de estudiantes\n" << endl;
    for (int i = 0; i < n; i++) {
        cout << "Nombre: " << estudiantes[i].nombre << endl;
        cout << "Edad: " << estudiantes[i].edad << endl;
        cout << "Promedio: " << estudiantes[i].promedio << endl;
    }
}

//promedio de estudiantes
void mejorPromedio(Estudiante* estudiantes, int n) {
    int mejor = 0;
    for (int i = 1; i < n; i++) {
        if (estudiantes[i].promedio > estudiantes[mejor].promedio) {
            mejor = i;
        }
    }
    cout << "El estudiante con mejor promedio es: " 
         << estudiantes[mejor].nombre
         << " (Promedio: " << estudiantes[mejor].promedio << ")";
}

int main() {
    int n;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;

    Estudiante* estudiantes = new Estudiante[n];

    insertarDatos(estudiantes, n);
    mostrarLista(estudiantes, n);
    mejorPromedio(estudiantes, n);

    delete[] estudiantes;

    return 0;
}
