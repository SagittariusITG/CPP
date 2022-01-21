# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 21-01-2022.

## Funciones

Compara dos numeros.

```cpp
int diffEdades(int edadIntro, int miEdad){
    int sol;
    if (edadIntro < miEdad){
        sol = edadIntro - miEdad;
    }else{
        sol = miEdad - edadIntro;
    }
    return sol;
}
```

Devuelve los números en forma de números absolutos.

```cpp
int valAbsoluto(int valor){
    return valor * (-1);
}

```
