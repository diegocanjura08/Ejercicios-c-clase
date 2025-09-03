#include <iostream>

using namespace std;

//calcular promedio
float promedio(float notas[], int m) {
    float suma = 0;
    for (int i = 0; i < m; i++) {
        suma += notas[i];
    }
    return suma / m;
}

//contar aprobados y reprobados
void contarAprobados(float promedios[], int n) {
    int aprobados = 0, reprobados = 0;
    for (int i = 0; i < n; i++) {
        if (promedios[i] >= 6.0)
            aprobados++;
        else
            reprobados++;
    }

    cout << "\nResumen final:" << endl;
    cout << "Aprobados: " << aprobados << endl;
    cout << "Reprobados: " << reprobados << endl;
}

int main() {
    int n, m;
    cout << "Ingrese el numero de estudiantes: ";
    cin >> n;
    cout << "Ingrese el numero de notas por estudiante: ";
    cin >> m;

    float notas[m]; 
    float promedios[n];  

    for (int i = 0; i < n; i++) {
        cout << "\nEstudiante " << i + 1 << endl;
        for (int j = 0; j < m; j++) {
            cout << "Nota " << j + 1 << ": ";
            cin >> notas[j];
        }
        promedios[i] = promedio(notas, m);
        cout << "Promedio del estudiante " << i + 1 << ": " << promedios[i] << endl;
    }

    contarAprobados(promedios, n);

    return 0;
}
