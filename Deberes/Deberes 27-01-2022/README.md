# Ejercicios de deberes

Estos son los deberes que puso Celia para el día 27-01-2022.

## Enunciados

1. Escribir un programa que guarde una contraseña y no nos permita avanzar hasta no haber introducido la contraseña correcta.
2. Escribir un programa que pregunte una edad y responda si la presona es mayor o menor de edad.
3. Escribir un programa que pregunte una nota y responda si ha sacado: sobresaliente, notable, bien, suficiente, suspenso.
4. Escribir un programa que pregunte un número y responda si es par o impar.
5. Escribir un programa al que le pases un array de números y devuelva un array con solo los pares.

## Funciones

* Bucle para acertar una contraseña.

```cpp
void contrasenia(string passw, string respuesta){
    while (respuesta != passw){
        cout << "Escribe la contrasena: ";
        cin >> respuesta;
    }
}
```

* Verifica la mayoría de edad.

```cpp
void ministerio_espania(int edad, string &respuesta){
    cout << "Cual es tu edad? "; cin >> edad;
    if(edad < 18){
        respuesta = "Eres menor de edad.";
    }else if(edad >= 18){
        respuesta = "Eres mayor de edad.";
    }
}
```

* Pregunta una nota y responde dependiendo de la nota.

```cpp
void notas(float nota, string &respuesta){
    cout << "Cual es tu nota? "; cin >> nota;
    if(nota >= 0 and nota <= 4){
        respuesta = "La nota es suspenso.";
    }else if(nota >= 5 and nota < 6){
        respuesta = "La nota es suficiente.";
    }else if(nota >= 6 and nota < 7){
        respuesta = "La nota es bien.";
    }else if(nota >= 7 and nota < 9){
        respuesta = "La nota es un notable.";
    }else if(nota >= 9 and nota < 10){
        respuesta = "La nota es sobresaliente";
    }
}
```

* Verifica si un número es par o impar.

```cpp
void es_par(int &num, string &respuesta){
    cout << "Introduce un número: "; cin >> num;
    if(num % 2 == 0){
        respuesta = " es par.";
    }else{
        respuesta = " es impar.";
    }
}
```

* Imprime por pantalla un array.

```cpp
void imprimirArray(int array[], int tamanio){
    for (int i = 0 ; i < tamanio ; i++){
        cout << array[i];
    }
}
```