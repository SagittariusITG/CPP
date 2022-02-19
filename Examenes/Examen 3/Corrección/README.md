# Correccíon examen Array

Esta es la corrección del examen de c++ sobre arrays sin clase vector.

## Preguntas

1. Imprime tu nombre por pantalla.
2. Crea un array inicializado por defecto con 5 números aleatorios entre el 0 y el 10.
3. Cambiar el tercer número por su doble.
4. Elimina el segundo número. (Ej: [1,2,3,4,5] -> [1,3,4,5])
5. Imprime por pantalla directamente la lista al revés.
6. Guarda en una lista los números al revés de como se encuentran en la lista original. (Ej: [1,2,3,4,5] -> [5,4,3,2,1]
7. Guarda una lista con los números ordenados.
8. Guarda una lista sin los números repetidos.
9. Crea una segunda lista solicitando los números por pantalla. Únela a la primera y elimina los números repetidos.
10. De nuevo con esa segunda lista y la primera, imprime solo los números que aparezcan en las dos listas.

## Funciones

> Imprime un array

```cpp
void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}
```

> Imprime un puntero de un array a la inversa

```cpp
void imprimir_array_puntero_reverso(int* array, int size){
    for(int i = size - 1; i > 0 - 1; i--){
        cout << array[i] << " ";
    }
}
```

> Imprime un puntero de un array

```cpp
void imprimir_array_puntero(int* array, int size){
    for(int i = 0; i < size; i++){
        cout << array[i] << " ";
    }
}
```

> Genera números aleatorios

```cpp
void random_numbers(int array[], int size){
    for(int i = 0; i< size; i++){
        array[i] = rand() % 10;
    }
}
```

> Multiplica por 2 el número que esté en la posición introducida

```cpp
void double_position(int array[], int size, int position){
    for(int i = 0; i < size; i++){
        if(i == position){
            array[i] *= 2;
        }
    }
}
```

> Elimina una posición de un array

```cpp
void delete_number_array(int array[], int size, int position){
    for(int i = 0; i < size; i++){
        array[i] = array[i + 1];
    }
}
```