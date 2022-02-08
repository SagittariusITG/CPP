# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 08-02-2022.

## Enunciados 📄

1. Rellenar matriz con 0s.
2. Rellenar matriz con número pasado por parámetro.
3. Imprimir matriz.
4. Rellenar matriz como tablero X/O.

## Ejercicios

### Ejercicio 1

> Esta función crea una matriz con todo 0s (Se necesitan crear las variables globales del size).

```cpp
void aniadir_matriz(int matriz[size][size], int filas, int columnas){
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[i][j] = 0;
        }
    }
}
```

### Ejercicio 2

> Crea una matriz con el número deseado (toda igual).

```cpp
void aniadir_matriz_deseado(int matriz[size][size], int filas, int columnas){
    int n;
    n = 0;
    cout << "Escribe el número para las filas: "; cin >> n;
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[i][j] = n;
        }
    }
}
```

### Ejercicio 3

> Imprime por pantalla una matriz.

```cpp
void imprimir_matriz(int matriz[size][size], int filas, int columnas) { 
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout << matriz[i][j] << "\t"; 
        }
        cout<<endl; 
    }
}
```

### Ejercicio 4 ❌

> Crea un tablero de ajedrez.

```cpp
void tablero(string matriz[sizeAjedrez][sizeAjedrez], int filas, int columnas){
    char letra;
    int n;
    n = 1;
    letra = 'A';
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            matriz[i][j] = letra;
            letra++;
        }
    }
}
```

> Imprime una matriz de strings.

```cpp
void imprimir_matriz_tablero(string matriz[sizeAjedrez][sizeAjedrez], int filas, int columnas) { 
    for (int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
            cout << matriz[i][j] << "\t"; 
        }
        cout<<endl; 
    }
}
```