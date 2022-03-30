# Examen

Examen herencias 30-03-2022.

## Enunciados 📄

Tenemos una clase padre llamada JUEGO, que tiene de atributos el nombre (que no puede modificar ninguno de sus hijos) y el precio.
Construir la clase con sus respectivos constructores (y destructores), gets, sets y método de impresión. Añadir el método de descuento() que aplica un descuento de 10€ y devuelve el valor del juego tras este descuento sin modificar el precio real.

Tenemos dos clases hijos VIDEOJUEGO y JUEGOdeMESA.
Construir las clases con sus respectivos constructores (y destructores), gets, sets y método de impresión.
En la clase VIDEOJUEGO existe el atributo plataforma y el descuento se hace de forma distinta: Se aplica un 20% al precio y si es mayor que el descuento por defecto de 10€ se aplica, si no se deja el descuento de 10€.
En la clase JUEGOdeMESA existen los atributos máximo y mínimo de jugadores. Tiene además un método que permite saber si puedes jugar a un juego o no al pasarle el número de jugadores que quieren jugar.

El tipo de herencia realizada es libre, pero hay que justificar su elección y demostrar (en el main) que se comprende su funcionamiento.

En el MAIN debe demostrarse que funcionan cada una da las clases y métodos implementados.
Escribe tu nombre por pantalla

## Respuestas

El tipo de herencia elegido es la publica ya que no puede acceder a los datos privados pero sí a los públicos.

## Clases 🛠

> Clase juego.

```cpp
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
```

> Clase videojuego.

```cpp
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
```

> Clase Juego de mesa.

```cpp
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
```