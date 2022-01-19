#include <iostream>
using namespace std;

int main(){
    string contrasena = "aaa";
    string respuesta;

    while (respuesta != contrasena){
        cout << "Escribe la contrasena." << endl;
        cin >> respuesta;
    }

    return 0;
}