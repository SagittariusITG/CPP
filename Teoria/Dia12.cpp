#include <iostream>
using namespace std;

void cantidad_nums(int &n, string &line){
    cout << "Num de colroes: "; 
    getline(cin, line);
    n = stoi(line);
}

void introducir_array(string* colores, int &n){
    for(int i = 0; i < n; i++){
        cout << "Introduce un color: ";
        getline(cin, colores[i]);
    }
}

void imprimir_array(string* colores, int &n){
    for(int i = 0; i < n; i ++){
        cout << colores[i] << " ";
    }
}

int main(){
    string* colores = NULL;
    int n;
    string line;

    cantidad_nums(n, line);

    colores = new string[n];

    introducir_array(colores, n);

    imprimir_array(colores, n);

    cout << endl;
    return 0;
}