#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, i;
    int b=1;
    printf("veuillez entrer un nombre : ");
    scanf("%d", &n);
    if(n < 2)
        printf("ce n'est pas un nombre premier ");
    else if (n >= 2){
        for(i=2;i<n;i++){
        if(n % i == 0)
          b = 0;
          break;
        }
    }
    if (b)
       printf("c'est un nombre premier ");
    else 
       printf("ce n'est pas un nombre premier ");
     

    return 0;
}
