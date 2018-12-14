#include <stdlib.h>
#include <stdio.h>
#include <windows.h>


//les var globals
int avance; // location du joueur
int hpviedujoueur = 10000;
int pvrjoueur = 100;
int pvr_vampire = 300;
int hp_viedevampire = 150;
int niveaudevampire = 3; // niveau de vampire est difficile
int pvr_troll = 150;
int hp_viedetroll = 200;
int niveaudetroll = 2; // niveau de troll est moyenne
int pvr_espirit = 100;
int hp_viedespirit= 50;
int niveaudespirit = 1; // niveau d'espirit est facil
int rs;
int character;
int xp;
int couteau = 1;
int epee = 0;
int ciseau = 0;
int typearme;
int dommage_couteau = 300;
int dommage_epee = 230;
int dommage_ciseau = 120;




int ask_to_player(){
if(hp_viedevampire == 0)
        {
         hp_viedevampire += 450;
        }
else if(hp_viedetroll == 0)
        {
         hp_viedetroll += 350;
        }
else  if(hp_viedespirit == 0)
        {
        hp_viedespirit == 200;
        }

rs = rand(); // rs = random selection
rs++;
printf("\n\nVoulez vous aller en quel direction? \n");
printf("1)Aller a l'est\n");
printf("2)Aller a l'ouest\n");
printf("3)Aller au nord\n");
printf("4)Aller au sud\n");
int selection;
scanf("%d",&selection);
if (selection == 1 )
{
   printf("you move deaper into the forest\n") ;
   avance++;
   printf("avance : %d \n",avance);

}
else if (selection == 2 )
{
    printf("you move deaper into the forest\n") ;
    avance++;
    printf("avance : %d \n",avance);

}
else if (selection == 3)
{
    printf("you move deaper into the forest\n") ;
    avance++;
    printf("avance : %d \n",avance);

}
else if (selection == 4)
{
    printf("you move deaper into the forest\n") ;
    avance--;
    printf("avance : %d \n",avance);
}
else
{
    printf("invalide reponse");
    ask_to_player();
}
if(avance == 200)
{
     printf("Lieu : La Foret Noire \n");
}
if(avance == 400)
{
     printf("Lieu : Region Des Espirits \n");

}
if(avance == 600)
{
     printf("Lieu : Region Des Trolls  \n");

}
if(avance == 800)
{
    printf("Lieu : Region Des Vampires \n");
}
if(avance >= 1000)
{
  boss();
}





}

void afficher_monstre(rs)
   {

if(hp_viedevampire == 0)
        {
         hp_viedevampire += 450;
        }
else if(hp_viedetroll == 0)
        {
         hp_viedetroll += 350;
        }
else  if(hp_viedespirit == 0)
        {
        hp_viedespirit == 200;
        }
    if(rs % 3 == 0)
    {
        if(hp_viedevampire == 0)
        {
         hp_viedevampire += 450;
        }
        printf("\nyou are attacked!");
        printf("\nvampire");
        character = 1;
        StartBattle();
    }
     else if(rs % 3  == 1)
        {
        if(hp_viedetroll == 0)
        {
         hp_viedetroll += 350;
        }
        printf("\nyou are attacked!\n");
        printf("\ntroll");
        character = 2;
        StartBattle();
        }
     else if(rs % 3 == 2)
        {
        if(hp_viedespirit == 0)
        {
        hp_viedespirit == 200;
        }
        printf("\nyou are attacked!\n");
        printf("espirit");
        character=3;
        StartBattle();
        }
    else
    {
    ask_to_player();
    }
}
 void objet(rs)
 {
     rs++;
         if(rs % 3 == 0)
         {
        couteau++;
        printf("\n Vous avez trouve un couteau");
        ask_to_player();
         }
       else if(rs % 3  == 1)
        {
        epee++;
        printf("\n Vous avez trouve un epee");
        ask_to_player();
        }
       else if(rs % 3 == 2)
        {
        ciseau++;
        printf("\n Vous avez trouve un ciseau");
        ask_to_player();
        }
     else
     {
       ask_to_player();
     }
    }



void  printInfoBattle(rs)
{


if(character == 1)
{
printf("\nniveau du monstre : %d \n",niveaudevampire);
printf(" hp enemy : %d \n",hp_viedevampire);
printf(" power enemy : %d",pvr_vampire);


}
if(character == 2)
{
printf("\nniveau du monstre : %d\n",niveaudetroll);
printf(" hp enemy : %d\n",hp_viedetroll);
printf(" power enemy : %d \n",pvr_troll);
}
if(character == 3)
{

printf("\nniveau du monstre : %d\n",niveaudespirit);
printf(" hp enemy : %d\n",hp_viedespirit);
printf(" power enemy : %d\n",pvr_espirit);

}
printf("\nplayer");
printf("\n hp : %d \n",hpviedujoueur);
printf("\n power : %d \n",pvrjoueur);
}
void  PrintMenuBattle(x)
{
    if(hpviedujoueur == 0)
    {
        gameover();
    }
    printf("Choisisez comment vous voulez l'attaquer\n");
    printf("Entrer l'option de votre choix\n");
    printf("1 . Attaquer\n");
    printf("2 . Fuir \n");
    printf("3 . Utiliser un objet de l'inventaire \n");
    int choice = getValueFromUser();
    printf("\n");
    if (choice == 1)
    {
    if(character == 1)
    {
        hp_viedevampire -= 25;
        printf("\Dommage : 25 \n");
        printf(" hp enemy : %d \n",hp_viedevampire);
        printf(" power enemy : %d",pvr_vampire);
        if(hp_viedevampire > 0)
        {
        MonsterAttack();
        }
        else
        {
          xp += 300;
          printf("Monstre est mort.Bravo vous avez gagné 300 xp \n");
          printf("xp : %d",xp);
          printf("\ntapez une valeur decimale a continuer\n");
          hp_viedevampire = 500;
        }



    }
    if(character == 2)
    {
        hp_viedetroll -= 25;
        printf("\nniveau du monstre : %d\n",niveaudetroll);
        printf(" hp enemy : %d\n",hp_viedetroll);
        printf(" power enemy : %d \n",pvr_troll);
        if(hp_viedetroll > 0)
        {
        MonsterAttack();
        }
        else
        {
          xp += 200;
          printf("\nMonstre est mort.Bravo vous avez gagne 200 xp\n");
          printf("xp : %d",xp);
          printf("\ntapez une valeur decimale a continuer\n");
          hp_viedetroll = 450;
        }
    }
    if(character == 3)
    {
        hp_viedespirit -= 25;
        printf("\nniveau du monstre : %d\n",niveaudespirit);
        printf(" hp enemy : %d\n",hp_viedespirit);
        printf(" power enemy : %d \n",pvr_espirit);
        if(hp_viedespirit > 0)
        {
        MonsterAttack();
        }
        else
        {
          xp += 50;
          printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
          printf("xp : %d",xp);
          printf("\ntapez une valeur decimale a continuer\n");
          hp_viedespirit = 400;
        }
    }
  }
    if(choice == 2) // Si,vous avez séléctionné l'option fuir
    {
    printf("\nVous n'avez gagne aucune xp.\n");
    avance += 100;
    printf("avance : %d",avance);
    ask_to_player();
    }
    if(choice == 3)
    {
        Invantaire();



    }
}


void Attack(){

PrintMenuBattle();
}

void Invantaire()
{
    Sleep(1000); // délais 10000 ms
    int  faire;
    printf("\nxp : %d",xp);
    printf("\n 1)couteau : %d",couteau);
    printf("\n 2)epee: %d",epee);
    printf("\n 3)ciseau   : %d \n",ciseau);
    scanf("%d",&faire);
{
    if(faire == 1)
    {
      if(couteau > 0)
    {
      xp -= 1000;
      if(xp <= 0)
        {
            printf("attendez une minute");
            Sleep(1000);
            for(;xp < 10000;xp++)
            {

            }
            printf("xp : %d",xp);
        }
      couteau--;
      typearme=1;
      attaque_speciale();



    }
    else
    {
        printf("Desole,il n'y pas aucun couteau.");
        PrintMenuBattle();

    }
    }

    if(faire == 2)
    {
      if(epee > 0)
    {
      xp -= 500;
      if(xp <= 0)
        {
            printf("attendez une minute");
            Sleep(1000);
            for(;xp < 10000;xp++)
            {

            }
            printf("xp : %d",xp);
        }
      epee--;
      typearme=2;
      attaque_speciale();
    }
    else
    {
        printf("Desole,il n'y pas aucun epee.");
        PrintMenuBattle();
    }
    }

    else if(faire == 3)
    {
    if(ciseau > 0)
    {
      xp -= 200;
       if(xp <= 0)
        {
            printf("attendez une minute");
            Sleep(1000);
            for(;xp < 10000;xp++)
            {

            }
            printf("xp : %d",xp);
        }
      ciseau--;
      typearme=3;
      attaque_speciale();
    }
    else
    {
        printf("Desole,il n'y pas aucun couteau.");
        PrintMenuBattle();

    }
    }

}
}
void attaque_speciale()
{
     if(typearme = 1 && character == 1) // si joueur a été attaqué par vampire,et joueur obtiens couteau
        {
            hp_viedevampire -= dommage_couteau;
            printf("\nniveau du monstre : %d\n",niveaudevampire);
            printf(" hp enemy : %d\n",hp_viedevampire);
            printf(" power enemy : %d \n",pvr_vampire);
            if(hp_viedevampire > 0)
            {
             PrintMenuBattle();
            }
         if(hp_viedevampire <= 0)
         {
            xp += 50;
            printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
            printf("xp : %d",xp);
            printf("\ntapez une valeur decimale a continuer\n");
            hp_viedevampire = 500;

         }




        }
        else if(typearme = 1 && character == 2)//si joueur a été attaqué par troll,et joueur obtiens couteau
        {
            hp_viedetroll -= dommage_couteau;
            printf("\nniveau du monstre : %d\n",niveaudetroll);
            printf(" hp enemy : %d\n",hp_viedetroll);
            printf(" power enemy : %d \n",pvr_troll);
            if(hp_viedetroll > 0)
            {
             PrintMenuBattle();
            }
            if(hp_viedetroll <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedetroll = 450;

            }


        }
        else if(typearme = 1 && character == 3)//si joueur a été attaqué par espirit,et joueur obtiens couteau
        {
            hp_viedespirit -= dommage_couteau;
            printf("\nniveau du monstre : %d\n",niveaudespirit);
            printf(" hp enemy : %d\n",hp_viedespirit);
            printf(" power enemy : %d \n",pvr_espirit);
            if(hp_viedespirit > 0)
            {
             PrintMenuBattle();
            }

            if(hp_viedespirit <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedespirit = 400;

            }



        }

         else if(typearme = 2 && character == 1) // si joueur a été attaqué par vampire,et joueur obtiens épée
        {
            hp_viedevampire -= dommage_epee;
            printf("\nniveau du monstre : %d\n",niveaudevampire);
            printf(" hp enemy : %d\n",hp_viedevampire);
            printf(" power enemy : %d \n",pvr_vampire);
            if(hp_viedevampire > 0)
            {
             PrintMenuBattle();
            }
            if(hp_viedevampire <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedevampire = 500;

            }
           }
          else if(typearme = 2 && character == 2)//si joueur a été attaqué par troll,et joueur obtiens épée
        {
            hp_viedetroll -= dommage_epee;
            printf("\nniveau du monstre : %d\n",niveaudetroll);
            printf(" hp enemy : %d\n",hp_viedetroll);
            printf(" power enemy : %d \n",pvr_troll);
            if(hp_viedetroll > 0)
            {
             PrintMenuBattle();
            }

            if(hp_viedetroll <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedetroll = 450;

            }


        }
        else if(typearme = 2 && character == 3)//si joueur a été attaqué par espirit,et joueur obtiens épée
        {
            hp_viedespirit -= dommage_epee;
            printf("\nniveau du monstre : %d\n",niveaudespirit);
            printf(" hp enemy : %d\n",hp_viedespirit);
            printf(" power enemy : %d \n",pvr_espirit);
            if(hp_viedespirit > 0)
            {
             PrintMenuBattle();

            }

         if(hp_viedespirit <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedespirit = 400;


            }


        }
        else if(typearme = 3 && character == 1) // si joueur a été attaqué par vampire,et joueur obtiens ciseau
        {
            hp_viedevampire -= dommage_epee;
            printf("\nniveau du monstre : %d\n",niveaudevampire);
            printf(" hp enemy : %d\n",hp_viedevampire);
            printf(" power enemy : %d \n",pvr_vampire);
            if(hp_viedevampire > 0)
            {
             PrintMenuBattle();
            }

            if(hp_viedevampire <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedevampire = 500;

            }


        }
        else if(typearme = 3 && character == 2)//si joueur a été attaqué par troll,et joueur obtiens ciseau
        {
            hp_viedetroll -= dommage_epee;
            printf("\nniveau du monstre : %d\n",niveaudetroll);
            printf(" hp enemy : %d\n",hp_viedetroll);
            printf(" power enemy : %d \n",pvr_troll);

             if(hp_viedetroll > 0)
            {
             PrintMenuBattle();
            }

         if(hp_viedetroll <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedetroll = 450;



            }
        }
        else if(typearme = 3 && character == 3)//si joueur a été attaqué par espirit,et joueur obtiens ciseau
        {
            hp_viedespirit -= dommage_epee;
            printf("\nniveau du monstre : %d\n",niveaudespirit);
            printf(" hp enemy : %d\n",hp_viedespirit);
            printf(" power enemy : %d \n",pvr_espirit);

            if(hp_viedespirit > 0)
            {
             PrintMenuBattle();
            }

         if(hp_viedespirit <= 0)
            {
                xp += 50;
                printf("\nMonstre est mort.Bravo vous avez gagne 50 xp\n");
                printf("xp : %d",xp);
                printf("\ntapez une valeur decimale a continuer\n");
                hp_viedespirit = 400;

            }
        }

}

void MonsterAttack()
{
     if(character == 1)
    {
        hpviedujoueur -= 300;
        printf("\nDamage 300!!!");
        printf("\nVotre hp : %d \n",hpviedujoueur);
        PrintMenuBattle();
        }
     if(character == 2)
    {
        hpviedujoueur -= 200;
        printf("\nDamage 150!!!");
        printf("\nVotre hp : %d \n",hpviedujoueur);
        PrintMenuBattle();
        }
     if(character == 3)
    {
        hpviedujoueur -= 50;
        printf("\nDamage 50!!!");
        printf("\nVotre hp : %d \n",hpviedujoueur);
        PrintMenuBattle();
        }



}

void StartBattle()
{
    printInfoBattle();
    PrintMenuBattle();
    int v = getValueFromUser(5);
    if (v == "%d")
    {
        ask_to_player();

    }

}

int boss(){


         printf("%v Felicitations,Vous avez arrive au boss.\n");
         printf("**********************************************************You Win********************************************************************\n");
         exit(1);


}



int gameover()
{
    printf("\n\n**************************************************GAME OVER*******************************************************************************\n");
    exit(1);
}















