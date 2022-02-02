# Ejercicios de deberes

Estos son los deberes que puso Celia el día 02-02-2022.

## Enunciados

* Leer números desde el teclado hasta que se escriba -1 y devolver el máximo, el mínimo y la media de todos los numeros.
* Sumar los 2^n numeros, siendo 'n' un número introducido desde teclado. ¡Ojo: Sin usar pow()!
* Imprimir los números del 100 al 0.

## Funciones

> Insertar números en un array

```cpp
int insertar_nums(int array[], int &contador){
    int respuesta;
    contador = 0;

    do{
        cout << "Inserta un número: "; cin >> respuesta;
        array[contador] = respuesta;
        contador++;
    }while(respuesta != -1);
    return contador;
}
```

> Sacar número máximo de un array

```cpp
int num_max_array(int array[], int &contador){
    int mayor;
    for(int i = 0; i < contador; i++){
        if(array[i] > mayor){
            mayor = array[i];
        }
    }
    return mayor;
}
```

> Sacar número mínimo de un array

```cpp
int num_min_array(int array[], int contador){
    int menor;
    for(int i = 0; i < contador; i++){
        if(array[i] < menor){
            menor = array[i];
        }
    }
    return menor;
}
```

> Sacar media de elementos de un array

```cpp
float num_avg_array(int array[], int contador){
    int avg;
    avg = 0;
    for(int i = 0; i < contador; i++){
        avg += array[i];
    }
    avg = avg / contador;
    return avg;
}
```

> Función de potencias

```cpp
long sacar_potencia(long exponente, long base){
    long resultado, suma;
    suma = 1;
    resultado = 1;
    while(exponente > 0){
        resultado = resultado * base;
        suma += resultado;
        exponente--;
    }
    return suma;
}
```

Esta función saca y suma las potencias, según la base y el exponente deseado. (Para hacer simplemente la potencia quitamos el signo de suma de dentro del bucle).

> Función cuenta atrás

```cpp
int imprimir_nums(){
    for(int i = 100; i >= 0; i--){
        if(i % 10 == 0){
            cout << endl;
        }
        cout << i << "\t";
    }
}
```

> Función de impresión de array

```cpp
void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i] << " ";
    }
}
```