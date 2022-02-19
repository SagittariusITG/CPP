# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 21-01-2022.

## Enunciados 📄

* Crear función de valor absoluto (quitar signos).
* Arreglar la función muchaDiferencia() para que funcione con cualquier edad (mayor o menor que la tuya).

## Funciones 🛠

> Compara dos numeros.

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

> Devuelve los números en forma de números absolutos.

```cpp
int valAbsoluto(int valor){
    return valor * (-1);
}

```
## Output

Te pregunta la edad y si eres mayor o menor que yo te salta una frase y la diferencia de edad entre los dos.
