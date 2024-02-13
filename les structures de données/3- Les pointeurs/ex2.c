
#include <stdio.h>
#include <stdlib.h>

// 1. Fonction pour allouer un vecteur et l'initialiser avec une valeur donnée
int *allouer_vecteur(int dimension, int val) {
    int *vecteur = (int *)malloc(dimension * sizeof(int));
    if (vecteur != NULL) {
        for (int i = 0; i < dimension; i++) {
            vecteur[i] = val;
        }
    }
    return vecteur;
}

// 2. Procédure pour afficher le contenu du vecteur
void afficher_vecteur(int *vecteur, int dimension) {
    for (int i = 0; i < dimension; i++) {
        printf("%d ", vecteur[i]);
    }
    printf("\n");
}

// 3. Fonction pour modifier une case du vecteur à l'indice donné
int *modifier_vecteur(int *vecteur, int indice, int nouvelle_val) {
    vecteur[indice] = nouvelle_val;
    return vecteur;
}

// 4. Fonction pour rechercher une valeur dans le vecteur
int rechercher_vecteur(int *vecteur, int dimension, int val) {
    for (int i = 0; i < dimension; i++) {
        if (vecteur[i] == val) {
            return i;
        }
    }
    return -1;
}

// 5. Fonction pour libérer la mémoire allouée pour le vecteur
int *liberer_vecteur(int *vecteur) {
    free(vecteur);
    return NULL;
}

int main() {
    int dimension, val;
    printf("Donner la dimension du vecteur : ");
    scanf("%d", &dimension);
    printf("Donner une valeur : ");
    scanf("%d", &val);
    
    // 1. Allouer le vecteur et l'initialiser
    int *vecteur = allouer_vecteur(dimension, val);
    
    // 2. Afficher le vecteur
    printf("Vecteur initialisé : ");
    afficher_vecteur(vecteur, dimension);
    
    // 3. Modifier une valeur dans le vecteur
    int indice, nouvelle_val;
    printf("Donner l'indice de la valeur que vous voulez modifier : ");
    scanf("%d", &indice);
    printf("Donner la nouvelle valeur : ");
    scanf("%d", &nouvelle_val);
    modifier_vecteur(vecteur, indice, nouvelle_val);
    
    // 2. Afficher le vecteur après modification
    printf("Vecteur après modification : ");
    afficher_vecteur(vecteur, dimension);
    
    // 4. Rechercher une valeur dans le vecteur
    int valeur_recherchee;
    printf("Donner la valeur à rechercher : ");
    scanf("%d", &valeur_recherchee);
    int indice_trouve = rechercher_vecteur(vecteur, dimension, valeur_recherchee);
    if (indice_trouve != -1) {
        printf("La valeur %d se trouve à la position %d\n", valeur_recherchee, indice_trouve);
    } else {
        printf("La valeur %d n'a pas été trouvée dans le vecteur\n", valeur_recherchee);
    }
    
    // 5. Libérer la mémoire allouée pour le vecteur
    vecteur = liberer_vecteur(vecteur);
    
    // Affichage du vecteur après désallocation
    printf("Affichage du vecteur après la désallocation de la mémoire : ");
    afficher_vecteur(vecteur, dimension);
    
    return 0;
}
