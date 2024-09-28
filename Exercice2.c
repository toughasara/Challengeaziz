#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;
    printf("veuillez entrer votre age : ");
    scanf("%d", &age);
    if (age >= 18)
        printf("vous etes eligible pour voter.");
    else if (age < 18 && age >= 0)
        printf("vous n'etes pas eligible pour voter.");
    else 
        printf("erreur");

    return 0;
}