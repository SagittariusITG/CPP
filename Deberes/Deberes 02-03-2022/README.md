# Ejercicios

Estos son los ejercicios hechos en clase día 02-03-2022.

## Enunciados 📄

* Constructor.
* Gets y Sets.
* Método área y perímetro -> Añadir perímetro a la  clase Rectángulo.
* Método imprimir.

## Clases 🛠

> Clase Rectangulo

```cpp
class Rectangulo{
    double base;
    double altura;

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

    double getBase(){
        return this->base;
    }

    double getAltura(){
        return this->altura;
    }

    double area(){
        return this->base * this->altura;
    }

    void imprimir(){
        cout << "La base del rectángulo es " << this->base << " y la altura es " << this->altura << ".";
    }
};
```

> Clase Circulo

```cpp
class Circulo{
    const double pi = 3.14;
    double radio;

    public:

    Circulo(double radio = 1){
        this->radio = radio;
    }

    void setRadio(double radio){
        (radio > 0) ? this->radio = radio : this->radio = 1;
    }

    double getRadio(){
        return this->radio;
    }

    double area(){
        return this->radio * radio * pi;
    }

    double perimetro(){
        return this->radio * pi * 2;
    }

    void imprimir(){
        cout << "La radio del rectángulo es " << this->radio << ".";
    }
};
```