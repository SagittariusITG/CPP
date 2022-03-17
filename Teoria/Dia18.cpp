#include <iostream>
using namespace std;

class Persona{
    string nombre, dni;

    public:
    Persona(string nombre="joel", string dni="41606084g"){
        this->nombre = nombre;
        this->dni = dni;
    }

    ~Persona(){
        cout << "Adios" << endl;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    string getNombre(){
        return this->nombre;
    }

    void setDNI(string dni){
        this->dni = dni;
    }

    string getDNI(){
        return this->dni;
    }

    void imprimir(){
        cout << "Me llamo " << this->nombre << " y mi DNI es: " << this->dni << ".";
    }

};

class Alumno{
    string clase;
    int curso;

    public:
    Alumno(string nombre="nombreAlumno", string dni="DNIAlumno", string clase="DAW", int curso=1) : Persona(nombre, dni){
        this->clase = clase;
        this->curso = curso;
    }

    ~Alumno(){
        cout << "Adios" << endl;
    }

    void setClase(string clase){
        this->clase = clase;
    }

    string getClase(){
        return this->clase;
    }

    void setCurso(int curso){
        this->curso = curso;
    }

    int getCurso(){
        return this->curso;
    }

    void imprimir(){
        Persona::imprimir();
        cout << "Estoy en el curso " << this->curso << " en la clase: " << this->clase << ".";
    }

};

int main(){
    // Persona p1;
    Alumno a1("Juan", "43905d", "DAW", 1);
    a1.imprimir();
    return 0;
}