# 🦈 Examen tiburones 🦈

Aqui tengo el primer examen hecho en C++.

## Enunciados 📄

* Imprime tu nombre por pantalla.

* Pregunta por pantalla cuántos años tiene un tiburón.

* (Función) Partiendo de un número de años calcule cuanto tiempo en días y cuánto tiempo en meses ha pasado.

* (Esto es ficticio): Cada 5 meses al tiburón se le caen tantos dientes como meses tenga, es decir:
     * A los 5 meses se le caen 5 dientes.
     * A los 10 meses se le caen 10 dientes: Ya se le han caido 15 dientes (5 + 10).
     * A los 15 meses se le caen 15 dientes: Ya se le han caido 30 dientes (5+10+15) , etc.
(Función) Calcula cuántos dientes se le han caído en total al tiburón.

* (Esto es ficticio): Si el tiburón tiene más de 8 años ya no le quedan dientes que puedan caerse.
  Modifica la función anterior para que deje de sumar dientes caídos cuando los meses lleguen a 8 años.

Suerte! 
PD: [Todas las funciones extra son bienvenida]

## Funciones 🛠

> Esta función te dice la diferencia entre la fecha introducida y la actual.

```cpp
int descubrirFecha(int anio_actual, int edadTibu){
    return (anio_actual - edadTibu);
}
```

> Calcula cuantos meses hay en la edad introducida.

```cpp
int calcular_meses(int edad){
    return (edad * 12);
}
```

> Calcula los días que hay en la edad introducida.

```cpp
int calcular_dias(int edad_meses){
    return (edad_meses * 30);
}
```

> Esta función calcula cuantos dientes pierde el tiburón durante los 8 años (Específico).

```cpp
int calcular_dientes(int meses, int anio_max){
    int sumar = 0;
    anio_max = (calcular_meses(anio_max));

    for (int i = 0; i <= meses && i < anio_max; i += 5){
        sumar += i;
    }

    return sumar;
}
```