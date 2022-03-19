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

    void imprimir()
    {
        for(int i = 0; i < this->rows; i++)
        {
            cout << "----------\n";
            for(int j = 0; j < this->cols; j++)
            {
                cout << board[i][j++] << " | " << board[i][j++] << " | " << board[i][j++] << endl;
            }
        }
        cout << "----------\n";
    }
};

int main()
{
    Tablero t1;
    // t1.setRows(6);
    // t1.setCols(6);
    t1.imprimir();

    return 0;
}