#include <iostream>
#include <vector>
using namespace std;

// class Cargador{
//     bool test;

//     Adaptador adapt1;
//     Cable cbl1;

//     public:
//     Cargador(){
//         this->test = true; // Tengo el cargador
//     }

//     Adaptador & getAdaptador(){
//         return this->adapt1;
//     }

//     Cable & getCable(){
//         return this->cbl1;
//     }

//     void setEstado(bool estado = true){
//         this->test = estado;
//     }
    
//     bool getEstado(){
//         return this->test;
//     }

//     void imprimir(){
//         this->adapt1.imprimir();
//         this->cbl1.imprimir();
//     }

// };

class Adaptador{
    double potencia;
    int n_puertos;

    public:
    Adaptador(double potencia = 0.1, int puertos = 1){
        this->potencia = potencia;
        this->n_puertos = puertos;
    }

    void setPotencia(double potencia){
        this->potencia = potencia;
    }

    void setPuertos(int puertos){
        if(puertos > 3){
            puertos = 3;
            this->n_puertos = puertos;
        } else {
            this->n_puertos = puertos;
        }
    }

    double getPotencia(){
        return this->potencia;
    }

    int getPuertos(){
        return this->n_puertos;
    }

    void imprimir(){
        cout << "El adaptador tiene " << this->n_puertos << " puerto(s) de " << this->potencia << "v.";
    }
};

class Cable{
    double longitud;
    string tipo_entrada, tipo_salida;
    bool trans_datos;

    public:
    Cable(double longitud = 0.2, string entrada = "USB", string salida = "TIPO C", bool datos = true){
        this->longitud = longitud;
        this->tipo_entrada = entrada;
        this->tipo_salida = salida;
        this->trans_datos = datos;
    }

    void setLongitud(double longitud){
        this->longitud = longitud;
    }

    void setEntrada(string entrada){
        this->tipo_entrada = entrada;
    }

    void setSalida(string salida){
        this->tipo_salida = salida;
    }

    void setTrans_dato(bool datos){
        this->trans_datos = datos;
    }

    double getLongitud(){
        return this->longitud;
    }

    string getEntrada(){
        return this->tipo_entrada;
    }

    string getSalida(){
        return this->tipo_salida;
    }

    bool getTrans_dato(){
        return this->trans_datos;
    }

    void imprimir(){
        cout << "La longitud del cable es de " << this->longitud << "m, el adaptador de entrada es " << this->tipo_entrada << " el adaptador de salida es " << this->tipo_salida << ". ¿Transmite datos? "; 
        if(this->trans_datos){
            cout << "Si.";
        } else {
            cout << "No.";
        };
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

    // clase adaptador
    Adaptador a1;
    a1.setPotencia(2);
    a1.setPuertos(2);
    a1.imprimir();

    //
    cout << endl << endl;

    // clase cable
    Cable c1;
    c1.setLongitud(2);
    c1.setSalida("lightning");
    cout << endl << "Cable 1" << endl << endl;
    c1.imprimir();

    // Clase cargador
    // Cargador prueba;
    // prueba.getAdaptador().setPuertos(2);
    // prueba.getCable().setLongitud(2);
    // prueba.getAdaptador().setPuertos(3);
    // prueba.imprimir();

    cout << endl;
    return 0;
}