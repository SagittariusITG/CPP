#include <iostream>
using namespace std;

class Rectangulo{
    double base;
    double altura;
    string color;

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

    void setColor(string color){
        this->color = color;
    }

    double getBase(){
        return this->base;
    }

    double getAltura(){
        return this->altura;
    }

    string getColor(){
        return this->color;
    }

    double area(){
        return this->base * this->altura;
    }

    void imprimir(){
        cout << "La base del rectángulo es " << this->base << " y la altura es " << this->altura << "." << endl;
        cout << "El área del rectángulo 1 es: " << area() << "." << endl;
        cout << "El color del rectángulo es: " << this->color << ".";
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
        cout << "La radio del rectángulo es " << this->radio << "." << endl;
        cout << "El área del circulo 1 es: " << area() << "." << endl;
        cout << "El perímetro del circulo 1 es: " << perimetro() << ".";
    }
};

int main(){
    cout << endl;

    // Objeto Rectángulo
    Rectangulo r1;

    r1.setBase(15);
    r1.setAltura(6);
    r1.setColor("verde");

    cout << "Rectangulo" << endl;
    r1.imprimir();
    cout << endl << endl;

    // Objeto Circulo
    Circulo c1;

    c1.setRadio(5);

    cout << "Circulo" << endl;
    c1.imprimir();
    cout << endl << endl;

    // Objeto Triángulo

    cout << endl << endl;
    return 0;
}