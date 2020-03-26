#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Quel est votre age :? ");

    int age = 0;
    scanf("%d", &age);

    printf("A %d ans vous ", age);

    if (age < 18)
    {
        printf("n'êtes pas majeur... :/");
    }
    else
    {
        printf("êtes majeur! =)");
    }


    int choixMenu = 0;

    printf("\n\n=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n\n");

    printf("Votre choix :? ");
    scanf("%d", &choixMenu);

    printf("\nVous avez choisi : Menu ");

    switch (choixMenu)
    {
    case 1:
        printf("Royal Cheese.");
        break;
    case 2:
        printf("Mc Deluxe.");
        break;
    case 3:
        printf("Mc Bacon.");
        break;
    case 4:
        printf("BigMac.");
        break;
    default:
        printf("inconnu.");
        break;
    }

    printf("\n");

    return 0;
}
