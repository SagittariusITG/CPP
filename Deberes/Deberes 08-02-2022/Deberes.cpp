#include <iostream>
using namespace std;

int const size = 10, sizeAjedrez = 9;

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
    string ajedrez[sizeAjedrez][sizeAjedrez]= {
        {"", "A", "B", "C", "D", "E", "F", "G", "H",},
        {"1", "A1", "B1", "C1", "D1", "E1", "F1", "G1", "H1",},
        {"2", "A2", "B2", "C2", "D2", "E2", "F2", "G2", "H2",},
        {"3", "A3", "B3", "C3", "D3", "E3", "F3", "G3", "H3",},
        {"4", "A4", "B4", "C4", "D4", "E4", "F4", "G4", "H4",},
        {"5", "A5", "B5", "C5", "D5", "E5", "F5", "G5", "H5",},
        {"6", "A6", "B6", "C6", "D6", "E6", "F6", "G6", "H6",},
        {"7", "A7", "B7", "C7", "D7", "E7", "F7", "G7", "H7",},
        {"8", "A8", "B8", "C8", "D8", "E8", "F8", "G8", "H8",}
    };

    filas = 10;
    columnas = 10;

    cout << endl << "Matriz todo ceros: " << endl << endl;
    aniadir_matriz(matriz, filas, columnas);
    imprimir_matriz(matriz, filas, columnas);

    cout << endl;

    aniadir_matriz_deseado(deseado, filas, columnas);
    cout << endl << "Matriz con número por pantalla: " << endl << endl;
    imprimir_matriz(deseado, filas, columnas);

    cout << endl << "Tablero de ajedrez: " << endl << endl;
    imprimir_matriz_tablero(ajedrez, sizeAjedrez, sizeAjedrez);

    return 0;
}