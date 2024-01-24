

#include <stdio.h>

int main() {
    int a, b;
    printf("Entrez deux entiers a et b : ");
    scanf("%d %d", &a, &b);

    printf("Avant l'echange : a = %d, b = %d\n", a, b);

    // Échange sans variable temporaire
    a = a + b;
    b = a - b;
    a = a - b;

    printf("Apres l'echange : a = %d, b = %d\n", a, b);

    return 0;
}
