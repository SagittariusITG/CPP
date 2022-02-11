#include <iostream>
using namespace std;

void long_array(int &n, string &line){
    cout << "Introduce la longitud del array: "; 
    getline(cin, line);
    n = stoi(line);
}

void introducir_array(string* colores, int &n){
    for(int i = 0; i < n; i++){
        cout << "Introduce un color: "; getline(cin, colores[i]);
    }
}

void imprimir_array(string* colores, int &n){
    for(int i = 0; i < n; i ++){
        cout << colores[i] << " ";
    }
}

double* rellenar_array_notas(int tama){
    double* array = new double[tama];
    string line;
    for(int i = 0; i < tama; i++){
        cout << "Introduce una nota: ";
        getline(cin, line);
        array[i] = stod(line);
    }
    return array;
}

void imprimir_array_double(double* colores, int &n){
    for(int i = 0; i < n; i ++){
        cout << colores[i] << " ";
    }
}

int main(){
    // Primera parte
    string* colores = NULL;
    int n;
    string line;

    long_array(n, line);

    colores = new string[n];

    introducir_array(colores, n);

    imprimir_array(colores, n);
    cout << endl;

    // Segunda parte
    double* notas;
    int num;
    string lline;

    long_array(n, lline);
    notas = new double[num];

    notas = rellenar_array_notas(n);
    imprimir_array_double(notas, n);

    cout << endl;

    return 0;
}