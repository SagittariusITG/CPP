#include <iostream>
using namespace std;

int main(){
    int edad = 22;
    int tuEdad;

    cout << "¿Cuantos años tienes?" << endl;
    cin >> tuEdad;

    if (tuEdad >= edad){
        cout << "Viejo gordo." << endl;
    }else{
        cout << "Que mono." << endl;
    }

    return 0;
}