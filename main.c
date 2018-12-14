#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include "contenu.h"
#include  <stdbool.h>

char name_player[20];
void main()
{

    printf("****************\n\b***************\n\b**************LA FORET NOIRE \n");
    StartMenu();
}

void StartMenu()
{
    PrintMenu();
    int choice = getValueFromUser();
    if (choice == 0 )
        LaunchGame();
    else if( choice==1 )
        LancerleJeu();
    else if( choice==2 )
        load_game();
    else if (choice==3)
        PrintApropos();
    else if (choice==4)
        Quit ();

}

void PrintMenu ()
{
        printf("\n\n\n\nMAIN MENU :\n");
        printf("1. Create New Game\n");
        printf("2. Load Saved Game\n");
        printf("3. About\n");
        printf("4. Exit\n");
}
void getValueFromUser(int max)
{
    int select;
    scanf("%d",&select);
    max = select;
    void xp_joeur();


}

void LaunchGame()
{
    StartMenu();
}

void PrintApropos(){
    printf(" Done by Gorkem Taner Acikgoz\nVous vous reveillez au milieu d une foret avec un sac ne contenant qu un seul objet : un couteau.\n");
    printf("Vous devrez gagner de l XP et recuperer de nouvelles armes pour devenir plus fort et trouver le boss pour\n sortir de la foret.");
    StartMenu(); // returner StartMenu
}

int Quit(){
    int  choix;
    printf("voulez vous vraiment quitter le jeu?");
    scanf("%d",&choix);
    if (choix == 0)
        StartMenu();
    else if(choix = 1)
        printf("Au Revoir");
}

void LancerleJeu(){
int avance; //  location du joueur
int hpviedujoueur;
printf("Veuillez entrer votre nom : \n");
scanf("%s",&name_player);
printf("Bienvenue au jeu %s",name_player);
Sleep(1000);
while(hpviedujoueur>0)

    {

int rs = rand();
ask_to_player();
if (rs % 2 == 0)
{
afficher_monstre();
}
else if (rs % 2 == 1)
{
  objet();
}
else
 {
      ask_to_player();
 }
}


}














    //void change position
    //location
    //monster attack : startgame.c,game.c
    //power
    //xp

void load_game()
{
printf("C'est la version beta du jeu.Je suis desole,ce bouton ne fonction pas pour le moment.");
StartMenu();
}
