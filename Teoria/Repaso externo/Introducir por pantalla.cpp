#include <iostream>
using namespace std;

class Test {
    char* nombre;
    int monedas;

    public:
    void setNombre(char* nuevoNombre);
    char* getNombre();

    void setMonedas(int nuevaMoneda);
    int getMonedas();
};

void Test::setNombre(char* nuevoNombre){
    this->nombre = nuevoNombre;
}

char* Test::getNombre(){
    return this->nombre;
}

void Test::setMonedas(int nuevaMoneda){
    this->monedas = nuevaMoneda;
}

int Test::getMonedas(){
    return this->monedas;
}

int main(){
    char nombre[20];
    cout << "Introduce tu nombre: ";
    cin >> nombre;

    int monedas;
    cout << "¿Cuantas monedas tienes? ";
    cin >> monedas;

    Test testing1;
    testing1.setNombre(nombre);
    testing1.setMonedas(monedas);

    cout << endl << "Hola " << testing1.getNombre() << ", tienes " << testing1.getMonedas() << " monedas." << endl;
    return 0;
};