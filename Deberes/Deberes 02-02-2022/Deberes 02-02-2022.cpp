#include <iostream>
using namespace std;

int imprimir_nums(){
    for(int i = 100; i > 0; i--){
        if(i % 10 == 0){
            cout << endl;
        }
        cout << i << "\t";
    }
}

int main(){
    imprimir_nums();
    cout << endl;


    return 0;
}