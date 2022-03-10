#include <iostream>
#include <vector>
using namespace std;

class Persona{
    string nombre;
    int edad;
    vector<string> dni;

    public:
    Persona(string nombre, int edad = 18){
        this->nombre = nombre;
        this->edad = edad;
        this->dni = dni;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    void setEdad(int edad){
        this->edad = edad;
    }

    // void setDNI(string dni){
    //     for(int i = 0; i < 9; i++){
    //         this->dni.push_back(dni);
    //     }
    // }

    string getNombre(){
        return this->nombre;
    }

    int getEdad(){
        return this->edad;
    }
    
    // vector<string> getDNI(){
    //     return this->dni;
    // }

    void imprimir(){
        cout << "Me llamo " << this->nombre << ", tengo " << this->edad << " años "; //<< " y mi DNI es: " << this->dni;
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

    // Clase
    Persona p1("");
    cout << "Persona 1: " << endl;
    p1.setNombre("celia");
    // p1.setDNI("41606084g");
    p1.imprimir();

    cout << endl;
    return 0;
}