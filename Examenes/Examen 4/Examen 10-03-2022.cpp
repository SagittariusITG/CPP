#include <iostream>
#include <vector>
using namespace std;

class Persona{
    string nombre, dni;
    int edad, vip;

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

    void setVip(int vip){
        this->vip = vip;
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

    int getVip(){
        return this->vip;
    }

    void mayoriaEdad(){
        if(this->edad >= 18){
            cout << this->nombre << " es mayor de edad.";
        } else {
            cout << this->nombre << " es menor de edad.";
        }
    }

    void multiplo3(){
        // int suma;

        // for(int i = 0; i < 3; i++){
        //     suma += this->vip;
        // }

        if(this->vip % 11 == 0){
            cout << "Es multiplo de 11.";
        } else {
            cout << "No es multiplo de 11.";
        }
    }

    void imprimir(){
        cout << "Me llamo " << this->nombre << ", tengo " << this->edad << " años " << "y mi DNI es " << this->dni << endl;
        mayoriaEdad();
        cout << endl;
        multiplo3();
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
    int edad, vip;

    cout << "¿Como te llamas? ";
    cin >> nombre;
    cout << "¿Cual es tu DNI? ";
    cin >> dni;
    cout << "¿Cuantos años tienes? ";
    cin >> edad;
    cout << "¿Cual es tu número? ";
    cin >> vip;

    // Clase
    Persona p1;
    cout << endl << "Persona 1: " << endl;
    p1.setNombre(nombre);
    p1.setEdad(edad);
    p1.setDNI(dni);
    p1.setVip(vip);
    p1.imprimir();

    cout << endl;
    return 0;
}