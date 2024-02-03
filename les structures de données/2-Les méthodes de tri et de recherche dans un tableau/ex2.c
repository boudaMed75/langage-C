
#include <stdio.h>

void lecture(int T[], int n) {
    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &T[i]);
    }
}

void affichage(int T[], int n) {
    printf("Tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", T[i]);
    }
    printf("\n");
}

void tri_bulles(int T[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (T[j] > T[j + 1]) {
                // Échanger les éléments si ils sont dans le mauvais ordre
                int temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }

        // Afficher l'état du tableau après chaque itération
        printf("Après l'itération %d : ", i + 1);
        affichage(T, n);
    }
}

int main() {
    int n;

    // Demander la taille du tableau à l'utilisateur
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    // Appeler la procédure de lecture
    lecture(tableau, n);

    // Afficher le tableau avant le tri
    printf("\nTableau avant le tri : ");
    affichage(tableau, n);

    // Appeler la procédure de tri à bulles
    tri_bulles(tableau, n);

    // Afficher le tableau après le tri
    printf("\nTableau après le tri : ");
    affichage(tableau, n);

    return 0;
}
