#include <iostream>
using namespace std;

int main(){
    string palabra;
    string respuesta;

    /*
    cout << "Imprimir por pantalla." << endl;
    cout << "Me gusta la tortilla." << endl;
    */
    while (respuesta != "si"){
        cout << "Escribe una palabra." << endl;
        cin >> palabra;
        cout << "¿Has dicho ... " << palabra << "?" << endl;
        cin >> respuesta;
    }

    return 0;
}