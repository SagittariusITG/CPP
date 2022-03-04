#include <iostream>
#include <vector>
using namespace std;

void imprimir_vect(vector<int> vect){
    for(int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}

vector<int> rellenarVector(){
    vector<int> vect;
    int numero, tama;

    cout << "¿Cuantos números quieres introducir? ";
    cin >> tama;

    for(int i = 0; i < tama; i++){
        cout << "Introduce un número ";
        cin >> numero;
        vect.push_back(numero);
    }
    return vect;
}

vector<int> insertar(vector<int> vect, int position, int numero){
    vect.insert(vect.begin() + position, numero);
    return vect;
}

vector<int> impares(vector<int> vect){
    for(int i = 9; i > 0; i-=2){
        vect = insertar(vect, 0, i);
    }
    return vect;
}

int main(){
    vector<int> vecCerDie, vectInsert, vectInsertImp;
    int n_impares;

    cout << endl;
    vecCerDie = rellenarVector();
    cout << endl << endl;
    imprimir_vect(vecCerDie);
    cout << endl << endl;

    cout << "Insertar en vector." << endl;
    vectInsert = insertar(vectInsert, 0, 20);
    imprimir_vect(vectInsert);
    cout << endl << endl;

    cout << "Insertar numeros impares." << endl;
    vectInsertImp = impares(vectInsertImp);
    imprimir_vect(vectInsertImp);
    cout << endl << endl;



    return 0;
}