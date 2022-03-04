# Ejercicios

Ejercicios de clases del dia 04-03-2022.

## Enunciados 📄

* Construir clase Rectangulo, Circulo y Triangulo.
* Constructor por defecto y parámetros.
* Getters y setters.
* Método perímetro.
* Método área.
* Método color.
* Método imprimir.

## Funciones 🛠

> Clase Rectángulo.

```cpp
class Rectangulo{
    double base;
    double altura;
    string color;

    public:

    Rectangulo(double base = 1, double altura = 1){
        this->base = base;
        this->altura = altura;
    }

    void setBase(double base){
        (base > 0) ? this->base = base : this->base = 1;
    }

    void setAltura(double altura){
        (altura > 0) ? this->altura = altura : this->altura = 1;
    }

    void setColor(string color){
        this->color = color;
    }

    double getBase(){
        return this->base;
    }

    double getAltura(){
        return this->altura;
    }

    string getColor(){
        return this->color;
    }

    double area(){
        return this->base * this->altura;
    }

    double perimetro(){
        return 2 * this->base + 2 * this->altura;
    }

    void imprimir(){
        cout << "La base del rectángulo es " << this->base << " y la altura es " << this->altura << "." << endl;
        cout << "El área del rectángulo es: " << area() << "." << endl;
        cout << "El color del rectángulo es: " << this->color << "." << endl;
        cout << "El perímetro del rectángulo es: " << perimetro() << ".";
    }
};
```

> Clase Circulo.

```cpp
class Circulo{
    const double pi = 3.14;
    double radio;
    string color;

    public:

    Circulo(double radio = 1){
        this->radio = radio;
    }

    void setRadio(double radio){
        (radio > 0) ? this->radio = radio : this->radio = 1;
    }
    
    void setColor(string color){
        this->color = color;
    }

    double getRadio(){
        return this->radio;
    }

    string getColor(){
        return this->color;
    }

    double area(){
        return this->radio * radio * pi;
    }

    double perimetro(){
        return this->radio * pi * 2;
    }

    void imprimir(){
        cout << "La radio del circulo es " << this->radio << "." << endl;
        cout << "El área del circulo es: " << area() << "." << endl;
        cout << "El color del circulo es: " << this->color << "." << endl;
        cout << "El perímetro del circulo es: " << perimetro() << ".";
    }
};
```

> Clase Triangulo.

```cpp
class Triangulo{
    double base;
    double altura;
    string color;

    public:

    Triangulo(double base = 1, double altura = 1){
        this->base = base;
        this->altura = altura;
    }

    void setBase(double base){
        (base > 0) ? this->base = base : this->base = 1;
    }

    void setAltura(double altura){
        (altura > 0) ? this->altura = altura : this->altura = 1;
    }

    void setColor(string color){
        this->color = color;
    }

    double getBase(){
        return this->base;
    }

    double getAltura(){
        return this->altura;
    }

    string getColor(){
        return this->color;
    }

    double area(){
        return this->base * this->altura / 2;
    }

    double perimetro(){
        double b, h;
        b = this->base * this->base;
        h = this->altura * this->altura;
        return b + h;
    }

    void imprimir(){
        cout << "La base del triangulo es " << this->base << " y la altura es " << this->altura << "." << endl;
        cout << "El área del triangulo es: " << area() << "." << endl;
        cout << "El color del triangulo es: " << this->color << "." << endl;
        cout << "El perímetro del triangulo es: " << perimetro() << ".";
    }
};
```