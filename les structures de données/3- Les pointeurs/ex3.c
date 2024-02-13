
#include <stdio.h>
#include <stdlib.h>

// 1. Fonction pour allouer et initialiser une matrice
int **alloue_matrice(int lignes, int colonnes, int val) {
    int **matrice = (int **)malloc(lignes * sizeof(int *));
    for (int i = 0; i < lignes; i++) {
        matrice[i] = (int *)malloc(colonnes * sizeof(int));
        for (int j = 0; j < colonnes; j++) {
            matrice[i][j] = val;
        }
    }
    return matrice;
}

// 2. Procédure pour afficher la matrice
void affiche_matrice(int **matrice, int lignes, int colonnes) {
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }
}

// 3. Fonction pour modifier une case de la matrice
int **modifier_matrice(int **matrice, int lignes, int colonnes, int L, int C, int nouvelle_val) {
    matrice[L][C] = nouvelle_val;
    return matrice;
}

// 4. Procédure pour rechercher une valeur dans la matrice
void rechercher_matrice(int **matrice, int lignes, int colonnes, int X, int *L, int *C) {
    *L = -1;
    *C = -1;
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            if (matrice[i][j] == X) {
                *L = i;
                *C = j;
                return;
            }
        }
    }
}

// 5. Procédure pour libérer la mémoire allouée pour la matrice
void liberer_matrice(int **matrice, int lignes) {
    for (int i = 0; i < lignes; i++) {
        free(matrice[i]);
    }
    free(matrice);
}

int main() {
    int lignes, colonnes, val;
    printf("Donner les dimensions de la matrice\n");
    printf("Donner le nombre de lignes : ");
    scanf("%d", &lignes);
    printf("Donner le nombre de colonnes : ");
    scanf("%d", &colonnes);
    printf("Donner une valeur : ");
    scanf("%d", &val);

    // 1. Allouer et initialiser la matrice
    int **matrice = alloue_matrice(lignes, colonnes, val);

    // 2. Afficher la matrice
    printf("\nMatrice initialisée :\n");
    affiche_matrice(matrice, lignes, colonnes);

    // 3. Modifier une valeur dans la matrice
    int L, C, nouvelle_val;
    printf("\nDonner les coordonnées de la valeur à modifier : ");
    scanf("%d %d", &L, &C);
    printf("Donner la nouvelle valeur : ");
    scanf("%d", &nouvelle_val);
    modifier_matrice(matrice, lignes, colonnes, L, C, nouvelle_val);

    // 2. Afficher la matrice après modification
    printf("\nMatrice après modification :\n");
    affiche_matrice(matrice, lignes, colonnes);

    // 4. Rechercher une valeur dans la matrice
    int X;
    printf("\nDonner la valeur à rechercher : ");
    scanf("%d", &X);
    rechercher_matrice(matrice, lignes, colonnes, X, &L, &C);
    if (L != -1 && C != -1) {
        printf("La valeur %d a les coordonnées %d %d\n", X, L, C);
    } else {
        printf("La valeur %d n'a pas été trouvée dans la matrice\n", X);
    }

    // 5. Libérer la mémoire allouée pour la matrice
    liberer_matrice(matrice, lignes);

    // Affichage de la matrice après désallocation
    printf("\nLa matrice après libération de la mémoire :\n");
    for (int i = 0; i < lignes; i++) {
        for (int j = 0; j < colonnes; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}
