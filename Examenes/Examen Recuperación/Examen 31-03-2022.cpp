#include <iostream>
using namespace std;

class ANIMALenGRANJA{
    string especie, comida_favorita;
    int cantidad, patas;

    // protected:
    // string chiste;

    public:
    ANIMALenGRANJA(string especie = "aEspecie", string comida_favorita = "ComidaFav", int cantidad = 0, int patas = 2){
        this->especie = especie;
        this->comida_favorita = comida_favorita;
        this-> cantidad = cantidad;
        this-> patas = patas;
    }

    ~ANIMALenGRANJA(){
        cout << "Destrucción de clase." << endl;
    }

    void setEspecie(string especie){
        this->especie = especie;
    }

    void setComida(string comida){
        this->comida_favorita = comida;
    }

    void setCantidad(int cantidad){
        this->cantidad = cantidad;
    }

    void setPatas(int patas){
        this->patas = patas;
    }

    string getEspecie(){
        return this->especie;
    }

    string getComida(){
        return this->comida_favorita;
    }

    int getCantidad(){
        return this->cantidad;
    }

    int getPatas(){
        return this->patas;
    }

    void que_come(){
        cout << "El animal " << this->especie << " come " << this->comida_favorita << endl;
    }

    void chiste(){
        cout << "¿Por qué cruzó el " << this->especie << " la carretera?" << endl;
        cout << "No me sé ese chiste." << endl;
    }

    void imprimir(){
        cout << "Especie: " << this->especie << endl << "Comida favorita: " << this->comida_favorita << endl << "Cantidad: " << this->cantidad << endl << "Patas: " << this->patas << endl;
    }
};

class ZORRO : public ANIMALenGRANJA{
    int dias;

    public:
    ZORRO(int dias = 0, string especie = "aEspecie", string comida_favorita = "ComidaFav", int cantidad = 0, int patas = 2) : ANIMALenGRANJA(especie, comida_favorita, cantidad, patas){
        this->dias = dias;
    }

    void setDias(int dias)
    {
        this->dias = dias;
    }

    int getDias(){
        return this->dias;
    }

    int otro_dia_mas(){
        return this->dias += 1;
    }

    // string mod_chiste(){
    //     return this->chiste = "¿Para qué cruzó el zorro la carretera? Para comerse a las gallinas.";
    // }

    void imprimir(){
        ANIMALenGRANJA::imprimir();
        cout << "Ha visitado la granja: " << this->dias << " días." << endl;
    }
};

class GALLINA : public ANIMALenGRANJA{
    int huevos, dias_poniendo, huevos_totales;

    public:
    GALLINA(int huevos = 0, int dias_poniendo = 0, int huevos_totales = 0, string especie = "aEspecie", string comida_favorita = "ComidaFav", int cantidad = 0, int patas = 2) : ANIMALenGRANJA(especie, comida_favorita, cantidad, patas){
        this->huevos = huevos;
        this->dias_poniendo = dias_poniendo;
        this->huevos_totales = huevos_totales;
    }

    void setHuevos(int huevos){
        this->huevos = huevos;
    }

    void setDias_poniendo(int dias_poniendo){
        this->dias_poniendo = dias_poniendo;
    }

    int getHuevos(){
        return this->huevos;
    }

    int getDias_poniendo(){
        return this->dias_poniendo;
    }

    int getHuevos_totales(){
        return this->huevos_totales;
    }

    void calc_totales(){
        for(int i = 0; i < this->dias_poniendo; i++){
            this->huevos_totales += huevos;
        }
    }

    // void mod_chiste(){
    //     this->chiste = "¿Para qué cruzó la gallina la carretera? Para llegar al otro lado.";
    // }

    void imprimir(){
        ANIMALenGRANJA::imprimir();
        cout << "Huevos al día: " << this->huevos << endl << "Días poniendo huevos: " << this->dias_poniendo << endl << "Huevos totales: " << this->huevos_totales << endl;
    }
};

void joel_arnaud(){
    string nombre;
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre;
}

int main(){
    // Ejercicio 1
    joel_arnaud();
    cout << endl << endl;

    // clase zorro
    ZORRO z1;
    string com_z;
    int can_z, patas_z, dias_z;

    cout << "¿Cual es la comida favorita del zorro? ";
    cin >> com_z;

    cout << endl << "¿Cuántos zorros hay? ";
    cin >> can_z;

    cout << endl << "¿Cuantas patas tiene un zorro? ";
    cin >> patas_z;

    cout << endl << "¿Cuantos días ha estado el zorro por la granja? ";
    cin >> dias_z;

    cout << endl;

    z1.setEspecie("Zorro");
    z1.setComida(com_z);
    z1.setCantidad(can_z);
    z1.setPatas(patas_z);
    z1.setDias(dias_z);
    z1.imprimir();

    cout << "Se suma un día." << endl;

    z1.otro_dia_mas();
    z1.imprimir();

    // clase gallina
    GALLINA g1;
    string com_g;
    int can_g, patas_g, huevs_g, dias_g;

    cout << "¿Cual es la comida favorita de la gallina? ";
    cin >> com_g;

    cout << endl << "¿Cuántas gallinas hay? ";
    cin >> can_g;

    cout << endl << "¿Cuantas patas tiene una gallina? ";
    cin >> patas_g;

    cout << endl << "¿Cuantos huevos ha puesto al día? ";
    cin >> huevs_g;

    cout << endl << "¿Cuantos días ha estado poniendo huevos? ";
    cin >> dias_g;

    cout << endl;

    g1.setEspecie("Gallina");
    g1.setComida(com_g);
    g1.setCantidad(can_g);
    g1.setPatas(patas_g);
    g1.setHuevos(huevs_g);
    g1.setDias_poniendo(dias_g);
    g1.calc_totales();
    g1.imprimir();

    cout << endl << endl << "El tipo de herencia elegido es la publica ya que no puede acceder a los datos privados pero sí a los públicos.";

    cout << endl;
    return 0;
}