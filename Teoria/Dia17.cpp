#include <iostream>
using namespace std;

class Motor{
    bool estado;

    void setEstado(bool estado){
        this->estado = estado;
    }

    public:
    Motor(){
        estado = false; // Apagado
    }

    bool getEstado(){
        return this->estado;
    }

    void arrancar(){
        this->setEstado(true);
    }

    void apagar(){
        this->setEstado(false);
    }

    void imprimir(){
        if(this->estado){
            cout << "Motor encendido." << endl;
        } else {
            cout << "Motor apagado." << endl;
        }
    }
};

class Ventana{
    bool estado;

    void setEstado(bool estado){
        this->estado = estado;
    }

    public:
    Ventana(){
        estado = false; // Cerrada
    }

    bool getEstado(){
        return this->estado;
    }

    void bajarVentana(){
        this->setEstado(true);
    }

    void subirVentana(){
        this->setEstado(false);
    }

    void imprimir(){
        if(this->estado){
            cout << "Ventana abierta." << endl;
        } else {
            cout << "Ventana cerrada." << endl;
        }
    }
};

class Puerta{
    bool estado, eVentanilla;
    Ventana Ventanilla;

    void setEstado(bool estado){
        this->estado = estado;
    }

    public:
    Puerta(){
        estado = false; // Cerrada
    }

    bool getEstado(){
        return this->estado;
    }

    void abrirPuerta(){
        this->setEstado(true);
    }

    void cerrarPuerta(){
        this->setEstado(false);
    }

    void Ventana::bajarVentana(){
        this->setEstado(true);
    }

    void imprimir(){
        if(this->estado){
            cout << "Puerta abierta." << endl;
        } else {
            cout << "Puerta cerrada." << endl;
        }
    }
};

int main(){
    Motor m1;

    m1.imprimir();
    // m1.arrancar();
    // m1.imprimir();
    // m1.apagar();
    // m1.imprimir();

    Ventana v1;

    v1.imprimir();
    // v1.bajarVentana();
    // v1.imprimir();
    // v1.subirVentana();
    // v1.imprimir();

    Puerta p1;
    p1.imprimir();
    p1.abrirPuerta();
    p1.imprimir();


    return 0;
}