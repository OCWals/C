#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nombreEntre =0;

    while (nombreEntre != 42)
    {
        printf("Entrer un nombre (indice : 42) :? ");
        scanf("%d", &nombreEntre);
    }

    printf("\n42 !\n\n\n");
    int compteur = 10;

    while (compteur > 0)
    {
        printf("Salut toi... (%d)\n", compteur);
        compteur--;
    }

    printf("\n\n");
    compteur++;

    do
    {
        printf("Salut toi ! (%d)\n", compteur);
        compteur++;
    } while (compteur <= 10);

    printf("\n\n");
    compteur--;

    for (compteur; compteur > 0; compteur--)
    {
        printf("SALUT TOI !? (%d)\n", compteur);
    }

    return 0;
}
