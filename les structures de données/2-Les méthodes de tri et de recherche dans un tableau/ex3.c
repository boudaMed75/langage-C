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
                int temp = T[j];
                T[j] = T[j + 1];
                T[j + 1] = temp;
            }
        }
        printf("Après l'itération %d (Tri à Bulles) : ", i + 1);
        affichage(T, n);
    }
}

void tri_insertion(int T[], int n) {
    for (int i = 1; i < n; i++) {
        int cle = T[i];
        int j = i - 1;

        while (j >= 0 && T[j] > cle) {
            T[j + 1] = T[j];
            j = j - 1;
        }
        T[j + 1] = cle;

        printf("Après l'itération %d (Tri par Insertion) : ", i);
        affichage(T, n);
    }
}

void echange(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int partition(int T[], int bas, int haut) {
    int pivot = T[haut];
    int i = (bas - 1);

    for (int j = bas; j <= haut - 1; j++) {
        if (T[j] < pivot) {
            i++;
            echange(&T[i], &T[j]);
        }
    }
    echange(&T[i + 1], &T[haut]);

    return (i + 1);
}

void tri_rapide(int T[], int bas, int haut) {
    if (bas < haut) {
        int pivot = partition(T, bas, haut);
        
        printf("Après l'itération (Tri Rapide) : ");
        affichage(T, haut + 1);

        tri_rapide(T, bas, pivot - 1);
        tri_rapide(T, pivot + 1, haut);
    }
}

int main() {
    int n;

    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int tableau[n];

    lecture(tableau, n);

    printf("\nTableau avant le tri : ");
    affichage(tableau, n);

    tri_bulles(tableau, n);
    
    // Remettre le tableau dans son état initial pour les autres tris
    lecture(tableau, n);

    tri_insertion(tableau, n);
    
    // Remettre le tableau dans son état initial pour le dernier tri
    lecture(tableau, n);
    
    tri_rapide(tableau, 0, n - 1);

    printf("\nTableau après tous les tris : ");
    affichage(tableau, n);

    return 0;
}

