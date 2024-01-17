#include <stdio.h>

int factorielle(int n) {
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * factorielle(n - 1);
    }
}

int main() {
    int nombre;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    printf("La factorielle de %d est : %d\n", nombre, factorielle(nombre));
    return 0;
}
