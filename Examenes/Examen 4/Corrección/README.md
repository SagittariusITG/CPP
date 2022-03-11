# Examen

Corrección del examen 10-03-2022.

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
    int edad;
    bool vip;

    bool esMultiplo(int n_mult, int num){
        return (n_mult % num == 0);
    }

    int sumaVector(vector<int> numVip){
        int suma;
        suma = 0;
        for(int i = 0; i < numVip.size(); i++){
            suma += numVip[i];
        }
        return suma;
    }

    vector<int> solicitarNumeros(int cantidad){
        vector<int> vect;
        int num;

        cout << endl << "Segunda oportunidad!" << endl;
        for(int i = 0; i < cantidad; i++){
            cout << "Introduce tu numero vip (2 intro): ";
            cin >> num;
            vect.push_back(num);
        }
        return vect;
    }

    void setVip(vector<int> numVip){
        this->vip = false;
        int suma;
    
        suma = sumaVector(numVip);

        if(this->esMultiplo(suma, 11)){
            this->vip = true;
        } else {
            bool multiplo_13;
            multiplo_13 = false;

            for(int i = 0; i < numVip.size() && !multiplo_13; i++){
                if(this->esMultiplo(numVip[i], 13)) multiplo_13 = true;
            }

            if(multiplo_13){
                vector<int> vect;

                vect = solicitarNumeros(2);
                suma += sumaVector(vect);

                if(this->esMultiplo(suma, 11)) this->vip = true;

            }
        }
    }

    public:
    Persona(vector<int> numVip, int edad = 18){
        this->edad = edad;
        setVip(numVip);
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

    string getNombre(){
        return this->nombre;
    }

    int getEdad(){
        return this->edad;
    }
    
    string getDNI(){
        return this->dni;
    }

    void mayoriaEdad(){
        if(this->edad >= 18){
            cout << this->nombre << " es mayor de edad.";
        } else {
            cout << this->nombre << " es menor de edad.";
        }
    }

    void imprimir(){
        cout << "Me llamo " << this->nombre << ", tengo " << this->edad << " años " << "y mi DNI es " << this->dni << endl;
        mayoriaEdad();
        cout << endl;
        cout << "Es vip: " << this->vip << endl;
    }

};
```

## Funciones 🛠

> Jeje mi nombre

```cpp
void joel_arnaud(){
    string nombre;
    nombre = "Joël Arnaud Carreras";
    cout << endl << nombre;
}
```

> Para rellenar un vector

```cpp
vector<int> rellenarVector(){
    vector<int> vect;
    int numero, tama;

    tama = 3;

    for(int i = 0; i < tama; i++){
        cout << "Introduce tu número vip (3 intros): ";
        cin >> numero;
        vect.push_back(numero);
    }
    return vect;
}
```