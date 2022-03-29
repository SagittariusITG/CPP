#include <iostream>
using namespace std;

class Mueble{
    string material;
    double alto, ancho, largo;

    public:
    Mueble(string material="madera", double alto = 30, double ancho = 30, double largo = 30){
        this->material = material;
        this->alto = alto;
        this->ancho = ancho;
        this->largo = largo;
    }

    void setMaterial(string material){
        this->material = material;
    }

    void setAlto(double alto){
        this->alto = alto;
    }

    void setAncho(double ancho){
        this->ancho = ancho;
    }

    void setLargo(double largo){
        this->largo = largo;
    }

    string getMaterial(){
        return this->material;
    }

    double getAlto(){
        return this->alto;
    }

    double getAncho(){
        return this->ancho;
    }

    double getLargo(){
        return this->largo;
    }

    void imprimir(){
        cout << "El material es " << this->material << "." << endl << endl;
        cout << "Sus dimensiones son:" << endl << "Altura: " << this->alto << endl << "Anchura: " << this->ancho << endl << "Largo: " << this->largo << endl;
    }
};

class Mesa : public Mueble{
    int patas;
    string forma;

    public:
    Mesa(int patas = 4, string forma = "cuadrado", string material="madera", double alto = 30, double ancho = 30, double largo = 30) : Mueble(material, alto, ancho, largo){
        this->patas = patas;
        this->forma = forma;
    }

    void setPatas(int patas){
        this->patas = patas;
    }

    void setForma(string forma){
        this->forma = forma;
    }

    int getPatas(){
        return this->patas;
    }

    string getForma(){
        return this->forma;
    }

    void imprimir(){
        cout << "Esta mesa tiene " << this->patas << " patas y su forma es " << this->forma << "." << endl << endl;
        Mueble::imprimir();
    }
};

class Armario : public Mueble{  // Si lo ponemos en protected no funciona, deberíamos crear en esta clase getters y setters para las funciones de la clase mueble (clonar codigo).
    int numero_baldas;
    string tipo_de_puertas;

    public:
    Armario(int numero_baldas = 2, string tipo_de_puertas = "normales", string material="madera", double alto = 30, double ancho = 30, double largo = 30) : Mueble(material, alto, ancho, largo){
        this->numero_baldas = numero_baldas;
        this->tipo_de_puertas = tipo_de_puertas;
    }

    void setBaldas(int baldas){
        this->numero_baldas = baldas;
    }

    void setTipoPuerta(string tipoPuerta){
        this->tipo_de_puertas = tipoPuerta;
    }

    int getBaldas(){
        return this->numero_baldas;
    }

    string getTipoPuerta(){
        return this->tipo_de_puertas;
    }

    void imprimir(){
        cout << "Este armario tiene " << this->numero_baldas << " baldas y las puertas son " << this->tipo_de_puertas << "." << endl << endl;
        Mueble::imprimir();
    }
};

int main(){

    // Clase Mesa

    Mesa m1;

    string mat_mesa, mesa_forma;
    double mesa_alto, mesa_ancho, mesa_largo;
    int mesa_patas;

    cout << "¿De qué material es la mesa? ";
    cin >> mat_mesa;

    cout << "Escribe las dimensiones según este orden: Altura, Anchura y Largo:" << endl;
    cin >> mesa_alto;
    cin >> mesa_ancho;
    cin >> mesa_largo;

    cout << "¿Cuantas patas tiene la mesa? ";
    cin >> mesa_patas;

    cout << "¿Qué forma tiene la mesa? ";
    cin >> mesa_forma;

    m1.setMaterial(mat_mesa);
    m1.setAlto(mesa_alto);
    m1.setAncho(mesa_ancho);
    m1.setLargo(mesa_largo);
    m1.setPatas(mesa_patas);
    m1.setForma(mesa_forma);

    cout << endl;
    m1.imprimir();

    cout << endl << endl;

    // Clase Armario

    Armario a1;

    string mat_armario, armario_tipo_puerta;
    double armario_alto, armario_ancho, armario_largo;
    int armario_baldas;

    cout << "¿De qué material es la armario? ";
    cin >> mat_armario;

    cout << "Escribe las dimensiones según este orden: Altura, Anchura y Largo:" << endl;
    cin >> armario_alto;
    cin >> armario_ancho;
    cin >> armario_largo;

    cout << "¿Cuantas baldas tiene la armario? ";
    cin >> armario_baldas;

    cout << "¿Qué tipo de puertas tiene la armario? ";
    cin >> armario_tipo_puerta;

    a1.setMaterial(mat_armario);
    a1.setAlto(armario_alto);
    a1.setAncho(armario_ancho);
    a1.setLargo(armario_largo);
    a1.setBaldas(armario_baldas);
    a1.setTipoPuerta(armario_tipo_puerta);

    cout << endl;
    a1.imprimir();


    return 0;
}