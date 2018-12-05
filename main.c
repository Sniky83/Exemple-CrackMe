#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>

void EntrerMotDePasse();

char MotDePasse[] = "challSniky";
int ret;

void EntrerMotDePasse()
{
    char MDP[10];

    printf("Veuillez rentrer un mot de passe: ");
    scanf("%10s",MDP);

    ret = strcmp(MDP, MotDePasse);

    if(ret != 0)
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
    do {
        EntrerMotDePasse();
    }while(ret != 0);

    printf("\n\nTapez sur une touche de votre clavier pour sortir de l'application.");
    getch();
    return 0;
}
