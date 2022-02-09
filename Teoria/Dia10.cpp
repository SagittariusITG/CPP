#include <iostream>
using namespace std;

int main(){
    string juego;
    string* punteroJuego;
    juego = "Tetris";
    punteroJuego = &juego; // Guarda la dirección de memória

    cout << "Juego: " << juego << endl; // Imprime el juego
    cout << "Posicion juego: " << &juego << endl; // Imprime la dirección de memória de la variable juego
    cout << "Puntero  juego: " << punteroJuego << endl; // Imprime la dirección de memória de la variable juego
    cout << "Puntero juego contenido: " << *punteroJuego << endl; // Imprime el contenido de la dirección de memória

    return 0;
}