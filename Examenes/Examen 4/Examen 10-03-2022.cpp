#include <iostream>
#include <vector>
using namespace std;

class Persona{
    string nombre, dni;
    int edad;

    public:
    Persona(int edad = 18){
        this->edad = edad;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    void setEdad(int edad){
        this->edad = edad;
    }

    void setDNI(string dni){
        this->dni = dni;
    }

    string getNombre(){
        return this->nombre;
    }

    int getEdad(){
        return this->edad;
    }
    
    string getDNI(){
        return this->dni;
    }

    void mayoriaEdad(){
        if(this->edad >= 18){
            cout << this->nombre << " es mayor de edad.";
        } else {
            cout << this->nombre << " es menor de edad.";
        }
    }

    void imprimir(){
        cout << "Me llamo " << this->nombre << ", tengo " << this->edad << " años " << "y mi DNI es " << this->dni << endl;
        mayoriaEdad();
    }

};

void joel_arnaud(){
    string nombre;
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre;
}

int main(){
    // Ejercicio 1
    joel_arnaud();
    cout << endl << endl;

    string nombre, dni;
    int edad;

    cout << "¿Como te llamas? ";
    cin >> nombre;
    cout << "¿Cual es tu DNI? ";
    cin >> dni;
    cout << "¿Cuantos años tienes? ";
    cin >> edad;

    // Clase
    Persona p1;
    cout << endl << "Persona 1: " << endl;
    p1.setNombre(nombre);
    p1.setEdad(edad);
    p1.setDNI(dni);
    p1.imprimir();

    cout << endl;
    return 0;
}

//tst