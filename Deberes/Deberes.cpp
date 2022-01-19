#include <iostream>
using namespace std;

int diffEdades(int edadIntro, int miEdad){
    int sol;
    if (edadIntro < miEdad){
        sol = edadIntro - miEdad;
    }else{
        sol = miEdad - edadIntro;
    }
    return sol;
}

int valAbsoluto(int valor){
    return valor * (-1);
}

int main(){
    int edad = 22;
    int tuEdad;
    int diffEdad;
    int absolut;

    cout << "¿Cuantos años tienes? ";
    cin >> tuEdad;

    if (tuEdad >= edad){
        cout << "Viejo gordo. ";
    }else{
        cout << "Que mono. ";
    }

    diffEdad = diffEdades(tuEdad, edad);
    absolut = valAbsoluto(diffEdad);

    cout << "Nos llevamos " << absolut << " años ya que yo tengo " << edad << " años y tu " << tuEdad << " años." << endl;

    return 0;
}