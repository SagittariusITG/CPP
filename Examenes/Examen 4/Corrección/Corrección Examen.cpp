#include <iostream>
#include <vector>
using namespace std;

class Persona{
    string nombre, dni;
    int edad;
    bool vip;

    bool esMultiplo(int n_mult, int num){
        return (n_mult % num == 0);
    }

    int sumaVector(vector<int> numVip){
        int suma;
        suma = 0;
        for(int i = 0; i < numVip.size(); i++){
            suma += numVip[i];
        }
        return suma;
    }

    vector<int> solicitarNumeros(int cantidad){
        vector<int> vect;
        int num;

        cout << endl << "Segunda oportunidad!" << endl;
        for(int i = 0; i < cantidad; i++){
            cout << "Introduce tu numero vip (2 intro): ";
            cin >> num;
            vect.push_back(num);
        }
        return vect;
    }

    void setVip(vector<int> numVip){
        this->vip = false;
        int suma;
    
        suma = sumaVector(numVip);

        if(this->esMultiplo(suma, 11)){
            this->vip = true;
        } else {
            bool multiplo_13;
            multiplo_13 = false;

            for(int i = 0; i < numVip.size() && !multiplo_13; i++){
                if(this->esMultiplo(numVip[i], 13)) multiplo_13 = true;
            }

            if(multiplo_13){
                vector<int> vect;

                vect = solicitarNumeros(2);
                suma += sumaVector(vect);

                if(this->esMultiplo(suma, 11)) this->vip = true;

            }
        }
    }

    public:
    Persona(vector<int> numVip, int edad = 18){
        this->edad = edad;
        setVip(numVip);
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
        cout << endl;
        cout << "Es vip: " << this->vip << endl;
    }

};

void joel_arnaud(){
    string nombre;
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre;
}

vector<int> rellenarVector(){
    vector<int> vect;
    int numero, tama;

    tama = 3;

    for(int i = 0; i < tama; i++){
        cout << "Introduce tu número vip (3 intros): ";
        cin >> numero;
        vect.push_back(numero);
    }
    return vect;
}

int main(){
    // Ejercicio 1
    joel_arnaud();
    cout << endl << endl;

    string nombre, dni;
    int edad;
    vector<int> numVip;

    cout << "¿Como te llamas? ";
    cin >> nombre;
    cout << "¿Cual es tu DNI? ";
    cin >> dni;
    cout << "¿Cuantos años tienes? ";
    cin >> edad;

    numVip = rellenarVector();

    // Clase
    Persona p1(numVip);
    cout << endl << "Persona 1: " << endl;
    p1.setNombre(nombre);
    p1.setEdad(edad);
    p1.setDNI(dni);
    p1.imprimir();

    cout << endl;
    return 0;
}