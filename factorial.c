#include <stdio.h>

// Función recursiva para calcular el factorial de un número
int factorial(int n) {
    // Caso base: si n es 0 o 1, el factorial es 1
    if (n == 0 || n == 1) {
        return 1;
    }
    // Caso recursivo: n! = n * (n-1)!
    return n * factorial(n - 1);
}

int main() {
    int num;
    
    // Solicitar al usuario un número
    printf("Introduce un número para calcular su factorial: ");
    scanf("%d", &num);
    
    // Validar si el número es negativo
    if (num < 0) {
        printf("El factorial no está definido para números negativos.\n");
    } else {
        // Llamar a la función recursiva y mostrar el resultado
        printf("El factorial de %d es %d\n", num, factorial(num));
    }
    
    return 0;
}
