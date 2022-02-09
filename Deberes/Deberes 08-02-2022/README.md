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

* No funciona, en su defecto lo he inicializado xdxdxd

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

> Inicializado por que no se hacerlo xdxd

```cpp
string ajedrez[sizeAjedrez][sizeAjedrez]= {
    {"", "A", "B", "C", "D", "E", "F", "G", "H",},
    {"1", "A1", "B1", "C1", "D1", "E1", "F1", "G1", "H1",},
    {"2", "A2", "B2", "C2", "D2", "E2", "F2", "G2", "H2",},
    {"3", "A3", "B3", "C3", "D3", "E3", "F3", "G3", "H3",},
    {"4", "A4", "B4", "C4", "D4", "E4", "F4", "G4", "H4",},
    {"5", "A5", "B5", "C5", "D5", "E5", "F5", "G5", "H5",},
    {"6", "A6", "B6", "C6", "D6", "E6", "F6", "G6", "H6",},
    {"7", "A7", "B7", "C7", "D7", "E7", "F7", "G7", "H7",},
    {"8", "A8", "B8", "C8", "D8", "E8", "F8", "G8", "H8",}
};
```