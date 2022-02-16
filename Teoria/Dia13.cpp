#include <iostream>
#include <vector>
using namespace std;

void imprimir_vect(vector<double> vect){
    for(int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}

void nums_0_10(){
    vector<double> vect(10);
    for(int i = 0; i < vect.size(); i++){
        vect[i] += i;
    }
    imprimir_vect(vect);
}

vector<double> nums_0_10_vect(int size){
    vector<double> vect(10);
    for(int i = 0; i < size; i++){
        vect[i] += i;
    }
    return vect;
}

vector<double> rellenar_0_10(){
    vector<double> vect;
    for(int i = 0; i < 10; i++){
        vect.push_back(i+1);
        cout << "En la posición " << i << " el tamaño del vector es: " << vect.size() << endl;
        cout << "En la posición " << i << " la capacidad del vector es: " << vect.capacity() << endl;
    }
    return vect;
}

int main(){

    // Inicialización de vectores
    vector<int> vecInt;
    vector<double> vecDou(10, 0), vecCopia, vecCerDie(10); // Crea un vector de tamaño 10 relleno de 0s.

    // Copiar contenido vector
    vecCopia = vecDou;
    vecCopia[4] = 24;

    // Imprimir vector
    cout << "El vector original es: ";
    imprimir_vect(vecDou);
    cout << endl << endl;

    // Imprimir copia de vector
    cout << "El vector copiado es: ";
    imprimir_vect(vecCopia);
    cout << endl << endl;

    // Rellenar vector 0 al 9 sin devolver vector
    cout << "Vector del 1 al 9: ";
    nums_0_10();
    cout << endl << endl;

    // Rellenar vector 0 al 9 devolviendo vector
    cout << "Vector 0 al 9 que no sea void: ";
    vecCerDie = nums_0_10_vect(10);
    imprimir_vect(vecCerDie);
    cout << endl << endl;

    // Booleano comprobación si un vector está vacío o no
    cout << "¿Vacío (0 no, 1 si)? " << vecCerDie.empty();
    cout << endl << endl;

    // Rellenar vector 0 al 9 devolviendo vector por detrás
    cout << "Vector 0 al 9 que no sea void por detrás (sin tamaño): " << endl << endl;
    vecCerDie = rellenar_0_10();
    cout << endl;
    imprimir_vect(vecCerDie);
    // cout << endl << endl;

    cout << endl;
    return 0;
}