#include <iostream>
using namespace std;

int suma10 (int num){
  num += 10;
  return num;
}

int suma10 (int* ptrNum){
  *ptrNum += 10;
  return *ptrNum;
}

int main(){
    // Primera parte
    int numero = 10;
    int resultado;

    // cout << "Imprimir numero: " << numero << endl;
    // resultado = suma10(numero);
    // cout << "Imprimir numero depues de sumar10(int): " << numero << endl;
    // cout << "Imprimir resultado depues de sumar10(int): " << resultado << endl;

    // cout << "Imprimir numero: " << numero << endl;
    // resultado = suma10(&numero);
    // cout << "Imprimir numero depues de sumar10(*int): " << numero << endl;
    // cout << "Imprimir resultado depues de sumar10(*int): " << resultado << endl;

    // Segunda parte

    string* colores = NULL;
    int n;
    string line;

    cout << "Valor de NULL: " << colores << endl;

    cout << "Num de colroes: "; 
    getline(cin, line);
    n = stoi(line);

    colores = new string[n];
    cout << colores << endl;

    for(int i = 0; i < n; i++){
        cout << "Introduce un color: ";
        getline(cin, colores[i]);
    }

    cout << endl;

    for(int i = 0; i < n; i ++){
        cout << colores[i] << " ";
    }

    // Liberar espacio (borrar)
    delete [] colores;
    colores = NULL;

    for(int i = 0; i < n; i ++){
        cout << colores[i] << " ";
    }


    cout << endl;
    return 0;
}