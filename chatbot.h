#include <stdio.h>
/*affiche le message d'introducion qui n'est plus utiliser dans le programme final*/
void introduction()
{
    printf("Bonjour ! Je suis votre chatbot sur l'IA generative.\n Posez-moi des questions pour en savoir plus sur ce sujet fascinant\n");
}
/*Cette fontion permet de comparer 2 chaines de charactere en les traversant et comparant chaque élément 1 par 1*/
int comparer_chaine(char ch1[], char ch2[]) {
    for (int i = 0; ch1[i] != '\0'; i++) {
        if (ch1[i] != ch2[i]) {
            return 0;
        }
    }
    return 1;
}


/* cette fonction prend une chaine de charactere question saisie au clavier
 * et la compare a un jeu de donnée de question sur le theme de l'IA
 * si la question saisie est correct elle renvoie la réponse associé a la question
 * elle se réptète en boucle jusqu'a ce que l'utilisateur saisisse stop*/
void reponse_IA() {

    char ch1[100];
    char c = getchar();// vide le buffer
    do{
        printf("\nsaisir une question\n");
        gets(ch1);

        if (comparer_chaine("Qu'est-ce que l'intelligence artificielle (IA) ?",ch1) == 1){
            printf("L'intelligence artificielle designe la capacite d'un systeme informatique a effectuer des taches qui necessitent generalement l'intelligence humaine, telles que la reconnaissance vocale, la prise de decision, la comprehension du langage naturel, ou encore la vision par ordinateur.");
        }else if (comparer_chaine("Quelle est la difference entre l'IA forte et l'IA faible ?",ch1) == 1) {
            printf("L'IA faible, ou IA etroite, est concue pour accomplir une tache specifique, comme la reconnaissance faciale ou la recommandation de contenu. L'IA forte, quant a elle, designe une intelligence capable de raisonner, comprendre, et apprendre de maniere similaire a un humain, ce qui n'existe pas encore dans la realite.");
        }else if (comparer_chaine("Qu'est-ce que l'apprentissage automatique (Machine Learning) ?",ch1)==1){
            printf("L'apprentissage automatique est une sous-discipline de l'IA qui permet a un systeme d'apprendre a partir de donnees sans etre explicitement programme. Les modeles d'apprentissage automatique identifient des patterns dans les donnees et font des predictions ou prennent des decisions basees sur ces informations.");
        }else if (comparer_chaine("Quelle est la différence entre l'apprentissage supervisé et l'apprentissage non supervise ?",ch1)==1) {
            printf("Dans l'apprentissage supervise, le modele est entraine avec des donnees etiquetees (c'est-a-dire des exemples avec des reponses connues). Dans l'apprentissage non supervise, le modele doit identifier des structures ou des patterns dans des donnees non etiquetees, sans informations prealables sur les resultats attendus.");
        }else if(comparer_chaine("stop",ch1)==1) {
            printf("Bonne journee a vous");
        }else {
            printf("La question est fausse! ");
        }
    }while (comparer_chaine(ch1,"stop")!= 1);

}
/* cette fonction prend une chaine de charactere question saisie au clavier
 * et la compare a un jeu de donnée de question sur le theme des jeux video
 * si la question saisie est correct elle renvoie la réponse associé a la question
 * elle se réptète en boucle jusqu'a ce que l'utilisateur saisisse stop*/
void reponse_JV() {

    char ch1[100];
    char c = getchar();// vider le buffer
    do{
        printf("\nsaisir une question\n");
        gets(ch1);

        if (comparer_chaine("Qu'est-ce qu'un jeu video ?",ch1) == 1){
            printf("Un jeu video est un jeu interactif qui utilise une interface electronique pour que les joueurs puissent interagir avec un environnement virtuel sur un ecran. Cela peut inclure des jeux sur consoles, PC, ou appareils mobiles.");
        }else if (comparer_chaine("Quelle est la difference entre un jeu solo et un jeu multijoueur ?",ch1) == 1) {
            printf("Un jeu solo est un jeu auquel un seul joueur participe, tandis qu'un jeu multijoueur permet a plusieurs joueurs de jouer ensemble, soit localement, soit en ligne.");
        }else if (comparer_chaine("Qu'est-ce qu'un RPG (Role Playing Game) ?",ch1)==1){
            printf("Un RPG, ou jeu de role, est un genre de jeu video dans lequel les joueurs assument le role d'un personnage et participent a une aventure narrative. Les joueurs peuvent souvent personnaliser leur personnage et prendre des decisions qui influencent l'histoire.");
        }else if(comparer_chaine("stop",ch1) == 1) {
            printf("Bonne journee a vous");
        }else {
            printf("La question est fausse! ");
        }
    }while (comparer_chaine(ch1,"stop")!= 1);

}
/* cette fonction prend une chaine de charactere question saisie au clavier
 * et la compare a un jeu de donnée de question sur le theme du green IT
 * si la question saisie est correct elle renvoie la réponse associé a la question
 * elle se réptète en boucle jusqu'a ce que l'utilisateur saisisse stop*/

void reponse_GIT() {

    char ch1[100];
    char c = getchar();//permet de vidée le buffer
    do{
        printf("\nsaisir une question\n");
        gets(ch1);

        if (comparer_chaine("Qu'est-ce que le Green IT ?",ch1) == 1){
            printf("Le Green IT fait reference a l'ensemble des pratiques et des technologies qui visent a reduire l'impact environnemental des technologies de l'information et de la communication (TIC). Cela inclut la reduction de la consommation d'energie, l'optimisation des ressources, et la gestion des dechets electroniques.");
        }else if (comparer_chaine("Question : Pourquoi le Green IT est-il important ?",ch1) == 1) {
            printf(" Le Green IT est important car les technologies de l'information consomment une grande quantite d'energie et generent des dechets electroniques. En optimisant leur utilisation, le Green IT contribue a la lutte contre le changement climatique, a la reduction de l'empreinte carbone, et a la gestion durable des ressources naturelles.");
        }else if (comparer_chaine("Quelles sont les principales pratiques du Green IT ?",ch1)==1){
            printf("Les principales pratiques du Green IT incluent l'optimisation de la consommation energetique des appareils, le recyclage des equipements informatiques, la virtualisation des serveurs pour reduire la consommation de ressources, et la mise en place de centres de donnees plus efficaces.");
        }else if(comparer_chaine("stop",ch1) == 1) {
            printf("Bonne journee a vous");
        }else {
            printf("La question est fausse! ");
        }
    }while (comparer_chaine(ch1,"stop")!= 1);

}
/*cette fonction permet affiche le menu et demande a l'utilisateur son choix sous forme d'entier*/

int choix() {
    int choix;
    printf("Bienvenue dans le programme ChatBot\nVeuillez choisir un theme : \n1. IA generative ?\n2. Jeux Video ?\n3. Green IT ?\nEntrez votre choix (1, 2 ou 3) : ");
    scanf("%d",&choix);
    return choix;
}



