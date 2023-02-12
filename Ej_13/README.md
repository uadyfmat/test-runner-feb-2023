# **Ejercicio 13:**

## Descripción del problema
Los datos de la tabla siguiente se obtienen experimentalmente para determinar los efectos de la temperatura sobre una resistencia eléctrica:

| Puntos    | Temperatura(x)     | Resistencia(fx)     |
| :--------- | :--------- | :--------- |
| 1 | 20.5 | 765 |
| 2 | 32.7 | 826 |
| 3 | 51.0 | 873 |
| 4 | 73.2 | 942 |
| 5 | 85.7 | 1032|

Para estimar el valor de la resistencia en función de la temperatura con los datos de la tabla de temperaturas, y utilizando el método de mínimos cuadrados con interpolación simple, se utiliza la siguiente fórmula:

$$f(x)=a_0+a_1x$$
En donde los valores de los coeficientes a<sub>0</sub> y a<sub>1</sub> se obtienen mediante las siguientes fórmulas:

<center>
    <img src="../.github/resources/Summation.jpeg" width="350px">
</center>

**m** es el número de datos obtenidos experimentalmente y **x<sub>i</sub>** y **f(x<sub>i</sub>)** son los datos de la temperatura y la resistencia, respectivamente. 

Deberás realizar un programa para estimar el valor de la resistencia en función de la temperatura.

## Descripción de las entradas

Se ingresa un número entero.

## Descripción de las salidas

La salida debe ser un número flotante.

## Ejemplos

| Entrada    | Salida     |
| :--------- | :--------- |
| 25 |  |
| 60 |  |