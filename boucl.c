#include <stdio.h>

// chaleng 1
void tabldemultuplication(int a) {
    printf("Table de multiplication de %d :\n", a);
    for (int i = 1; i <= 10; i++) {
        printf("%d * %d = %d", a, i, a * i);
        if (i % 2 == 0) {
            printf("\n");
        } else {
            printf("\t");
        }
    }
}

// chaleng 2
long factorielle(int n) {
    long res = 1;
    for (int i = 1; i <= n; i++) {
        res *= i;
    }
    return res;
}

// chaleng 3
int sommeNombres(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s += i;
    }
    return s;
}

// chaleng 4
void nombresImpairs(int n) {
    int cpt = 0;
    int a = 1;
    while (cpt < n) {
        printf("%d", a);
        a += 2;
        cpt++;
        if (cpt < n) printf(", ");
    }
    printf(".\n");
}

// chaleng 5
long puissance(int a, int b) {
    long res = 1;
    for (int i = 0; i < b; i++) {
        res *= a;
    }
    return res;
}

// chaleng 6
void nombresPairs(int n) {
    int s=2;
    for (int i = 1; i <= n; i++) {
        printf("%d", s);
        s+=2;
        if (i < n) printf(", ");
    }
    printf(".\n");
}

// chaleng 7
int inversionEntier(int n) {
    int b , a = 0;

    while (n > 0) {
        // b = ( n - (n % 10));
        b = n % 10;
        n /= 10;
        a = a*10 + b;
    }
    return a;
}

// chaleng 8
void fibonacci(int n) {

    if (n >= 1) printf("0");
    if (n >= 2) printf(", 1");
    
    long a = 0, b = 1, c;
    for (int i = 3; i <= n; i++) {
        c = a + b;
        printf(", %ld", c);
        a = b;
        b = c;
    }
}

// chaleng 9
int compterChiffres(int n) {
    int cpt = 0;
    if (n == 0) return 1;
    while (n != 0) {
        cpt++;
        n /= 10;
    }
    return cpt;
}

// chaleng 10
int sommeEntiers(int n) {
    return sommeNombres(n);
}

void main() {
    int x, y, a;
    
    printf("---------MENU BAR-------\n");
    printf("1-Table de multiplication\n");
    printf("2-Factorielle d'un nombre\n");
    printf("3-Somme des N nombres\n");
    printf("4-N premiers nombres impairs\n");
    printf("5-Calcul de puissance\n");
    printf("6-N premiers nombres pairs\n");
    printf("7-Inversion d'un entier\n");
    printf("8-Suite de Fibonacci\n");
    printf("9-Compteur de chiffres\n");
    printf("10-Somme des N entiers\n");
    printf("0-Quitter\n");
    printf("Choix : ");
    scanf("%d", &a);
    
    switch(a) {
        case 1:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            tabldemultuplication(x);
            break;
            
        case 2:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            printf("%d! = %d", x, factorielle(x));
            break;
            
        case 3:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            printf("les some des %d premiers nombres = %d", x, sommeNombres(x));
            break;
            
        case 4:
            printf("entrez un nombr: ");
            scanf("%d", &x);
            nombresImpairs(x);
            break;
            
        case 5:
            printf("entrez nombr: ");
            scanf("%d", &x);
            printf("Entrez puissance: ");
            scanf("%d", &y);
            printf("%d^%d = %d\n", x, y, puissance(x, y));
            break;
            
        case 6:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            nombresPairs(x);
            break;
            
        case 7:
            printf("entrez un nombree : ");
            scanf("%d", &x);
            printf("linverse de %d = %d\n", x, inversionEntier(x));
            break;
            
        case 8:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            fibonacci(x);
            break;
            
        case 9:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            printf("Nombre de chiffres de %d = %d\n", x, compterChiffres(x));
            break;
            
        case 10:
            printf("entrez un nombre : ");
            scanf("%d", &x);
            printf("Somme des %d premiers entiers = %d\n", x, sommeEntiers(x));
            break;
            
        case 0:
            printf("fin\n");
            break;
            
        default:
            printf("errot");
    }

}