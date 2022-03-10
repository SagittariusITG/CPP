#include <iostream>
#include <vector>
#include <math.h>
using namespace std;

class Poligono{
    private:
    vector<double> lados;
    public:
    Poligono(vector<double> lados = {10, 10, 10, 10}){
        setLados(lados);
    }

    void setLados(vector<double> lados){
        this->lados = lados;
    }

    void setLado(int pos, double lado){
        if(pos < this->numeroLados())
            this->lados[pos] = lado;
    }

    double getPosLado(int pos){
        return this->lados[pos];
    }

    int numeroLados(){
        return this->lados.size();
    }

    double perimetro(){
        double suma = 0;
        for(double i : this->lados){
            suma += i;
        }
        return suma;
    }

    void imprimir(){
        for(double i : this->lados){
            cout << i << endl;
        }
    }
};

int main(){
    vector<double> ladosTriangulo = {10, 15, 20};
    Poligono Triangulo;
    Triangulo.setLados(ladosTriangulo);
    Triangulo.imprimir();
    Triangulo.setLado(0, 15);
    Triangulo.imprimir();

    cout << Triangulo.numeroLados();

    cout << endl;

    return 0;
}