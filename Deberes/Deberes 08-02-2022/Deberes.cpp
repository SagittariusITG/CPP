#include <iostream>
using namespace std;

int const size = 10, sizeAjedrez = 8;

void aniadir_matriz(int matriz[size][size], int filas, int columnas){
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[i][j] = 0;
        }
    }
}

void aniadir_matriz_deseado(int matriz[size][size], int filas, int columnas){
    int n;
    n = 0;
    cout << "Escribe el número para las filas: "; cin >> n;
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[i][j] = n;
        }
    }
}

void tablero(string matriz[sizeAjedrez][sizeAjedrez], int filas, int columnas){
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            char letra;
            int n;
            n = 1;
            letra = 'A';
            matriz[i][j] = letra;
            if(letra == 'H'){
                matriz[i][j] = letra + n;
            }
            letra++;
        }
    }
}

void imprimir_matriz(int matriz[size][size], int filas, int columnas) { 
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout << matriz[i][j] << "\t"; 
        }
        cout<<endl; 
    }
}

void imprimir_matriz_tablero(string matriz[sizeAjedrez][sizeAjedrez], int filas, int columnas) { 
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout << matriz[i][j] << "\t"; 
        }
        cout<<endl; 
    }
}


int main(){
    int filas, columnas;
    int matriz[size][size], deseado[size][size];
    string ajedrez[sizeAjedrez][sizeAjedrez];

    filas = 10;
    columnas = 10;

    cout << endl << "Matriz todo ceros: " << endl << endl;
    aniadir_matriz(matriz, filas, columnas);
    imprimir_matriz(matriz, filas, columnas);

    cout << endl;

    aniadir_matriz_deseado(deseado, filas, columnas);
    cout << endl << "Matriz con número por pantalla: " << endl << endl;
    imprimir_matriz(deseado, filas, columnas);

    tablero(ajedrez, 8, 8);
    cout << endl << "Tablero de ajedrez: " << endl << endl;
    imprimir_matriz_tablero(ajedrez, 8, 8);

    return 0;
}