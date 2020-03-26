#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char** argv)
{
    const int MAX = 500;
    const int MIN = 0;

    srand(time(NULL));
    int nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    int val = 0;

    printf("%d\n\n", nombreMystere);

    do
    {
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
            printf("Bravo, vous avez trouvez (%d)\n", nombreMystere);
        }

    } while (val != nombreMystere);

    return 0;
}
