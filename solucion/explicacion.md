# Explicacion del codigo

Como es un codigo un poco complejo lo mejor es dejar por escrito todo lo posible.

------

## Función `bubbleSort(vector<int>& lista)`

- [x] Esta función implementa el algoritmo de ordenamiento por burbuja.
- [x] Toma como parámetro una referencia a un vector de enteros, llamado `lista`.
- [x] Utiliza dos bucles anidados para comparar y intercambiar elementos adyacentes si están en el orden incorrecto.
- [x] El bucle externo itera desde el principio hasta el penúltimo elemento de la lista.
- [x] El bucle interno itera desde el principio hasta el elemento actual del bucle externo.
- [x] Compara cada elemento con su siguiente y los intercambia si están en el orden incorrecto (mayor a menor).
- [x] Al finalizar, la lista estará ordenada de forma ascendente.

### Paso a paso

- `void bubbleSort(vector<int>& lista)`: Esta línea declara una función llamada bubbleSort que toma como parámetro una referencia a un vector de enteros llamado lista.
- `int n = lista.size();`: Esta línea obtiene el tamaño de la lista y lo almacena en la variable n, que representa la longitud de la lista.
- `for (int i = 0; i < n - 1; i++) {`: Este bucle for externo itera desde 0 hasta n - 1, recorriendo todos los elementos de la lista excepto el último.
- `for (int j = 0; j < n - 1 - i; j++) {`: Este bucle for interno itera desde 0 hasta n - 1 - i, recorriendo los elementos de la lista hasta la posición actual del bucle externo.
- `if (lista[j] > lista[j + 1]) {`: Esta línea verifica si el elemento actual es mayor que el siguiente elemento en la lista.
- `swap(lista[j], lista[j + 1]);`: Si la condición anterior es verdadera, esta línea intercambia los elementos lista[j] y lista[j + 1] utilizando la función swap, que es una función estándar de la biblioteca `<algorithm>` de C++.
- Al finalizar ambos bucles, la función bubbleSort habrá ordenado la lista en orden ascendente utilizando el algoritmo de ordenamiento por burbuja.

------

## Función `selectionSort(vector<vector<int>>& matriz)`

- [x] Esta función implementa el algoritmo de ordenamiento por selección en orden descendente.
- [x] Toma como parámetro una referencia a una matriz de vectores de enteros, llamada `matriz`.
- [x] Utiliza dos bucles anidados para encontrar el elemento máximo en cada iteración y colocarlo en su posición correcta.
- [x] El bucle externo itera desde el principio hasta el penúltimo elemento de la matriz.
- [x] El bucle interno itera desde el elemento siguiente al del bucle externo hasta el último elemento de la matriz.
- [x] Compara cada elemento diagonal de la matriz y los intercambia si el elemento siguiente es mayor (en orden descendente).
- [x] Al finalizar, la matriz estará ordenada en orden descendente según los elementos diagonales.

### Paso a paso Selection Sort

- `void selectionSort(vector<vector<int>>& matriz)`: Esta línea declara una función llamada `selectionSort` que toma como parámetro una referencia a una matriz de vectores de enteros llamada `matriz`.
- `int n = matriz.size();`: Esta línea obtiene el tamaño de la matriz (número de filas) y lo almacena en la variable `n`.
- `for (int i = 0; i < n; i++) {`: Este bucle `for` externo itera desde 0 hasta `n - 1`, recorriendo las filas de la matriz.
- `for (int j = i + 1; j < n; j++) {`: Este bucle `for` interno itera desde `i + 1` hasta `n - 1`, recorriendo las filas siguientes a la fila actual del bucle externo.
- `if (matriz[j][j] > matriz[i][i]) {`: Esta línea verifica si el elemento diagonal (`matriz[j][j]`) de la fila actual es mayor que el elemento diagonal (`matriz[i][i]`) de la fila anterior.
- `swap(matriz[i], matriz[j]);`: Si la condición anterior es verdadera, esta línea intercambia las filas `matriz[i]` y `matriz[j]` utilizando la función `swap`, que es una función estándar de la biblioteca `<algorithm>` de C++.
- Al finalizar ambos bucles, la función `selectionSort` habrá ordenado la matriz en orden descendente según los elementos diagonales.

------

## Función `insertionSort(vector<int>& lista)`

- [x] Esta función implementa el algoritmo de ordenamiento por inserción.
- [x] Toma como parámetro una referencia a un vector de enteros, llamado "lista".
- [x] Comienza desde el segundo elemento de la lista y lo compara con los elementos anteriores.
- [x] Si encuentra un elemento mayor, desplaza los elementos mayores a la derecha para hacer espacio e inserta el elemento en su posición correcta.
- [x] Repite este proceso para cada elemento restante de la lista, insertándolos en su posición adecuada.
- [x] Al finalizar, la lista estará ordenada de forma ascendente.

### Paso a paso Insertion Sort

- `void insertionSort(vector<int>& lista)`: Esta línea declara una función llamada `insertionSort` que toma como parámetro una referencia a un vector de enteros llamado `lista`.
- `int n = lista.size();`: Esta línea obtiene el tamaño de la lista y lo almacena en la variable `n`.
- `for (int i = 1; i < n; i++) {`: Este bucle `for` externo itera desde el segundo elemento (`i = 1`) hasta el último elemento de la lista.
- `int valorActual = lista[i];`: Esta línea almacena el valor del elemento actual (`lista[i]`) en la variable `valorActual`.
- `int j = i - 1;`: Esta línea inicializa la variable `j` con el índice del elemento anterior al elemento actual.
- `while (j >= 0 && lista[j] > valorActual) {`: Este bucle `while` se ejecuta mientras `j` sea mayor o igual a 0 y el elemento en la posición `j` de la lista sea mayor que el `valorActual`.
- `lista[j + 1] = lista[j];`: Esta línea desplaza hacia la derecha el elemento en la posición `j` para hacer espacio para el `valorActual`.
- `j--;`: Esta línea decrementa `j` para continuar comparando con los elementos anteriores en la lista.
- `lista[j + 1] = valorActual;`: Esta línea coloca el `valorActual` en su posición correcta dentro de la lista, después de finalizar el bucle `while`.
- Al finalizar el bucle `for`, la función `insertionSort` habrá ordenado la lista en orden ascendente utilizando el algoritmo de ordenamiento por inserción.

------

## Función `main()`

- [x] La función main es el punto de entrada del programa.
- [x] Declara e inicializa la lista de números y la matriz con los valores proporcionados.
- [x] Realiza las operaciones matemáticas y lógicas según se describe en el enunciado del ejercicio.
- [x] Llama a la función `bubbleSort` para ordenar la lista utilizando el algoritmo de ordenamiento por burbuja.
- [x] Imprime la lista ordenada en pantalla.
- [x] Llama a la función `selectionSort` para ordenar la matriz utilizando el algoritmo de selección en orden descendente.
- [x] Imprime la matriz ordenada en pantalla.
- [x] Llama a la función `insertionSort` para ordenar la lista nuevamente utilizando el algoritmo de ordenamiento por inserción.
- [x] Imprime la lista ordenada por inserción en pantalla.
- [x] Finalmente, retorna `0` para indicar que el programa se ha ejecutado correctamente.

### Paso a paso de la funcion main

- Se declara un vector llamado `numeros` que contiene los números iniciales desordenados.
- Se realizan varias operaciones matemáticas y lógicas con los elementos de la lista.
- Se llama a la función `bubbleSort` para ordenar la lista utilizando el algoritmo de burbuja.
- Se imprime la lista ordenada en la consola.
- Se crea una matriz llamada `matriz` con los valores proporcionados.
- Se llama a la función `selectionSort` para ordenar la matriz utilizando el algoritmo de selección en orden descendente.
- Se imprime la matriz ordenada en la consola.
- Se llama a la función `insertionSort` para ordenar nuevamente la lista utilizando el algoritmo de inserción.
- Se imprime la lista ordenada por inserción en la consola.
- Finalmente, se retorna 0 para indicar que el programa se ha ejecutado correctamente.

------
