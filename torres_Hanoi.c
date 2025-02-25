#include <stdio.h>

// Función recursiva para resolver las Torres de Hanoi
void hanoi(int n, char origen, char auxiliar, char destino) {
    if (n == 1) {
        printf("Mover disco 1 de %c a %c\n", origen, destino);
        return;
    }
    
    // Mover n-1 discos de origen a auxiliar usando destino como apoyo
    hanoi(n - 1, origen, destino, auxiliar);
    
    // Mover el disco restante de origen a destino
    printf("Mover disco %d de %c a %c\n", n, origen, destino);
    
    // Mover los n-1 discos de auxiliar a destino usando origen como apoyo
    hanoi(n - 1, auxiliar, origen, destino);
}

int main() {
    int n = 3; // Número de discos
    printf("Movimientos para resolver Torres de Hanoi con %d discos:\n", n);
    hanoi(n, 'A', 'B', 'C'); // A es la torre de origen, B es auxiliar, C es destino
    return 0;
}
