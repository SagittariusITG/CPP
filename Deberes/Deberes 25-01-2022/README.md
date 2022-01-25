# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 25-01-2022.

## Enunciado del ejercicio

* Rellenar un vector con los 100 primeros números.
* Sumar de 4 en 4 los números y guardarlos en otro vector.

## Funciones

* Añade los números del 0 al 99 en un vector.

```cpp
void aniadir_vector(int array[], int length){
    int contador = 0;
    cout << endl << "100 valores: " << endl << endl;
    for (int i = 0; i < length; i++){
        array[i] = contador;
        contador++;
        if(i % 5 == 0){
            cout << endl;
        }
        cout << array[i] << "\t";
    }
}
```

* Esta función debería sumar los números de 4 en 4 y añadirlos en otro array.

```
Como no he sabido hacerlo, te diré más o menos como se podría hacer.

* Recrorreríamos el otro vector de 4 en 4 (i += 4 en lugar de i++).
* Iríamos sumando los números de cada posición (numero[i] += numero[i]).
```

No sé explicarmexd.
