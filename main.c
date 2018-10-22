#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char MotDePasse[] = "challSniky";
int ret;

void EntrerMotDePasse()
{
    char MDP[10];

    printf("Veuillez rentrer un mot de passe: ");
    scanf("%10s",&MDP);

    ret = strcmp(MDP, MotDePasse);

    if(ret < 0 || ret > 0)
    {
        system("cls");
        printf("\nMot de passe incorect !\n\n");
    }
    else
    {
        system("cls");
        printf("\nTrouve, le mot de passe est bien : challSniky");
    }
}

int main()
{
    char choix;

    do{
        EntrerMotDePasse();
    }while(ret < 0 || ret > 0);
    printf("\n\nTapez sur une touche de votre clavier pour sortir de l'application.");
    choix = getch();
    while(choix < 0)
    {
    }
    return 0;
}
