# **Ejercicio 15:**

## Descripción del problema

En análisis numérico el método de la secante es un método para encontrar los ceros de una función de forma iterativa. El método se define por la relación de recurrencia:

$$x_{n+1}=x_n - \frac{x_n-x_{n-1}}{f(x_n)-f(x_n-1)}f(x_n).$$ 

Como se puede ver, este método necesitará dos aproximaciones iniciales de la raíz ( x<sub>0</sub> y x<sub>1</sub> ) para poder inducir una pendiente inicial. El algoritmo deberá parar cuando | (x<sub>n-1</sub> – x<sub>n</sub>)/x<sub>n</sub> | sea menor que la precisión requerida. 

*Ejemplo:*
Usar el método de la secante para calcular la raíz aproximada de la función $f(x)=x^2-4$. Comenzando con $x_0=4, x_1=3$ y hasta que $| \in _r|\leq 1\% $.

Aplicando la primera iteración con la fórmula $x_2=x_1-\frac{x_1-x_0}{f(x_1)-f(x_0)}f(x_1)$, se tendría un valor para $x_2=2.2857$. Si se calcula el error relativo con los valores $x_2$ como valor real y $x_1$ como valor aproximado se tendrá: $\in_r=|\frac{3-2.2857}{2.2857}|*100\%=31.25\%$.

Ahora si se calcula en una segunda iteración $x_3=x_2-\frac{x_2-x_1}{f(x_2)-f(x_1)}f(x_2)$, se tendría un valor para $x_3=2.0541$, con un error relativo $\in_r=|\frac{2.2857-2.0541}{2.0541}|*100\%=11.28\%$.

Ahora si se continúa realizando los cálculos iterativamente, se tendrán valores como los mostrados en la siguiente tabla:

> **Tabla 1.** Resultados al aplicar el método de la secante a la función $f(x)=x^2-4$. Con $x_0=4$ y $x_1=3$.

| $i$    | $x_i$     | $x_{i+1}$ | $x_{i+2}$ | $\in_a$ | $\in_r$ |
| :--------- | :--------- | :--------- | :--------- | :--------- | :--------- |
| 0 | 4 | 3 | 2.2857 | 0.7143 | 31.25% |
| 1 | 3 | 2.2857 | 2.0541 | 0.2316 | 11.28% |
| 2 | 2.2057 | 2.0541 | 2.0036 | 0.0505 | 2.52% |
| 3 | 2.0541 | 2.0036 | 2.0000 | 0.0036 | 0.18% |

Se termina el proceso iterativo con la encontrada de la raíz para $x_5=2.0000$.

Utilizando el método de la secante, debes realizar un programa que encuentre la raíz de la ecuación $f(x)=x_2-4$. Iterar hasta que $| \in _r|\leq 1\% $.

## Descripción de las entradas

Dos números enteros, en este caso, $x_0=4$ y $x_1=3$.

## Descripción de las salidas

La salida debe ser la raíz encontrada de de la ecuación $f(x)=x_2-4$.

## Ejemplos

| Entrada    | Salida     |
| :--------- | :--------- |
| 4 <br> 3 | 2.00 |