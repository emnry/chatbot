#include <stdio.h>
#include "chatbot.h"



/*le programme permet de renvoyer l'utilisateur vers la catégorie quil a choisi dans la fonction choix
 *et en cas de choix erroné le programme se relance et previens l'utilisateur d'une erreur de saisie*/
int main(void)

{
    while (1) {
        switch (choix()) {
            case 1: reponse_IA(); break;
            case 2: reponse_JV(); break;
            case 3: reponse_GIT(); break;
            default: {
                printf("erreur de saisis veuillez ressaisir un chiffre entre 1 et 3\n");
                break;

            }
        }
    }


    return 0;
}
