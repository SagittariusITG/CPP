#include <iostream>
using namespace std;

// void mostrar_array(string array[], int length){
//     cout << endl << "Las respuestas son: " << endl << endl;
//     for(int i = 0; i < length; i++){
//         cout << "Juegos " << i << " = " << array[i] << endl;
//     }
// }

int main(){
    int numJuegos = 10, length;
    string juegos[numJuegos];
    string valor;

    length = *(&juegos + 1) - juegos;

    cout << "¿Cuántos juegos quieres introducir? "; cin >> numJuegos;
    cout << endl;

    for(int i = 0; i < numJuegos; i++){
        cout << "Inroduce un juego "; cin >> valor;
        juegos[i] = valor;
    }

    cout << endl;

    for(int i = 0; i < numJuegos; i++){
        cout << "Juego " << i << " = " << juegos[i] << endl;
    }

    // mostrar_array(juegos, length);

    return 0;
}