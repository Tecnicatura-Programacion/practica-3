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

------

## Función `selectionSort(vector<vector<int>>& matriz)`

- [x] Esta función implementa el algoritmo de ordenamiento por selección en orden descendente.
- [x] Toma como parámetro una referencia a una matriz de vectores de enteros, llamada `matriz`.
- [x] Utiliza dos bucles anidados para encontrar el elemento máximo en cada iteración y colocarlo en su posición correcta.
- [x] El bucle externo itera desde el principio hasta el penúltimo elemento de la matriz.
- [x] El bucle interno itera desde el elemento siguiente al del bucle externo hasta el último elemento de la matriz.
- [x] Compara cada elemento diagonal de la matriz y los intercambia si el elemento siguiente es mayor (en orden descendente).
- [x] Al finalizar, la matriz estará ordenada en orden descendente según los elementos diagonales.

------

## Función `insertionSort(vector<int>& lista)`

- [x] Esta función implementa el algoritmo de ordenamiento por inserción.
- [x] Toma como parámetro una referencia a un vector de enteros, llamado "lista".
- [x] Comienza desde el segundo elemento de la lista y lo compara con los elementos anteriores.
- [x] Si encuentra un elemento mayor, desplaza los elementos mayores a la derecha para hacer espacio e inserta el elemento en su posición correcta.
- [x] Repite este proceso para cada elemento restante de la lista, insertándolos en su posición adecuada.
- [x] Al finalizar, la lista estará ordenada de forma ascendente.

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

------
