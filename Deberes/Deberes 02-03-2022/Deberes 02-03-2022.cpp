#include <iostream>
using namespace std;

class Rectangulo{
    double base;
    double altura;

    public:

    Rectangulo(double base = 1, double altura = 1){
        this->base = base;
        this->altura = altura;
    }

    void setBase(double base){
        (base > 0) ? this->base = base : this->base = 1;
    }

    void setAltura(double altura){
        (altura > 0) ? this->altura = altura : this->altura = 1;
    }

    double getBase(){
        return this->base;
    }

    double getAltura(){
        return this->altura;
    }

    double area(){
        return this->base * this->altura;
    }

    void imprimir(){
        cout << "La base del rectángulo es " << this->base << " y la altura es " << this->altura << ".";
    }
};

class Circulo{
    const double pi = 3.14;
    double radio;

    public:

    Circulo(double radio = 1){
        this->radio = radio;
    }

    void setRadio(double radio){
        (radio > 0) ? this->radio = radio : this->radio = 1;
    }

    double getRadio(){
        return this->radio;
    }

    double area(){
        return this->radio * radio * pi;
    }

    double perimetro(){
        return this->radio * pi * 2;
    }

    void imprimir(){
        cout << "La radio del rectángulo es " << this->radio << ".";
    }
};

int main(){
    cout << endl;

    // Objeto Rectángulo
    Rectangulo r1;

    r1.setBase(15);
    r1.setAltura(6);

    cout << "Rectangulo" << endl;
    r1.imprimir();
    cout << endl;
    cout << "El área del rectángulo 1 es: " << r1.area() << ".";
    cout << endl << endl;

    // Objeto Circulo
    Circulo c1;

    c1.setRadio(5);

    cout << "Circulo" << endl;
    c1.imprimir();
    cout << endl;
    cout << "El área del circulo 1 es: " << c1.area() << "." << endl;
    cout << "El perímetro del circulo 1 es: " << c1.perimetro() << ".";


    cout << endl << endl;
    return 0;
}