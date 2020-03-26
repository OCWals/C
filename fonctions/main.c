#include <stdio.h>
#include <stdlib.h>

int triple (int nb)
{
    return nb*3;
}

double eurosToFrancs (double nb)
{
    return nb * 6.55957;
}

double francsToEuros (double nb)
{
    return nb / 6.55957;
}

void punition (int nb)
{
    for (int i = 1; i <= nb; i++)
    {
        printf("%d. Texte à multiplier.\n", i);
    }
}

double aireRectangle (double largeur, double longueur)
{
    return longueur * largeur;
}

int menu ()
{
    int choix = 0;

    printf("\n\n=== Menu ===\n");
    printf("1. Royal Cheese\n");
    printf("2. Mc Deluxe\n");
    printf("3. Mc Bacon\n");
    printf("4. Big Mac\n\n");

    do
    {
        printf("Choisir menu :? ");
        scanf("%d", &choix);
    } while (choix > 4 || choix < 1);

    return choix;
}

int main()
{
    printf("%d\n", triple(7));

    printf("\n");

    printf("10 euros = %fF\n", eurosToFrancs(10));
    printf("50 euros = %fF\n", eurosToFrancs(50));
    printf("100 euros = %fF\n", eurosToFrancs(100));
    printf("200 euros = %fF\n", eurosToFrancs(200));

    printf("\n");

    printf("%f\n", francsToEuros(65.5957));
    printf("%f\n", francsToEuros(327.9785));
    printf("%f\n", francsToEuros(655.957));
    printf("%f\n", francsToEuros(1311.914));

    printf("\n");

    punition(30);

    printf("\n");

    printf("Rectangle de largeur 5 et hauteur 10. Aire = %f\n", aireRectangle(5, 10));
    printf("Rectangle de largeur 2.5 et hauteur 3.5. Aire = %f\n", aireRectangle(2.5, 3.5));
    printf("Rectangle de largeur 4.2 et hauteur 9.7. Aire = %f\n", aireRectangle(4.2, 9.7));

    printf("\n");


    switch (menu())
    {
    case 1:
        printf("Vous avez choisi le menu Royal Cheese.");
        break;
    case 2:
        printf("Vous avez choisi le menu Mc Deluxe.");
        break;
    case 3:
        printf("Vous avez choisi le menu Mc Bacon.");
        break;
    case 4:
        printf("Vous avez choisi le menu BigMac.");
        break;
    }

    return 0;
}
