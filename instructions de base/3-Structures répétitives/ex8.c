
#include <stdio.h>

int rechercheLineaire(int tableau[], int taille, int elementRecherche) {
    for (int i = 0; i < taille; i++) {
        if (tableau[i] == elementRecherche) {
            return i;  // L'élément a été trouvé, retourne l'index
        }
    }
    return -1;  // L'élément n'a pas été trouvé, retourne -1
}

int main() {
    int tableau[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int elementRecherche = 6;

    int resultat = rechercheLineaire(tableau, taille, elementRecherche);

    if (resultat != -1) {
        printf("L'element %d a ete trouve a l'index %d.\n", elementRecherche, resultat);
    } else {
        printf("L'element %d n'a pas ete trouve dans le tableau.\n", elementRecherche);
    }

    return 0;
}
