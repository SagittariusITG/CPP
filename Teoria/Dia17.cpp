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

    // Destructor
    ~Ventana(){
        cout << "Pasamos " << endl;
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
    bool estado;
    Ventana Ventanilla;

    void setEstado(bool estado){
        this->estado = estado;
    }

    public:
    Puerta(){
        this->estado = false; // Cerrada
    }

    bool getEstado(){
        return this->estado;
    }

    Ventana & getVentanilla(){
        return this->Ventanilla;
    }

    void abrirPuerta(){
        this->setEstado(true);
    }

    void cerrarPuerta(){
        this->setEstado(false);
    }

    // void Ventana::bajarVentana(){
    //     this->setEstado(true);
    // }

    void imprimir(){
        if(this->estado){
            cout << "Puerta abierta." << endl;
            this->Ventanilla.imprimir();
        } else {
            cout << "Puerta cerrada." << endl;
            this->Ventanilla.imprimir();
        }
    }
};

class Coche{
    bool estado;

    Motor m1;
    Puerta p1, p2;

    void setEstado(bool estado){
        this->estado = estado;
    }

    public:
    Coche(){
        this->estado = false; // Cerrado
    }

    void abrirCoche(){
        this->setEstado(true);
    }

    void cerrarCoche(){
        this->setEstado(false);
    }

    Puerta & getPuertaDer(){
        return this->p1;
    }

    Puerta & getPuertaIzq(){
        return this->p2;
    }

    Motor & getMotor(){
        return this->m1;
    }

    void imprimir(){
        if(estado){
            cout << "Coche abierto" << endl;
            this->p1.imprimir();
            this->p2.imprimir();
            this->m1.imprimir();
        } else {
            cout << "Coche cerrado" << endl;
            this->p1.imprimir();
            this->p2.imprimir();
            this->m1.imprimir();
        }
    }
};

int main(){
    // Motor m1;

    // m1.imprimir();
    // m1.arrancar();
    // m1.imprimir();
    // m1.apagar();
    // m1.imprimir();

    // Ventana v1;

    // v1.imprimir();
    // v1.bajarVentana();
    // v1.imprimir();
    // v1.subirVentana();
    // v1.imprimir();

    // Puerta p1;
    // p1.imprimir();
    // p1.abrirPuerta();
    // p1.imprimir();
    // p1.getVentanilla().bajarVentana();
    // p1.imprimir();

    Coche c1;
    cout << "Vemos el coche." << endl << endl;
    c1.imprimir();
    cout << endl << "Abrimos el coche." << endl << endl;
    c1.abrirCoche();
    c1.imprimir();
    cout << endl << "Arrancamos el motor." << endl << endl;
    c1.getMotor().arrancar();
    c1.imprimir();
    cout << endl << "Abrimos la puerta derecha." << endl << endl;
    c1.getPuertaDer().abrirPuerta();
    c1.imprimir();
    cout << endl << "Abrimos la ventanilla izquierda." << endl << endl;
    c1.getPuertaIzq().getVentanilla().bajarVentana();
    c1.imprimir();
    cout << endl << "Cerramos todo el coche." << endl << endl;
    c1.getPuertaIzq().getVentanilla().subirVentana();
    c1.getPuertaDer().cerrarPuerta();
    c1.getMotor().apagar();
    c1.cerrarCoche();
    c1.imprimir();


    return 0;
}