#include <iostream>
using namespace std;

//Clase
class Persona{
    private:
    char* Nombre;
    int Edad;
    float Sueldo;

    public:
    void setNombre(char*);
    char* getNombre();

    void setEdad(int);
    int getEdad();

    void setSueldo(float);
    float getSueldo();
};

//Metodos de clase (funciones)
void Persona::setNombre(char* nuevoNombre){
    this->Nombre = nuevoNombre;
};
char* Persona::getNombre(){
    return this->Nombre;
};

void Persona::setEdad(int nuevaEdad){
    this->Edad = nuevaEdad;
};
int Persona::getEdad(){
    return this->Edad;
};

void Persona::setSueldo(float nuevoSueldo){
    this->Sueldo = nuevoSueldo;
};
float Persona::getSueldo(){
    return this->Sueldo;
};

//Main
int main(){
    Persona Persona1;
    Persona Persona2;

    Persona1.setNombre("Miguel");
    Persona2.setNombre("Jose");
    Persona1.setEdad(22);
    Persona2.setEdad(43);
    //float sueldoPersona1;
    Persona1.setSueldo(1009.72);
    Persona2.setSueldo(987.64);
    //sueldoPersona1 = Persona1.getSueldo();
    //cout << sueldoPersona1;

    cout << "El sueldo de "<< Persona1.getNombre() << ", de edad " << Persona1.getEdad() << " años, es de: " << Persona1.getSueldo() << "€\n";
    cout << "El sueldo de " << Persona2.getNombre() << ", de edad " << Persona2.getEdad() << " años, es de: " << Persona2.getSueldo() << "€\n";

    return 0;
}