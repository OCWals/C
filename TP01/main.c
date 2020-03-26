#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    srand(time(NULL));

    const int MIN = 0;
    int max = 0;
    int nombreMystere = 0;
    int val = 0;
    int compteur = 0;
    int again = 1;
    int difficult = 0;
    int players = 2;

    while (again != 0)
    {
        printf("Un ou deux joueurs :? ");
        scanf("%d", &players);

        if (players == 1)
        {
            printf("\n=== Difficulté ===\n");
            printf("1. 0 - 100\n");
            printf("2. 0 - 1 000\n");
            printf("3. 0 - 10 000\n\n");

            printf("Choix de difficulté :? ");
            scanf("%d", &difficult);

            switch (difficult)
            {
            case 1:
                max = 100;
                break;
            case 2:
                max = 1000;
                break;
            case 3:
                max = 10000;
                break;
            default:
                max = 50000;
                break;
            }

            nombreMystere = (rand() % (max - MIN + 1)) + MIN;
        }
        else
        {
            printf("\n(J2) Choisir un nombre mystère :? ");
            scanf("%d", &nombreMystere);
        }
            printf("%d\n\n", nombreMystere);

        do
        {
            compteur++;

            printf("Quel est le nombre :? ");
            scanf("%d", &val);

            if (val < nombreMystere)
            {
                printf("C'est plus !\n\n");
            }
            else if (val > nombreMystere)
            {
                printf("C'est moins !\n\n");
            }
            else
            {
                printf("Bravo, vous avez trouvez la bonne réponse (%d) en %d coups!\n\n", nombreMystere, compteur);
                compteur = 0;
            }

        } while (val != nombreMystere);

        printf("Jouer encore (entrer '0' pour quitter) :? ");
        scanf("%d", &again);
        printf("\n");
    }

    return 0;
}
