#include <iostream>
using namespace std;

int multiplicacion_de_5(int num){
    return num * 5;
}

// Añadiendo & delante de la variable, pasamos directamente la referencia de memória del número.
// Esto permite añadir el número directamente, lo cual quedará 100% modificado.

// PD: En los array no hace falta poner & ya que lo  coge automáticamente.

void me_multiplico_por_5(int &num){
    num = num * 5;
    cout << "El número pasado por referéncia = " << num << endl;
}

void subir_nota(int notas[], int posicion, int nueva_nota){
    notas[posicion] = nueva_nota;
}

void imprimir_array(int array[20], int tamanio){
    for(int i = 0; i < tamanio; i++){
        cout << "Nota " << i << " = " << array[i] << endl;
    }
}

int main(){

    int num1, num2;
    int notas[] = {8, 4, 9};

    num1 = 2;
    num2 = 0;

    num2 = multiplicacion_de_5(num1);

    cout << endl;
    cout << "El número 1 = " << num1 << endl;
    cout << "El número 2 = " << num2 << endl;

    me_multiplico_por_5(num1);
    cout << endl;

    cout << "Notas sin modificar." << endl;
    imprimir_array(notas, 3);
    cout << endl;

    cout << "Notas modificadas." << endl;
    subir_nota(notas, 1, 6);
    imprimir_array(notas, 3);
    cout << endl;

    return 0;
}