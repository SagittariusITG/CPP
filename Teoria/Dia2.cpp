#include <iostream>
using namespace std;

int main(){
    string palabra1 = "Patata";
    string palabra2;
    palabra2 = palabra1;

    cout << palabra1 << " " << palabra2 << endl;

    char palabra3[20] = "Zanahoria";
    char palabra4[20];
    
    for(int i=0; i<20; i++){
        palabra4[i] = palabra3[i];
    }

    cout << palabra3 << " " << palabra4 << endl;

    return 0;
};