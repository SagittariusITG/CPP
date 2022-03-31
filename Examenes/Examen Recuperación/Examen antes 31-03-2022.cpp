#include <iostream>
using namespace std;

void joel_arnaud(){
    string nombre;
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre;
}

int picos(int gallinas){
    int pic;
    pic = 0;
    for(int i = 0; i < gallinas; i++){
        pic += 1;
    }
    return pic;
}

int patas(int gallinas, int zorros){
    int pts;
    pts = 0;
    for(int i = 0; i < gallinas; i++){
        pts += 2;
    }
    for(int i = 0; i < zorros; i++){
        pts += 4;
    }
    return pts;
}

int total_patas_picos(int patas, int picos){
    return patas + picos;
}

int main(){

    int gallinas, gallinas_muertas, gallinas_muertas_del_todo, zorros;

    // Ejercicio 1
    joel_arnaud();
    cout << endl << endl;

    // Ejercicio 2
    cout << "¿Cuántas gallinas tenemos? ";
    cin >> gallinas;

    cout << endl << "¿Cuántos zorros tenemos? ";
    cin >> zorros;

    // Ejercicio 3
    cout << endl << "Hay " << picos(gallinas) << " picos." << endl;

    // Ejercicio 4
    cout << endl << "Hay " << patas(gallinas, zorros) << " patas." << endl;

    // Ejercicio 5
    cout << endl << "Hay " << total_patas_picos(patas(gallinas, zorros), picos(gallinas)) << " en total." << endl << endl;

    // Ejercicio 6
    gallinas_muertas_del_todo = gallinas;
    do{
        cout << "¿Cuántas gallinas ha matado el zorro al día? ";
        cin >> gallinas_muertas;
        gallinas_muertas_del_todo -= gallinas_muertas;
        cout << endl << "Quedan " << gallinas_muertas_del_todo << " gallinas." << endl;
    }while(gallinas_muertas != -1 || gallinas_muertas_del_todo != 0); // No entiendo porque no entiende que si escribo -1 se pare :(

    cout << endl;
    return 0;
}