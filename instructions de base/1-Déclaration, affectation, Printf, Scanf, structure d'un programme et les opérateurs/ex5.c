
#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("Entrez un entier n : ");
    scanf("%d", &n);

    for (int i = 1; i <= n; ++i) {
        sum += i;
    }

    printf("La somme des %d premiers entiers est : %d\n", n, sum);
    return 0;
}
