# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 25-01-2022.

## Enunciados 📄

* Rellenar un vector con los 100 primeros números.
* Sumar de 4 en 4 los números y guardarlos en otro vector.

## Funciones 🛠

> Rellena un vector con los 100 primeros números.

```cpp
void aniadir_vector(int array[], int tamanio){
  for (int i = 0 ; i < tamanio ; i++){
    array[i] = i;
  }
}
```

> Suma los números de 4 en 4 de un vector.

```cpp
void sumar_4_en_4(int num[], int tamanio, int sumaNum[]){
    for(int i = 0; i < tamanio; i+=4){
        sumaNum[i/4] = i + i+1 + i+2 + i+3;
    }
}
```

> Imprime por pantalla cualquie vector.

```cpp
void imprimirArray(int array[], int tama){
    for (int i = 0 ; i < tama ; i++){
        if(i % 5 == 0){
            cout << endl;
        }
        cout << array[i] << "\t";
    }
}
```