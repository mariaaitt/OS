#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "fonctions.h"


int main() {
     int choix;
    do {
        printf("\nMenu de test :\n");
        printf("1. Tester myFormat\n");
        printf("2. Tester myOpen\n");
        printf("3. Supprimer la partition\n");
        printf("4. Tester MyWrite\n");
        printf("5. Tester MyRead\n");
        printf("6. Tester MySeek\n");
        printf("7. Supprimer un fichier de la partition\n");
        printf("8. Afficher tous les fichiers de la partition\n");
        printf("0. Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                testMyFormat();
                break;
            case 2:
                testMyOpen();
                break;
            case 3:
                removePartition();
                break;
            case 4:
                testMyWrite();
                break;
            case 5:
                testMyRead();
                break;
            case 6 :
                testMySeek();

                break;
            case 7 :
                removeFileFromPartition();
                break;
            case 8 :
                afficherFichiers();
                break;
            case 0:
                printf("Programme terminé.\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir à nouveau.\n");
        }
    } while (choix != 0);
cleanupPartition();
    return 0;
}
