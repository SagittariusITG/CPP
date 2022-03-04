#include <iostream>
#include <vector>
using namespace std;

void imprimir_vect(vector<int> vect){
    for(int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}

void imprimir_vect_int_invert(vector<int> vect){
    for(int i = vect.size() - 1; i > 0 - 1; i--){
        cout << vect[i] << " ";
    }
}

void imprimir_vect_str(vector<string> vect){
    for(int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}

vector<string> insertar_nombre(vector<string> vect){
    for(int i = 0; i < 1; i++){
        vect.insert(vect.begin() + i, "Joël Arnaud Carreras");
    }
    return vect;
}

vector<int> insertar(vector<int> vect, int size){
    int n_rnd;
    for(int i = 0; i < size; i++){
        n_rnd = rand() % 10;
        vect.insert(vect.begin() + i, n_rnd);
    }
    return vect;
}

vector<int> doblar(vector<int> vect, int position){
    vect[position-1] = vect[position-1] * 2;
    return vect;
}

vector<int> eliminar(vector<int> vect, int position){
    vect.erase(vect.begin() + position-1);
    return vect;
}

vector<int> copiar_invert(vector<int> vect){
    vector<int> copia;
    for(int i = vect.size()-1; i > 0-1; i--){
        copia.push_back(vect[i]);
    }
    return copia;
}

vector<int> unir_vects(vector<int> vect){
    int num;
    for(int i = 0; i < 4; i++){
        cout << "Introduce un número: ";
        cin >> num;
        vect.insert(vect.begin() + i, num);
    }
    return vect;
}

int main(){
    vector<int> rnd_nums, dobld_nums, elim_nums, copia_nums, ord_nums, dupli_nums, concat_vect, ej_10;
    vector<string> nombre;

    // Ejercicio 1
    cout << endl;
    nombre = insertar_nombre(nombre);
    imprimir_vect_str(nombre);
    cout << endl << endl;

    // Ejercicio 2
    rnd_nums = insertar(rnd_nums, 5);
    cout << "Los números random son: ";
    imprimir_vect(rnd_nums);
    cout << endl << endl;

    // Ejercicio 3
    dobld_nums = doblar(rnd_nums, 3);
    cout << "Doble del tercer número: ";
    imprimir_vect(dobld_nums);
    cout << endl << endl;

    // Ejercicio 4
    elim_nums = eliminar(dobld_nums, 2);
    cout << "Número posición 2 eliminado: ";
    imprimir_vect(elim_nums);
    cout << endl << endl;

    // Ejercicio 5
    cout << "Imprimir array al reves: ";
    imprimir_vect_int_invert(elim_nums);
    cout << endl << endl;

    // Ejercicio 6
    cout << "La copia del array es: ";
    copia_nums = copiar_invert(elim_nums);
    imprimir_vect(copia_nums);
    cout << endl << endl;

    // Ejercicio 7
    cout << "Vector ordenado: ";
    ord_nums = copiar_invert(copia_nums);
    sort(ord_nums.begin(), ord_nums.end());
    imprimir_vect(ord_nums);
    cout << endl << endl;

    // Ejercicio 8
    cout << "Vector sin repetidos: ";
    dupli_nums = copiar_invert(ord_nums);
    unique(dupli_nums.begin(), dupli_nums.end());
    imprimir_vect(dupli_nums);
    cout << endl << endl;

    // Ejercicio 9
    cout << "Vector concatenado: " << endl;
    concat_vect = copiar_invert(dupli_nums);
    concat_vect = unir_vects(dupli_nums);
    imprimir_vect(concat_vect);
    cout << endl << endl;

    // Ejercicio 10
    cout << "Nueva lista con añadidos sin repetidos: ";
    ej_10 = copiar_invert(concat_vect);
    unique(ej_10.begin(), ej_10.end());
    imprimir_vect(ej_10);
    cout << endl;
    
    return 0;
}