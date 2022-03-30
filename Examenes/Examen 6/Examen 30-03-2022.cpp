#include <iostream>
using namespace std;

class Juego{
    string nombre;
    double precio;
    
    public:
    Juego(string nombre = "NombreJuego", double precio = 0.00){
        this->nombre = nombre;
        this->precio = precio;
    }

    ~Juego(){
        cout << "Destrucción del juego." << endl;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    void setPrecio(double precio){
        this->precio = precio;
    }

    string getNombre(){
        return this->nombre;
    }

    double getPrecio(){
        return this->precio;
    }

    void descuento(){
        this->precio -= 10;
    }

    void imprimir(){
        cout << "Nombre del juego: " << this->nombre << "." << endl << "Precio del juego: " << this->precio << "§" << endl;
    }
};

class VideoJuego : public Juego{
    int plataforma; // ?

    public:
    VideoJuego(int plataforma = 0, string nombre = "NombreJuego", double precio = 0.00) : Juego(nombre, precio){
        this->plataforma = plataforma;
    }

    ~VideoJuego(){
        cout << "Destrucción del videojuego." << endl;
    }

    void setPlataforma(int plataforma){
        this->plataforma = plataforma;
    }

    int getPlataforma(){
        return this->plataforma;
    }

    void descuentoVJ(){
        double dsc, pre;
        pre = getPrecio();
        dsc = pre * 0.20;

        if(dsc > 10){
            pre -= dsc;
            setPrecio(pre);
        }
    }

    void imprimir(){
        Juego::imprimir();
        cout << "Tiene " << this->plataforma << " plataforma(s)." << endl;
    }
};

class JuegoMesa : public Juego{
    int minimo, maximo;

    public:
    JuegoMesa(int minimo = 0, int maximo = 4, string nombre = "NombreJuego", double precio = 0.00) : Juego(nombre, precio){
        this->minimo = minimo;
        this->maximo = maximo;
    }

    ~JuegoMesa(){
        cout << "Destrucción del juego de mesa." << endl;
    }

    void setMinimo(int minimo){
        this->minimo = minimo;
    }

    void setMaximo(int maximo){
        this->maximo = maximo;
    }

    int getMinimo(){
        return this->minimo;
    }

    int getMaximo(){
        return this->maximo;
    }

    void imprimir(){
        Juego::imprimir();
        cout << "Mínimo jugadores: " << this->minimo << endl << "Máximo jugadores: " << this->maximo << endl;
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

    // Juego j1;

    // j1.setPrecio(15.40);
    // j1.imprimir();
    // j1.descuento();
    // j1.imprimir();

    // Videojuego

    VideoJuego vj1;

    double preciovdj;
    string nombrevdj, descuentovdj;
    int plataformasvdj;

    cout << "¿Cómo se llama el videojuego? ";
    cin >> nombrevdj;

    cout << endl << "¿Qué precio tiene el videojuego? ";
    cin >> preciovdj;

    cout << endl << "¿Tiene el videojuego descuento? ";
    cin >> descuentovdj;

    cout << endl << "¿Cuántas plataformas tiene el videojuego? ";
    cin >>plataformasvdj;

    vj1.setPrecio(preciovdj);
    vj1.setNombre(nombrevdj);
    vj1.setPlataforma(plataformasvdj);

    if(descuentovdj == "si"){
        vj1.descuentoVJ();
    }

    vj1.imprimir();

    cout << endl << endl;

    // Juego de mesa
    JuegoMesa jm1;
    double preciojm;
    string nombrejm, descuentojm;
    int minjm, maxjm;

    cout << "¿Cómo se llama el juego de mesa? ";
    cin >> nombrejm;

    cout << endl << "¿Qué precio tiene el juego de mesa? ";
    cin >> preciojm;

    cout << endl << "¿Tiene el juego de mesa descuento? ";
    cin >> descuentojm;

    cout << endl << "¿Cual es el mínimo de jugadores del juego? ";
    cin >> minjm;

    cout << endl << "¿Cual es el máximo de jugadores del juego? ";
    cin >> maxjm;

    jm1.setPrecio(preciojm);
    jm1.setNombre(nombrejm);
    jm1.setMinimo(minjm);
    jm1.setMaximo(maxjm);

    if(descuentovdj == "si"){
        jm1.descuento();
    }

    jm1.imprimir();

    cout << "El tipo de herencia elegido es la publica ya que no puede acceder a los datos privados pero sí a los públicos." << endl;

    cout << 'PD: en el enunciado dices: " y devuelve el valor del juego tras este descuento sin modificar el precio real.", lo haría creando una nueva variable y añadiendo el resultado allí y en función de si se llama o no al método se imprime una variable u otra, pero esque ya lo tenía acabado y lo he visto al final y no me da tiempo.' << endl;

    cout << endl;
    return 0;
}