#include <iostream>
using namespace std;

int descubrirFecha(int anio_actual, int edadTibu){
    return (anio_actual - edadTibu);
}

int calcular_meses(int edad){
    return (edad * 12);
}

int calcular_dias(int edad_meses){
    return (edad_meses * 30);
}

int calcular_dientes(int meses){
    int sumar = 0;
    int meses_tiene_top_anios = 96;
    if(meses <= meses_tiene_top_anios){
        for (int i = 0; i < meses; i += 5){
            sumar += i;
        }
    }else{ // Aqui he hecho otro bucle para "automatizarlo", si, hay que calcular cuantos meses tiene 8 años, pero no he visto más opciones :(
        for (int i = 0; i < meses_tiene_top_anios; i += 5){
            sumar += i;
        }
    }
    return sumar;
}

int main(){
    string miNombre = "Joël Arnaud Carreras";

    int edadTibu;
    int anio_nacimeinto_tibu;
    int meses_tiburon;
    int dias_tiburon;

    int dientes;

    int anio_actual = 2022;
    int mes_actual = 1;

    cout << miNombre << endl << endl;

    cout << "¿Cuantos años tiene un tiburón? "; cin >> edadTibu;

    anio_nacimeinto_tibu = descubrirFecha(anio_actual, edadTibu);
    meses_tiburon = calcular_meses(edadTibu);
    dias_tiburon = calcular_dias(meses_tiburon);

    cout << "El tiburón nació en el año " << anio_nacimeinto_tibu << " por lo tanto ha vivido " << meses_tiburon << " meses y " << dias_tiburon << " días." << endl;

    dientes = calcular_dientes(meses_tiburon);
    cout << "Al tiburón se le han caído " << dientes << " dientes." << endl;
    
    return 0;
}