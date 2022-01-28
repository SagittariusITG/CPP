#include <iostream>
using namespace std;

void contrasenia(string passw, string respuesta){
    while (respuesta != passw){
        cout << "Escribe la contrasena: ";
        cin >> respuesta;
    }
}

void ministerio_espania(int edad, string &respuesta){
    cout << "Cual es tu edad? "; cin >> edad;
    if(edad < 18){
        respuesta = "Eres menor de edad.";
    }else if(edad >= 18){
        respuesta = "Eres mayor de edad.";
    }
}

void notas(float nota, string &respuesta){
    cout << "Cual es tu nota? "; cin >> nota;
    if(nota >= 0 and nota <= 4){
        respuesta = "La nota es suspenso.";
    }else if(nota >= 5 and nota < 6){
        respuesta = "La nota es suficiente.";
    }else if(nota >= 6 and nota < 7){
        respuesta = "La nota es bien.";
    }else if(nota >= 7 and nota < 9){
        respuesta = "La nota es un notable.";
    }else if(nota >= 9 and nota < 10){
        respuesta = "La nota es sobresaliente";
    }
}

void es_par(int &num, string &respuesta){
    cout << "Introduce un número: "; cin >> num;
    if(num % 2 == 0){
        respuesta = " es par.";
    }else{
        respuesta = " es impar.";
    }
}

void array_par(int array[], int tamanio, int nuevo_array[]){
    for(int i = 0; i < tamanio; i++){
        if(array[i] % 2 == 0){
            nuevo_array[i] = array[i];
        }
    }
}

void imprimirArray(int array[], int tama){
    for (int i = 0 ; i < tama ; i++){
        cout << array[i];
    }
}

int main(){
    string passw, respuesta;
    int numspar[] = {3, 2, 6, 5, 8, 9, 2, 1}, nuevo_array[9];
    int edad, numero, tamanio;
    float nota;

    passw = "aaa";
    tamanio = 9;

    contrasenia(passw, respuesta);

    cout << endl;

    ministerio_espania(edad, respuesta);

    cout << respuesta << endl << endl;

    notas(nota, respuesta);

    cout << respuesta << endl << endl;

    es_par(numero, respuesta);

    cout << numero << respuesta << endl << endl;

    array_par(numspar, 9, nuevo_array);
    imprimirArray(nuevo_array, 9);

    cout << endl << endl;

    return 0;
}