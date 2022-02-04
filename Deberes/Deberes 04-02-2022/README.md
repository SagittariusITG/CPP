# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 04-02-2022 ya que estaba enferma y no pudimos dar clase.

## Enunciados 📄

1. Escribe tu nombre por pantalla.
2. Rellena un vector de tamaño 10 con números mayores a 5 solicitando dichos números desde teclado.
3. Rellena otro vector de tamaño 10 con nueve 0s y un 1.
4. ¡Di un número del 1 al 10!
5. En el primer vector decrementa en 5 unidades el número que esté en la posición que se haya introducido por pantalla. Si ese número es menor a 5, la posición debe quedarse a 0. Deja de solicitar números cuando alguna de las posiciones se quede a 0.
6. En el segundo vector indica si ha acertado la posición que tiene el 1 o si por el contrario tiene que probar suerte otra vez. Deja de solicitar números cuando se hacierte en qué posición está el 1 o se haya solicitado el número al menos 5 veces sin exito.
7. Busca infomación sobre cómo se generan números aleatorios en C++. Explica con tus palabras cómo funciona y reescribe la generación de las listas utilizando la aleatoriedad.

## Ejercicios

### Ejercicio 2

```cpp
#include <iostream>
using namespace std;

void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}
void insert_nums(int array[], int size){
    int n;
    n = 0;
    for(int i = 0; i < size; i++){
        cout << "Escribe un numero: "; cin >> n;
        array[i] = n;
    }
}

void mayor_que(int array[], int size){
    int contador, new_arr[10];
    contador = 0;
    for(int i = 0; i < size; i++){
        if(array[i] >= 5){
            new_arr[contador] = array[i];
            contador++;
        }
    }
    imprimirArray(new_arr, contador);
}

int main(){
    int size;
    int greater_than[10];

    size = 10;

    insert_nums(greater_than, size);
    cout << endl << "Los números mayores de 5 son: ";
    mayor_que(greater_than, size);

    return 0;
}
```

### Ejercicio 2.1

> Función

```cpp
void insert_0_and_1_vec(int array[], int size){
    for(int i = 0; i < size - 1; i++){
        array[i] = 0;
    }
    array[size] = 1;
}
```

> Main

```cpp
int empty_vec[10];

cout << endl;
insert_0_and_1_vec(empty_vec, size);
imprimirArray(empty_vec, size);
cout << endl << endl;
```

### Ejercicio 3 y 3.1

> Función

```cpp
void copy_array(int array[], int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = array[i];
    }
}

void decrement_in_5(int array[], int position){
    do{
        cout << "¡Di un número del 1 al 10! "; cin >> position;
        if(array[position] < 5){
            array[position] = 0;
        }else{
            array[position] - 5;
        }
        imprimirArray(array, 10);
    }while(array[position] == 0);
}
```

> Main

```cpp
int copy_greater_than[10];

respuesta = 0;
copy_array(greater_than, copy_greater_than, size);
decrement_in_5(copy_greater_than, respuesta);
```

### Ejercicio 3.2

### Ejercicio 4

Para crear listas aleatorias hay que importar la libreria <cstdlib>.

Para usarlo, por ejemplo, podemos hacerlo de la siguiente manera:

```cpp
int n_rand;

n_rand = rand % 100; // Crea un número random entre 0 al 99
```

```cpp
int n_rand;

n_rand = rand % 100 + 1; // Crea un número random entre 1 al 100
```

```cpp
int n_rand;

n_rand = rand % 30 + 1985; // Crea un número random entre 1985 y 2014
```

## 🛠 Batería de pruebas 🛠

* Para el ejercicio 2 simplemente he ido poniendo números partiendo del 5, por ejemplo, `5, 6, 4, 7, 1, 9, 3, 8, 3, 6`.

* Para el ejercicio 3.1 simplemente he copiado el mismo array en otro para poder actuar sobre la copia.

## ❌ Problemas durante el desarrollo ❌

* Literalmente 1:15h para hacer el ejercicio 2.

* He tenido complicaciones ya que quería resumirlo todo mucho. Encuentro mucha más dificultad (obviamente) en el programar con C++ que con Python, el manejo de `arrays` es muy diferente y más complicado en C++, no lo asimilo muy bien aún.