# Examen

Examen día 10-03-2022 sobre clases y vectores.

## Enunciados 📄

Vamos a crear una clase Persona, para que se evalúen todos los puntos es necesario que se compruebe su funcionamiento en la función MAIN:

GUARDA TODO EL PROCESO EN GITHUB

* Cuenta con tres atributos: Nombre, DNI y edad.
* Para crear un objeto de la clase Persona necesitamos cómo mínimo el nombre y el DNI. Si no se especifica la edad, se guarda por defecto 18 años.
* Crea los gets y los sets para poder acceder a los datos.
* Crea un método imprimir que imprima por pantalla la frase "Me llamo *nombre*, tengo *años* años y mi DNI es *dni*".
* Crea un método que devuelva si la Persona es mayor de edad o no.
 
* Modifica la clase CREANDO UNA NUEVA RAMA EN GIT para que tenga además un atributo vip que indique si una persona tiene o no beneficios especiales.
[Si no quieres crear una rama de git es recomendable que gestiones las versiones, al menos, de forma manual]
* Cuándo se registre la Persona debe introducir un vector de tres números, si la suma de los tres números es múltiplo de 11 automáticamente esa persona pasará a ser vip. Si alguno de esos números es múltiplo de 13 se le da la oportunidad de añadir dos números más.
* Modifica y añade los métodos necesarios para que se aprecie el cambio en la clase.
* El ser vip es cuestión de suerte (o de conocer el truco) por eso nunca nadie podrá cambiar el valor de la variable vip.

UNE LA RAMA DE GIT A LA RAMA PRINCIPAL.

## Clases 🛠

```cpp
class Persona{
    string nombre, dni;
    int edad, vip;

    public:
    Persona(int edad = 18){
        this->edad = edad;
    }

    void setNombre(string nombre){
        this->nombre = nombre;
    }

    void setEdad(int edad){
        this->edad = edad;
    }

    void setDNI(string dni){
        this->dni = dni;
    }

    void setVip(int vip){
        this->vip = vip;
    }

    string getNombre(){
        return this->nombre;
    }

    int getEdad(){
        return this->edad;
    }
    
    string getDNI(){
        return this->dni;
    }

    int getVip(){
        return this->vip;
    }

    void mayoriaEdad(){
        if(this->edad >= 18){
            cout << this->nombre << " es mayor de edad.";
        } else {
            cout << this->nombre << " es menor de edad.";
        }
    }

    void multiplo3(){
        // int suma;

        // for(int i = 0; i < 3; i++){
        //     suma += this->vip;
        // }

        if(this->vip % 3 == 0){
            cout << "Es multiplo de 3.";
        } else {
            cout << "No es multiplo de 3.";
        }
    }

    void imprimir(){
        cout << "Me llamo " << this->nombre << ", tengo " << this->edad << " años " << "y mi DNI es " << this->dni << endl;
        mayoriaEdad();
        cout << endl;
        multiplo3();
    }

};
```

## Errores ❌

* La parte de registrar a la persona no me ha salido, parece que se me ha olvidado hacer un buclexd