# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 13-02-2022.

## Enunciados 📄

1. Pasar un array y su tamaño y el porcentaje que tiene que subir la nota contenida en cada una de las posiciones del array. No modificar el array original, devuelve un nuevo array.

## Funciones 🛠

> Declara la longitud de un array introducido por pantalla

```cpp
void long_array(int &n, string &line){
    cout << "Introduce la longitud del array: "; 
    getline(cin, line);
    n = stoi(line);
}
```

> Rellena un array introducido por tamaño

```cpp
double* rellenar_array_notas(int tama){
    double* array = new double[tama];
    string line;
    for(int i = 0; i < tama; i++){
        cout << "Introduce una nota: ";
        getline(cin, line);
        array[i] = stod(line);
    }
    return array;
}
```

> Imprime un array de double

```cpp
void imprimir_array_double(double* colores, int &n){
    for(int i = 0; i < n; i ++){
        cout << colores[i] << " | ";
    }
}
```

> Suma el porcentaje a un número introducido por parámetro

```cpp
double* subirNotaArray(double* array, int tama, double porcentaje){
    for(int i = 0; i < tama; i++){
        porcentaje = porcentaje * array[i] / 100;
        array[i] += porcentaje;
    }
    return array;
}
```