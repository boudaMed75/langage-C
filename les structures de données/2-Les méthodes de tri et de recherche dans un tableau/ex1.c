#include <stdio.h>

#define MAX 100

int posMin(int tab[], int courant, int taille) {
    int pos_min = courant;
    
    for (int i = courant + 1; i < taille; i++) {
        if (tab[i] < tab[pos_min]) {
            pos_min = i;
        }
    }
    
    return pos_min;
}

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void triParSelection(int tab[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        int min = posMin(tab, i, taille);
        swap(&tab[i], &tab[min]);
    }
}

int main() {
    int tableau[MAX];
    int taille;

    // Demander la taille du tableau à l'utilisateur
    printf("Entrez la taille du tableau (max %d) : ", MAX);
    scanf("%d", &taille);

    // Lire les valeurs du tableau
    printf("Entrez les valeurs du tableau :\n");
    for (int i = 0; i < taille; i++) {
        printf("Element %d : ", i + 1);
        scanf("%d", &tableau[i]);
    }

    // Trier le tableau par sélection
    triParSelection(tableau, taille);

    // Afficher le tableau trié
    printf("\nTableau trié :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
