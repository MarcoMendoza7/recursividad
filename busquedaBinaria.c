#include <stdio.h>

// Función recursiva para realizar la búsqueda binaria
int busqueda_binaria(int arr[], int izquierda, int derecha, int objetivo) {
    if (izquierda > derecha) {
        return -1;  // El objetivo no se encuentra en el arreglo
    }

    int medio = izquierda + (derecha - izquierda) / 2;  // Índice medio

    // Caso base: Si encontramos el objetivo
    if (arr[medio] == objetivo) {
        return medio;
    }

    // Si el objetivo es menor que el valor en medio, buscamos en la mitad izquierda
    if (arr[medio] > objetivo) {
        return busqueda_binaria(arr, izquierda, medio - 1, objetivo);
    }

    // Si el objetivo es mayor que el valor en medio, buscamos en la mitad derecha
    return busqueda_binaria(arr, medio + 1, derecha, objetivo);
}

int main() {
    int arr[] = {2, 5, 7, 10, 15, 20, 25, 30, 35, 40};
    int n = sizeof(arr) / sizeof(arr[0]);  // Tamaño del arreglo
    int objetivo;

    // Solicitar al usuario el valor a buscar
    printf("Ingrese el número que desea buscar: ");
    scanf("%d", &objetivo);

    // Llamar a la función de búsqueda binaria
    int resultado = busqueda_binaria(arr, 0, n - 1, objetivo);

    // Mostrar el resultado
    if (resultado == -1) {
        printf("El número %d no se encuentra en el arreglo.\n", objetivo);
    } else {
        printf("El número %d se encuentra en el índice %d.\n", objetivo, resultado);
    }

    return 0;
}
