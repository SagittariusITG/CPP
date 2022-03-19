#include <iostream>
using namespace std;

class Tablero{
    char board[0][0];
    int rows, cols;

    public:
    Tablero(int rows = 3, int cols = 3)
    {
        this->rows = rows;
        this->cols = cols;
        this->board[0][0] = this->board[rows][cols];
    }

    void setRows(int rows)
    {
        this->rows = rows;
    }

    void setCols(int cols)
    {
        this->cols = cols;
    }

    int getRows()
    {
        return this->rows;
    }

    int getCols()
    {
        return this->cols;
    }

    void imprimir(int rows = 3, int cols = 3)
    {
        for(int i = 0; i < rows; i++)
        {
            cout << "----------\n";
            for(int j = 0; j < cols; j++)
            {
                cout << board[i][j++] << " | " << board[i][j++] << " | " << board[i][j++] << endl;
            }
        }
        cout << "----------\n";
    }
};

int main()
{
    int filas, columnas;
    Tablero t1;

    filas = 3;
    columnas = 3;

    // Introducción
    cout << "¡Hola! Bienvenid@ a mi Tic-Tac-Toe." << endl << endl << "¿De qué tamaño quieres el tablero? Para dejarlo en default escribe 0, 1 o 2 en las opciones." << endl << "Filas: ";
    cin >> filas;
    cout <<  "Columnas: ";
    cin >> columnas;

    if(filas <= 2 && columnas <= 2)
    {
        filas = 3;
        columnas = 3;
    }

    cout << endl;

    // Llamada clase tablero
    t1.setRows(filas);
    t1.setCols(columnas);
    t1.imprimir();

    return 0;
}