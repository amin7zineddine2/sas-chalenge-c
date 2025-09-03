#include <stdio.h>
#include <string.h>

int main() {

    char TAB_titre[13][30];
    char TAB_AT[13][30];
    float prix[13];
    int QTE[13];
    int CHEK ;
    int indice = 0;
    int choix;
    char c[30];
    char F;

    do {
        printf("\t\t1-----MENU-----\n");
        printf("\t 1. Ajouter un livre au stock\n");
        printf("\t 2. Afficher tous les livres disponibles\n");
        printf("\t 3. Rechercher un livre par titre\n");
        printf("\t 4. Mettre a jour la quantite d'un livre\n");
        printf("\t 5. Supprimer un livre du stock\n");
        printf("\t 6. Afficher le nombre total de livres en stock\n");
        printf("\t 7. stop\n\n\n");
        
        printf("choisi: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1:

                if (indice >= 13) {
                    printf("tableau est plien\n");
                    break;
                }
                                
                printf("donner le titre: ");
                scanf("%s", &TAB_titre[indice]);

                printf("donner le auteur: ");
                scanf("%s", &TAB_AT[indice]);

                printf("Prix du livre: ");
                scanf("%f", &prix[indice]);
                
                printf("Quantite en stock: ");
                scanf("%d", &QTE[indice]);
                
                indice++;

                break;
                
            case 2:
                if (indice == 0) {
                    printf("vide\n");
                    break;
                }

                printf("les livres existans\n");
                printf("+---------+---------+---------+---------+\n");

                printf("|  TITRE  |  AUTRR  |  PRIX   |   QTE   |\n");
                printf("+---------+---------+---------+---------+\n");


                for (int i = 0; i < indice; i++) {
                    printf("|  %s  |  %s  |   %0.2f  |    %d    |\n",TAB_titre[i], TAB_AT[i], prix[i],QTE[i]);
                printf("+---------+---------+---------+---------+\n");

                }
                break;
                
            case 3:
                if (indice == 0) {
                    printf("vide\n");
                    break;
                }
                printf("donner le titre: ");
                scanf("%s", &c);

                CHEK = 0;
                for (int i = 0; i < indice; i++) {
                    if (strcmp(c,TAB_titre[indice])==0) {
                        CHEK = 1;
                        printf("il est disponible");
                        break;
                    }
                }
                
                if (!CHEK) {
                    printf("nexist pas");
                }
                break;
            case 4:     
                 if (indice == 0) {
                    printf("vide\n");
                    break;
                }
                printf("donner le titre: ");
                scanf("%s", &c);

                CHEK = 0;
                    int i ;
                for ( i = 0; i < indice; i++)
                    if (strcmp(c,TAB_titre[indice])==0){
                        CHEK = 1;
                        // printf("il est disponible");
                        break;}
                if(CHEK){
                int Q;
                printf("vous etre suur !!!!  [Y/N]");
                scanf("%c", &F);
            if(F == 'Y' || F == 'y'){
                printf("Nouveau Quantite a ajouter: ");
                scanf("%d", &Q);
                QTE[i]=Q;
                      }
                        }
                break;
           

            case 5 :
                printf("donner le titre: ");
                scanf("%s", &c);
                getchar();
                printf("vous etre suur !!!!  [Y/N]");
                scanf("%c", &F);
            if(F == 'Y' || F == 'y'){


                for (i = 0; i < indice; i++)
                {
                    if (strcmp(TAB_titre[i], c) == 0)
                    {
                        for (int j = i; j < indice - 1; j++)
                        {
                            strcpy(TAB_titre[j], TAB_titre[j + 1]);
                            strcpy(TAB_AT[j], TAB_AT[j + 1]);
                            prix[j] = prix[j + 1];
                            QTE[j] = QTE[j + 1];
                        }

                        indice--;
                        break;
                    }
                }
            }
                break;

            case 6:

            int cpt = 0;
                for (i = 0; i < indice; i++) {
                    cpt += QTE[i];
                }

                break;

                case 7:
                printf("aurevoir");
                break;
                
            default:
                printf("errer");
        }
        
    } while(choix != 7);
    
    return 0;
}


