# 🐙 Examen Pulpos 🐙

Este es el examen de c++ con temática de pulpos.

## Enunciados 📄

* Muestra tu nombre por pantalla.
* El pulpo tiene hambre: Te va a insultar hasta que le lances crustáceos.
* Los pulpos funcionan en base 8.
        Crea una función a la que le pases un número y lo transforme a octal. Ejemplo:
        6 -> 6
        7 -> 7
        8 -> 10
        9 -> 11
        ...
        21 -> 25
        22 -> 26
        23 -> 27
        24 -> 30
* Pasa lista a los pulpos.
Crea una lista con el nombre de 5 pulpos y una función que los imprima por pantalla.
Al pasar lista, los pulpos contestan SI/NO, devuelve una lista con las faltas.
* Los pulpos solo comen números de crustáceos múltiplos de tres.
Le pasamos este array con el número de crustáceos que hay en cada pecera:
[23,74,92,64,27,13,84,73]
Reorganiza los crustáceos para que en todas las peceras haya un número múltiplo de tres de crustáceos.

## Funciones 🛠

> Funcion para dar de comer

```cpp
void comida_pulpo(string respuesta){
    string comida;
    comida = "crustaceo";
    while(respuesta != comida){
        cout << "Pulpo: Tengo hambre!!" << endl;
        cout << "Yo: Pues toma "; cin >> respuesta;
        cout << endl;
    }
}
```

Esta función también puede ser usada como "detector" de contraseñas, es decir, hasta que no adivine la palabra en concreto el progroama no sigue.

> Función a la que le introduces un número decimal y te lo devuelve en octal.

```cpp
int decimal_a_octal(int decimal){
    int resto, i, octal;

    i = 1;
    octal = 0;

    while (decimal != 0){
        resto = decimal % 8;
        decimal /= 8;
        octal += resto * i;
        i *= 10;
    }
    return octal;
}
```

> Concatena strings dependiendo de la respuesta introducida por pantalla.

```cpp
void pasar_lista(string lista[], int tamanio, string faltas[]){
    string respuesta;
    for(int i = 0; i < tamanio; i++){
        cout << "Está " << lista[i] << " presente?" << endl; cin >> respuesta;
        // faltas[i] = lista[i] + " - Presente";
        if(respuesta == "si"){
            faltas[i] = lista[i] + " - Presente";
        }else if(respuesta == "no"){
            faltas[i] = lista[i] + " - No presente";
        }else{
            faltas[i] = lista[i] + " - Mal escrito";
        }
    }
}
```

> Imprime un array de string por pantalla.

```cpp
void imprimir_array(string array[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        cout << array[i] << endl;
    }
}
```

> Imprime un array de int por pantalla.

```cpp
void imprimir_array_int(int array[], int tamanio){
    for(int i = 0; i < tamanio; i++){
        cout << array[i] << " ";
    }
}
```

> Reparte a todos los números el resto de los mismos para que todos sean múltiplos de 3.

```cpp
void multiplo_3_todo(int comida[], int tamanio){
    int sobras;
    sobras = 0;
    for(int i = 0; i < tamanio; i++){
        comida[i] += sobras;
        sobras = comida[i] % 3;
        comida[i] -= sobras;
    }
}
```