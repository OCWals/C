#include <stdio.h>
#include <stdlib.h>

int main (int argc, char* argv[])
{
    int age = 0, niveau = 0;            // Il vaut mieux toujours initialiser les variables pour éviter les conflits mémoire
    int nombreDeVies = 15;

    int const NOMBRE_DE_VIES_INITIALES = 5;

    printf("Il vous reste %d vies sur les %d initiales.\n\n", nombreDeVies, NOMBRE_DE_VIES_INITIALES);

    printf("Quel est votre age :? ");
    scanf("%d", &age);
    // Si autre chose qu'un int en entrée, la variable garde son ancienne valeur

    printf("\nVous avez donc %d ans.\n", age);
    return 0;
}
