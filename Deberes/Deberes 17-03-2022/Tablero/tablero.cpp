#include <iostream>
using namespace std;

class Tablero{
    private:
    int filas;
    int columnas;
    string **tablero;

    void imprimirLinea(){
        for (int j = 0 ; j < this->columnas ; j++){
            cout << "--" ;
        }
        cout << "-" << endl;
    }

    public:
    Tablero(){
        this->filas = 8;
        this->columnas = 8;
        tablero = new string*[filas];

        for (int i = 0 ; i < filas ; i++){
            tablero[i] = new string[columnas];
        }
    }

    void rellenarTablero(string relleno){
        for (int i = 0 ; i < this->filas ; i++){
            for (int j = 0 ; j < this->columnas ; j++){
                tablero[i][j] = relleno;
            }
        }
    }

    void rellenarTableroValorCol(){
        int contadorF, contadorC = 0;
        for (int i = 0 ; i < this->filas ; i++){
            for (int j = 0 ; j < this->columnas ; j++){
                tablero[i][j] = contador;
            }
            contador += 1;
        }
    }

    void imprimir(){
        this->imprimirLinea();
        for (int i = 0 ; i < this->filas ; i++){
            cout << "|";
            for (int j = 0 ; j < this->columnas ; j++){
                cout << tablero[i][j] << "|";
            }
            cout << endl;
            this->imprimirLinea();
        }
    }

};

int main(){
    string valor;
    Tablero tablero;
    tablero.rellenarTablero("0");
    tablero.imprimir();

    cout << endl << "Escribe un valor para rellenar el tablero del mismo: ";
    cin >> valor;

    cout << endl;

    tablero.rellenarTablero(valor);
    tablero.imprimir();

    cout << endl << "Tablero posición fila" << endl << endl;

    tablero.rellenarTableroValorCol();
    tablero.imprimir();

    return 0;
}