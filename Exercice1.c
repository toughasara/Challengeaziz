#include <stdio.h>
#include <stdlib.h>

int main()
{
    float longueur, largeur, aire, perimetre;

    printf("veuillez entre la longueur d'un rectangle : ");
    scanf("%f", &longueur);

    printf("veuillez entre la largeur d'un rectangle : ");
    scanf("%f", &largeur);

    aire = largeur * longueur;
    perimetre = 2 * (largeur + longueur);
    
    printf("l'aire du rectangle est %.2f \n", aire);
    printf("le perimetre du rectangle est %.2f \n", perimetre);


    return 0;
}