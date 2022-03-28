#include <iostream>
using namespace std;

class Cable{
    double longitud;
    string tipoE, tipoS;
    bool datos;

    public:

    Cable(double longitud = 1, string tipoE = "E", string tipoS = "S", bool datos = false){
        this->longitud = longitud;
        this->tipoE = tipoE;
        this->tipoS = tipoS;
        this->datos = datos;
    }

    ~Cable(){
        cout << "Destruye cable" << endl;
    }

    void setLongitud(double longitud){
        this->longitud = longitud;
    }

    void setTipoE(string tipoE){
        this->tipoE = tipoE;
    }

    void setTipoS(string tipoS){
        this->tipoS = tipoS;
    }

    void setDatos(bool datos){
        this->datos = datos;
    }

    double getLongitud(){
        return this->longitud;
    }

    string getTipoE(){
        return this->tipoE;
    }

    string getTipoS(){
        return this->tipoS;
    }

    bool getDatos(){
        return this->datos;
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

    cout << endl;
    return 0;
}