#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
    int nb1 = 0;
    int nb2 = 0;
    int resultat = 0;

    printf("Nb1 :? ");
    scanf("%d", &nb1);

    printf("Nb2 :? ");
    scanf("%d", &nb2);

    resultat = nb1 + nb2;
    printf("\nResultat de l'addition : %d\n", resultat);

    return 0;
}
