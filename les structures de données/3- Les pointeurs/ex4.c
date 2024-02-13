
#include <stdio.h>
#include <stdlib.h>

// 1. Fonction pour allouer la mémoire pour un triangle de Pascal de dimension n
int **alloue_triangle_pascal(int dimension) {
    int **triangle = (int **)malloc(dimension * sizeof(int *));
    for (int i = 0; i < dimension; i++) {
        triangle[i] = (int *)malloc((i + 1) * sizeof(int));
    }
    return triangle;
}

// 2. Fonction pour remplir le triangle de Pascal
int **remplit_triangle_pascal(int dimension) {
    int **triangle = alloue_triangle_pascal(dimension);
    for (int i = 0; i < dimension; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1;
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
        }
    }
    return triangle;
}

// 3. Procédure pour afficher un vecteur
void affiche_vecteur(int *vecteur, int dimension) {
    for (int i = 0; i < dimension; i++) {
        printf("%d ", vecteur[i]);
    }
    printf("\n");
}

// 4. Procédure pour afficher le triangle de Pascal
void affiche_triangle_pascal(int **triangle, int dimension) {
    for (int i = 0; i < dimension; i++) {
        affiche_vecteur(triangle[i], i + 1);
    }
}

int main() {
    int n;
    printf("Donner la taille du triangle de Pascal : ");
    scanf("%d", &n);

    // 2. Remplir le triangle de Pascal
    int **triangle = remplit_triangle_pascal(n);

    // 4. Afficher le triangle de Pascal
    printf("\nTriangle de Pascal de taille %d :\n", n);
    affiche_triangle_pascal(triangle, n);

    // Libérer la mémoire allouée pour le triangle de Pascal
    for (int i = 0; i < n; i++) {
        free(triangle[i]);
    }
    free(triangle);

    return 0;
}
