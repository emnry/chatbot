# 🤖 Chatbot Interactif

Ce projet est un chatbot interactif permettant de répondre à des questions sur trois thématiques :

- Intelligence Artificielle (IA)
- Jeux Vidéo
- Green IT

## ⚙️ Fonctionnalités

L'utilisateur choisit un thème parmi les trois proposés.

Le programme boucle jusqu'à ce qu'une réponse valide soit fournie.

Le chatbot répond aux questions prédéfinies ou informe l'utilisateur en cas de saisie incorrecte.

Possibilité d'arrêter le programme en entrant "stop".

## 🏗️ Structure du Code

`main.c` : Point d'entrée du programme, gère le choix du thème et redirige l'utilisateur.

`chatbot.h` : Contient les déclarations des fonctions utilisées.

`reponse_IA()` : Répond aux questions liées à l'IA.

`reponse_JV()` : Répond aux questions liées aux jeux vidéo.

`reponse_GIT()` : Répond aux questions liées au Green IT.

`choix()` : Affiche le menu et récupère l'entrée de l'utilisateur.

`comparer_chaine()` : Fonction de comparaison de chaînes de caractères.

## 🖥️ Compilation et Exécution

Compiler le programme avec gcc :

```bash
gcc -o chatbot main.c chatbot.c -Wall
```
Exécuter le programme :
```bash
./chatbot
```
