#include <stdio.h>

// Función recursiva para calcular el n-ésimo número de Fibonacci
int fibonacci(int n) {
    // Caso base: el primer número de Fibonacci es 0, y el segundo es 1
    if (n == 0) {
        return 0;
    } else if (n == 1) {
        return 1;
    } else {
        // Caso recursivo: fibonacci(n) = fibonacci(n-1) + fibonacci(n-2)
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int num;

    // Solicitar al usuario que ingrese un número
    printf("Introduce un número entero para calcular el n-ésimo Fibonacci: ");
    scanf("%d", &num);

    // Verificar que el número no sea negativo
    if (num < 0) {
        printf("El número debe ser no negativo.\n");
    } else {
        // Llamar a la función recursiva y mostrar el resultado
        printf("El número de Fibonacci en la posición %d es: %d\n", num, fibonacci(num));
    }

    return 0;
}
