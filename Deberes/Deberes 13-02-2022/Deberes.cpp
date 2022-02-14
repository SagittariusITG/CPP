#include <iostream>
using namespace std;

void long_array(int &n, string &line){
    cout << "Introduce la longitud del array: "; 
    getline(cin, line);
    n = stoi(line);
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
        cout << colores[i] << " | ";
    }
}

double* subirNotaArray (double* array, int tama, double porcentaje){
    for(int i = 0; i < tama; i++){
        porcentaje = porcentaje * array[i] / 100;
        array[i] += porcentaje;
    }
    return array;
}

int main(){
    double* notas;
    double* subida;
    int num;
    string lline;

    long_array(num, lline);
    notas = new double[num];

    notas = rellenar_array_notas(num);
    cout << "Las notas son: | "; imprimir_array_double(notas, num);
    cout << endl;

    subida = notas;
    subida = subirNotaArray(subida, num, 20);
    cout << endl;

    cout << endl << "Las notas subidas son: | ";
    imprimir_array_double(subida, num);

    cout << endl;

    return 0;
}