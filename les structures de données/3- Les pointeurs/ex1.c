#include <stdio.h>

#define SIZE 5 // Taille du tableau

// Fonction pour inverser les éléments du tableau
void inverserTableau(int *debut, int *fin) {
    while (debut < fin) {
        int temp = *debut;
        *debut = *fin;
        *fin = temp;
        debut++;
        fin--;
    }
}

int main() {
    int tableau[SIZE];
    
    // Remplissage du tableau
    printf("Entrez %d entiers :\n", SIZE);
    for (int i = 0; i < SIZE; i++) {
        printf("Élément %d : ", i+1);
        scanf("%d", &tableau[i]);
    }
    
    // Affichage du tableau initial
    printf("\nTableau initial :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    // Inversion des éléments du tableau en utilisant deux pointeurs
    int *debut = tableau;
    int *fin = tableau + SIZE - 1;
    inverserTableau(debut, fin);
    
    // Affichage du tableau inversé
    printf("\nTableau inversé :\n");
    for (int i = 0; i < SIZE; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    return 0;
}
