# Examen Array

Este es el examen de c++ sobre arrays sin clase vector.

## Enunciados 📄

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

## Funciones 🛠

> Funcion para imprimir array

```cpp
void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}
```

> Función para eliminar una posición de un array

```cpp
void delete_array(int array[], int tamanio){
    for(int i = 1; i < 5; ++i){
        array[i] = array[i + 1];
    }
}
```

> Imprime un array al revés

```cpp
void lista_al_reves(int array[], int tamanio){
    for(int i = tamanio - 1; i > 0 - 1; i--){
        cout << array[i] << " ";
    }
}
```

> Copia el contenido de un array en otro array

```cpp
void copy_array(int array[], int arr[], int size){
    for(int i = 0; i < size; i++){
        arr[i] = array[i];
    }
}
```

> Ordenar array de mayor a menor

```cpp
void order_array(int array[], int ordered[], int size){
    int cont, greater;
    cont = 0;
    greater = 0;
    for(int i = 0; i < size; i++){
        if(array[i] > greater){
            greater = array[i];
            cont++;
        }
    }
}
```

No funciona