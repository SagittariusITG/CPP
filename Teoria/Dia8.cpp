#include <iostream>
using namespace std;

int main(){
    string juego = "csgo";
    string &ocio = juego;

    cout << juego << endl;
    cout << ocio << endl;
    cout << &juego << endl;
    cout << &ocio << endl;

    ocio = "valorant";
    
    cout << juego << endl;
    cout << ocio << endl;
    cout << &juego << endl;
    cout << &ocio << endl;

    return 0;
}