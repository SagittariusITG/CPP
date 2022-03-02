#include <iostream>
using namespace std;

class Rectangulo{
    double base;
    double altura;    // Variables privadas

    public:

    Rectangulo(double base = 1, double altura = 1){     // Constructor (si lo inicializamos a X, no hace falta inicializarlo abajo)
        this->base = base;
        this->altura = altura;
        // Si queremos que no nos pongan un valor negativo llamamos directamente a la función set,
        // ya que el default se suprime si se introduce un  valor.
        // setBase(base);
        // setAltura(altura);
    }

    void setBase(double base){     // Setter de la base
        // condición ?(if) devuelve :(else) devuelve
        (base > 0) ? this->base = base : this->base = 1; // Otra forma de hacer if else
        // if(base > 0)
        //     this->base = base;
        // else
        //     this->base = 1;
    }

    void setAltura(double altura){     // Setter de la altura
        // condición ?(if) devuelve :(else) devuelve
        (altura > 0) ? this->altura = altura : this->altura = 1; // Otra forma de hacer if else
        // if(base > 0)
        //     this->altura = altura;
        // else
        //     this->altura = 1;
    }

    double getBase(){       // Getter de la base
        return this->base;
    }

    double getAltura(){     // Getter de la altura
        return this->altura;
    }

    double area(){
        return this->base * this->altura;
    }

    void imprimir(){        // Función para imprimir directamente un objeto
        cout << "La base del rectángulo es " << this->base << " y la altura es " << this->altura << ".";
    }
};

int main(){
    cout << endl;
    Rectangulo r1; // Declaración del objeto (r1)

    cout << "Rectangulo 1 (objeto 1)" << endl;
    // Impresión del contenido de las variables por defecto
    cout << "La base del rectángulo es " << r1.getBase() << " y la altura es " << r1.getAltura() << ".";
    cout << endl << endl;

    // Introducir parámetros (método get y set)
    r1.setBase(5);
    r1.setAltura(1);

    // Impresión del contenido de las variables con el contennido introducido anteriormente
    cout << "La base del rectángulo es " << r1.getBase() << " y la altura es " << r1.getAltura() << ".";
    cout << endl << endl;

    // Introducir parámetros (método get y set)
    r1.setBase(16);
    r1.setAltura(4);

    // Utilización de la método imprimir
    r1.imprimir();
    cout << endl << endl;

    cout << "Rectangulo 2 (objeto 2)" << endl;
    Rectangulo r2(4, 2);    // Utilización del constructor
    r2.imprimir();
    cout << endl << endl;

    cout << "Operaciones (area de un rectangulo)" << endl;
    // Utilización del método area
    cout << "El área del rectángulo 1 es: " << r1.area() << endl;
    cout << "El área del rectángulo 2 es: " << r2.area();


    cout << endl << endl;
    return 0;
}