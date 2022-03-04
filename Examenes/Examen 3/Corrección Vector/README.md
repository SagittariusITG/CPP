# Correccíon Examen Array

Esta es la corrección del examen de c++ sobre arrays con clase vector.

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

> Imprime un vector.

```cpp
void imprimir_vect(vector<int> vect){
    for(int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}
```

> Imprime un vector al revés.

```cpp
void imprimir_vect_int_invert(vector<int> vect){
    for(int i = vect.size() - 1; i > 0 - 1; i--){
        cout << vect[i] << " ";
    }
}
```

> Imprime un vector de string

```cpp
void imprimir_vect_str(vector<string> vect){
    for(int i = 0; i < vect.size(); i++){
        cout << vect[i] << " ";
    }
}
```

> Inserta mi nombre en un vector.

* Podría hacer que a partir de una variable pidiera el nombre o el string deseado, pero en este caso solo tenía que poner mi nombre.

```cpp
vector<string> insertar_nombre(vector<string> vect){
    for(int i = 0; i < 1; i++){
        vect.insert(vect.begin() + i, "Joël Arnaud Carreras");
    }
    return vect;
}
```

> Inserta valores random en un vector con el tamaño que le indiquemos en los parámetros.

```cpp
vector<int> insertar(vector<int> vect, int size){
    int n_rnd;
    for(int i = 0; i < size; i++){
        n_rnd = rand() % 10;
        vect.insert(vect.begin() + i, n_rnd);
    }
    return vect;
}
```

> Dobla el número que esté en la posición deseada (DiffForHuman).

```cpp
vector<int> doblar(vector<int> vect, int position){
    vect[position-1] = vect[position-1] * 2;
    return vect;
}
```

> Elimina un elemento de un array de la posición deseada (DiffForHuman).

```cpp
vector<int> eliminar(vector<int> vect, int position){
    vect.erase(vect.begin() + position-1);
    return vect;
}
```

> Copia un vector en otro invertido.

```cpp
vector<int> copiar_invert(vector<int> vect){
    vector<int> copia;
    for(int i = vect.size()-1; i > 0-1; i--){
        copia.push_back(vect[i]);
    }
    return copia;
}
```

> Une dos vectores.

```cpp
vector<int> unir_vects(vector<int> vect){
    int num;
    for(int i = 0; i < 4; i++){
        cout << "Introduce un número: ";
        cin >> num;
        vect.insert(vect.begin() + i, num);
    }
    return vect;
}
```

## Errores ❌

* El ejercicio 7 está a lo guarro pero por eso utilizamos la clase vector :D.
* El ejercicio 8 no funciona (no borra eliminados).
* El ejercicio 10 no funciona (no borra eliminados).