#include <iostream>
#include <math.h>
using namespace std;

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

// class Triangulo{
//     double base;
//     double altura;
//     string color;

//     public:

//     Triangulo(double base = 1, double altura = 1){
//         this->base = base;
//         this->altura = altura;
//     }

//     void setBase(double base){
//         (base > 0) ? this->base = base : this->base = 1;
//     }

//     void setAltura(double altura){
//         (altura > 0) ? this->altura = altura : this->altura = 1;
//     }

//     void setColor(string color){
//         this->color = color;
//     }

//     double getBase(){
//         return this->base;
//     }

//     double getAltura(){
//         return this->altura;
//     }

//     string getColor(){
//         return this->color;
//     }

//     double area(){
//         return this->base * this->altura / 2;
//     }

//     double perimetro(){
//         double b, h;
//         b = this->base * this->base;
//         h = this->altura * this->altura;
//         return b + h;
//     }

//     void imprimir(){
//         cout << "La base del triangulo es " << this->base << " y la altura es " << this->altura << "." << endl;
//         cout << "El área del triangulo es: " << area() << "." << endl;
//         cout << "El color del triangulo es: " << this->color << "." << endl;
//         cout << "El perímetro del triangulo es: " << perimetro() << ".";
//     }
// };

class Triangulo{
    private:
    double a, b, c; // Lados
    string color;

    bool comprobar_longitud_lados(double a, double b, double c){
        double max, perimetro;
        max = a;
        perimetro = a + b + c;

        if(max < b) max = b;
        if(max < c) max = c;

        return(perimetro - max > max);
    }

    public:
    
    Triangulo(double a = 2, double b = 2, double c = 2, string color = "azul"){
        // if(comprobar_longitud_lados(this->a, this->b, this->c)){
        //     if(a > 0) this->a = a;
        //     if(b > 0) this->b = b;
        //     if(c > 0) this->c = c;
        // }else{
        //     this->a = 2;
        //     this->b = 2;
        //     this->c = 2;
        // }
        this->a = 2;
        this->b = 2;
        this->c = 2;
        setLados(a, b, c);
        this->color = color;
    }

    void setLados(double a, double b, double c){
        if(comprobar_longitud_lados(this->a, this->b, this->c)){
            if(a > 0) this->a = a;
            if(b > 0) this->b = b;
            if(c > 0) this->c = c;
        }
    }

    // void setLadoA(double lado){
    //     if(comprobar_longitud_lados(a, this->b, this->c)){
    //         if(a > 0) this->a = lado;
    //     }
    // }

    // void setLadoB(double lado){
    //     if(comprobar_longitud_lados(b, this->a, this->c)){
    //         if(b > 0) this->b = lado;
    //     }
    // }

    // void setLadoC(double lado){
    //     if(comprobar_longitud_lados(c, this->b, this->a)){
    //         if(c > 0) this->c = lado;
    //     }
    // }

    double perimetro(){
        return this->a + this->b + this->c;
    }

    double area(){
        double perim, area;

        perim = this->perimetro()/2;
        area = sqrt(perim*(perim-this->a)*(perim-this->b)*(perim-this->c));

        return area;
    }

    void imprimir(){
        cout << "Clase Triangulo." << endl;
        cout << "Lado A: " << this->a << endl << "Lado B: " << this->b << endl << "Lado C: " << this->c << endl;
        cout << "El perimetro es: " << this->perimetro() << " m." << endl;
        cout << "El area es: " << this->area() << " m^2.";
    }
};

int main(){
    cout << endl;

    // Objeto Rectángulo
    // Rectangulo r1;
    // double b_rect, a_rect;
    // string c_rect;

    // cout << "¿Cual es la base del rectángulo? ";
    // cin >> b_rect;
    // cout << "¿Cual es la altura del rectángulo? ";
    // cin >> a_rect;
    // cout << "¿Cual es el color del rectángulo? ";
    // cin >> c_rect;

    // r1.setBase(b_rect);
    // r1.setAltura(a_rect);
    // r1.setColor(c_rect);

    // cout << endl << "Rectangulo" << endl;
    // r1.imprimir();
    // cout << endl << endl;

    // // Objeto Circulo
    // Circulo c1;
    // double r_circ;
    // string c_circ;

    // cout << "¿Cual es el radio del circulo? ";
    // cin >> r_circ;
    // cout << "¿Cual es el color del circulo? ";
    // cin >> c_circ;

    // c1.setRadio(r_circ);
    // c1.setColor(c_circ);

    // cout << endl << "Circulo" << endl;
    // c1.imprimir();
    // cout << endl << endl;

    // Objeto Triángulo
    // Triangulo t1;
    // double b_triang, a_triang;
    // string c_triang;

    // cout << "¿Cual es la base del triangulo rectángulo? ";
    // cin >> b_triang;
    // cout << "¿Cual es la altura del triangulo rectángulo? ";
    // cin >> a_triang;
    // cout << "¿Cual es el color del triangulo rectángulo? ";
    // cin >> c_triang;

    // t1.setBase(b_triang);
    // t1.setAltura(a_triang);
    // t1.setColor(c_triang);

    // cout << endl << "Triangulo rectángulo" << endl;
    // t1.imprimir();
    // cout << endl << endl;

    Triangulo t2(10,15,20);
    // t2.setLadoA(3);
    // t2.setLadoB(3);
    // t2.setLadoC(3);
    t2.imprimir();

    return 0;
}