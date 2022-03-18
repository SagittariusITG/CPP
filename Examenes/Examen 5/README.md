# Examen

Examen 18-03-2022.

## Enunciados 📄

- Escribe tu nombre [0.5]
- Crear un objeto cargador [2p] formado por un cable [2p] (longitud, tipo de entrada y tipo de salida, si permite transmisión de datos o solo carga) y el adaptador de potencia [2p] (potencia de entrada, de salida y número de puertos (max 3)). Prueba que funciona.
- Gestionar el número de puertos disponibles del cargador: ¿Puedo añadir otro cable? [2p]
- Gestiona la utilidad de los cables: ¿Alguno de los cables conectados me permite transmitir datos a mi dispositivo si este tiene una entrada de tipo micro usb? [1,5p]
OJO: Lo IDEAL en el último punto es gestionarlo con una lista/vector que contengan objetos, pero se acepta una implementación manual durante el tiempo del examen (siempre y cuando se realice mediante listas en casa). [+0,5]

## Clases 🛠

> Clase cargador

```cpp
class Cargador{
    bool test;

    Adaptador adapt1;
    Cable cbl1;

    public:
    Cargador(){
        this->test = true; // Tengo el cargador
    }

    Adaptador & getAdaptador(){
        return this->adapt1;
    }

    Cable & getCable(){
        return this->cbl1;
    }

    void setEstado(bool estado = true){
        this->test = estado;
    }
    
    bool getEstado(){
        return this->test;
    }

    void imprimir(){
        this->adapt1.imprimir();
        this->cbl1.imprimir();
    }

};
```

> Clase adaptador

```cpp
class Adaptador{
    double potencia;
    int n_puertos;

    public:
    Adaptador(double potencia = 0.1, int puertos = 1){
        this->potencia = potencia;
        this->n_puertos = puertos;
    }

    void setPotencia(double potencia){
        this->potencia = potencia;
    }

    void setPuertos(int puertos){
        if(puertos > 3){
            puertos = 3;
            this->n_puertos = puertos;
        } else {
            this->n_puertos = puertos;
        }
    }

    double getPotencia(){
        return this->potencia;
    }

    int getPuertos(){
        return this->n_puertos;
    }

    void imprimir(){
        cout << "El adaptador tiene " << this->n_puertos << " puerto(s) de " << this->potencia << "v.";
    }
};
```

> Clase cable

```cpp
class Cable{
    double longitud;
    string tipo_entrada, tipo_salida;
    bool trans_datos;

    public:
    Cable(double longitud = 0.2, string entrada = "USB", string salida = "TIPO C", bool datos = true){
        this->longitud = longitud;
        this->tipo_entrada = entrada;
        this->tipo_salida = salida;
        this->trans_datos = datos;
    }

    void setLongitud(double longitud){
        this->longitud = longitud;
    }

    void setEntrada(string entrada){
        this->tipo_entrada = entrada;
    }

    void setSalida(string salida){
        this->tipo_salida = salida;
    }

    void setTrans_dato(bool datos){
        this->trans_datos = datos;
    }

    double getLongitud(){
        return this->longitud;
    }

    string getEntrada(){
        return this->tipo_entrada;
    }

    string getSalida(){
        return this->tipo_salida;
    }

    bool getTrans_dato(){
        return this->trans_datos;
    }

    void imprimir(){
        cout << "La longitud del cable es de " << this->longitud << "m, el adaptador de entrada es " << this->tipo_entrada << " el adaptador de salida es " << this->tipo_salida << ". ¿Transmite datos? "; 
        if(this->trans_datos){
            cout << "Si.";
        } else {
            cout << "No.";
        };
    }
};
```

## Errores ❌

* No me funciona la herenciaxd