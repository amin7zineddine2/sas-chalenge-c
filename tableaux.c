#include <stdio.h>
#include <stdlib.h>

void afficher(int tab[], int n) {
    printf("Le tableau est : ");
    for(int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
}

int *saisi(int n) {
    int *tab = (int *)malloc(n * sizeof(int));

    for(int i = 0; i < n; i++) {
        scanf("%d", &tab[i]);
    }
    return tab;
}






// Challenge 1
void Initiali_Aff() {
    int tab[] = {1, 2, 3, 4, 5};
    int n = 5;
    afficher(tab, n);
}

// Challenge 2
void Saisie_Aff() {
    int n;
    printf("La taille : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    
    afficher(tab, n);
    free(tab);
}

// Challenge 3
void Somme_Elements() {
    int n;
    printf("Le nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int * tab = saisi(n);
    int s = 0;
    
    for(int i = 0; i < n; i++) {
        s += tab[i];
    }
    
    printf("Somme totale : %d", s);
    free(tab);
}

// Challenge 4
void Trouver_Max() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    int max = tab[0];
    
    for(int i = 1; i < n; i++) {
        if(tab[i] > max) {
            max = tab[i];
        }
    }
    
    printf("Max est : %d", max);
    free(tab);
}

// Challenge 5
void Trouver_Min() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    int min = tab[0];
    
    for(int i = 1; i < n; i++) {
        if(tab[i] < min) {
            min = tab[i];
        }
    }
    
    printf("Min est : %d", min);
    free(tab);
}

// Challenge 6
void Multiplication_Elements() {
    int n, facteur;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    
    printf("Facteur de multiplication : ");
    scanf("%d", &facteur);
    
    printf("Tableau après multiplication : ");
    for(int i = 0; i < n; i++) {
        tab[i] *= facteur;
        printf("%d ", tab[i]);
    }
    free(tab);
}

// Challenge 7
void Tableau_Croissant() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    
    // Tri par sélection
    for(int i = 0; i < n-1; i++) {
        for(int j = i+1; j < n; j++) {
            if(tab[j] < tab[i]) {
                int temp = tab[i];
                tab[i] = tab[j];
                tab[j] = temp;
            }
        }
    }
    
    printf("Tableau trié : ");
    afficher(tab, n);
    free(tab);
}

// Challenge 8
void Copie_Tableau() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    int *copie = (int *)malloc(n * sizeof(int));
    
    for(int i = 0; i < n; i++) {
        copie[i] = tab[i];
    }
    
    printf("Tableau tab : ");
    afficher(tab, n);

    printf("Tableau copie : ");
    afficher(copie, n);
    
    free(tab);
    free(copie);
}

// Challenge 9
void Inversion_Tableau() {
    int n;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    
    printf("Tableau original : ");
    afficher(tab, n);
    
    for(int i = 0; i < n/2; i++) {
        int temp = tab[i];
        tab[i] = tab[n-1-i];
        tab[n-1-i] = temp;
    }
    
    printf("Tableau inversé : ");
    afficher(tab, n);
    free(tab);
}

// Challenge 10
void Recherche_Element() {
    int n, A, B = 0;
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    
    printf("lelement a trouver : ");
    scanf("%d", &A);
    
    for(int i = 0; i < n; i++) {
        if(tab[i] == A) {
            B = 1;
            break;
        }
    }
    
    if(B) {
        printf("est trouver");
    } else {
        printf("nexist pas");
    }
    free(tab);
}

// Challenge 11
void Remplacer_Element() {
    int n, a, b;
    
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les nombres : ");
    int *tab = saisi(n);
    
    printf("Tableau original : ");
    afficher(tab, n);
    
    printf("Valeur a remplacer : ");
    scanf("%d", &a);
    printf("Nouvelle valeur : ");
    scanf("%d", &b);
    
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(tab[i] == a) {
            tab[i] = b;
            count++;
        }
    }
    
    printf("Tableau modifie : ");
    afficher(tab, n);
    free(tab);
}
// Challenge 12
void Afficher_Pairs() {
    int n;
    
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les %d nombres : ", n);
    int *tab = saisi(n);
    
    printf("les elements pairs : ");
    int count_pairs = 0;
    for(int i = 0; i < n; i++) {
        if(tab[i] % 2 == 0) {
            printf("%d ", tab[i]);
            count_pairs++;
        }
    }
    
    free(tab);
}

// Challenge 13
void Afficher_Impairs() {
    int n;
    
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les %d nombres : ", n);
    int *tab = saisi(n);
    
    printf("Elements impairs : ");
    int count_impairs = 0;
    for(int i = 0; i < n; i++) {
        if(tab[i] % 2 != 0) {
            printf("%d ", tab[i]);
            count_impairs++;
        }
    }

    free(tab);
}

// Challenge 14
void Calculer_Moyenne() {
    int n;
    
    printf("Nombre d'elements : ");
    scanf("%d", &n);
    
    printf("Donnez les %d nombres : ", n);
    int *tab = saisi(n);
    
    int somme = 0;
    for(int i = 0; i < n; i++) {
        somme += tab[i];
    }
    
    float moyenne = (float)somme / n;
    printf("Moyenne : %.2f", moyenne);
    
    free(tab);
}

int main() {
    // Initiali_Aff();
    // Saisie_Aff();
    // Somme_Elements();
    // Trouver_Max();
    // Trouver_Min();
    // Multiplication_Elements();
    // Tableau_Croissant();
    // Copie_Tableau();
    // Inversion_Tableau();
    // Recherche_Element();
    // Afficher_Pairs();
    // Afficher_Pairs();
    // Afficher_Impairs();
    // Remplacer_Element();
    // Calculer_Moyenne() ;
    
    return 0;
}