#include <iostream>
using namespace std;

int main(){
    bool gusto;
    string pal;
    cout << "Copión." << endl;
    while (pal != "salir"){
        cout << "Escribe algo: " << endl;
        cin >> pal;
        cout << "Te copio: " << pal << endl;
        cout << "Te gusta que te copie?" << endl;
        cin >> gusto;
        if(gusto = "si"){
            cout << "vale" << endl;
            break;
        }else{
            cout << "Te jodes" << endl;
            break;
        }
    }
    return 0;
}