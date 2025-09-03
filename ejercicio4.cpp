#include <iostream>
#include <cstdlib>
#include <ctime>    

using namespace std;

const int filas = 5;
const int columnas = 5;

//rellenar matriz con números aleatorios
void rellenarMatriz(int matriz[filas][columnas]) {
    srand(time(0)); 
    
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            matriz[i][j] = rand() % 100 + 1; 
        }
    }
}

//mostrar matriz
void mostrarMatriz(int matriz[filas][columnas]) {
    cout << "\nMATRIZ 5x5: " << endl;
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            cout << matriz[i][j] << "\t";
        }
        cout << endl;
    }
}

//suma de filas y columnas
void calcularSumas(int matriz[filas][columnas]) {
    int sumaFila, sumaColumna;
    
    cout << "\nSuma de filas: " << endl;
    for(int i = 0; i < filas; i++) {
        sumaFila = 0;
        for(int j = 0; j < columnas; j++) {
            sumaFila += matriz[i][j];
        }
        cout << "Fila " << i+1 << ": " << sumaFila << endl;
    }
    
    cout << "\nSuma de columnas: " << endl;
    for(int j = 0; j < columnas; j++) {
        sumaColumna = 0;
        for(int i = 0; i < filas; i++) {
            sumaColumna += matriz[i][j];
        }
        cout << "Columna " << j+1 << ": " << sumaColumna << endl;
    }
}

// Función para encontrar el número mayor y su posición
void encontrarMayor(int matriz[filas][columnas]) {
    int mayor = matriz[0][0];
    int filaMayor = 0;
    int columnaMayor = 0;
    
    for(int i = 0; i < filas; i++) {
        for(int j = 0; j < columnas; j++) {
            if(matriz[i][j] > mayor) {
                mayor = matriz[i][j];
                filaMayor = i;
                columnaMayor = j;
            }
        }
    }
    
    cout << "\nEl numero mayor es: " << mayor << endl;
    cout << "Posicion: (" << filaMayor+1 << "," << columnaMayor+1 <<   ")" << endl;
}

int main() {
    int matriz[filas][columnas];
    
    rellenarMatriz(matriz);
    
    mostrarMatriz(matriz);
    
    calcularSumas(matriz);
    
    encontrarMayor(matriz);
    
    return 0;
}
