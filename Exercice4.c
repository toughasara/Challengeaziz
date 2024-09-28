#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[5]={};
    int i, n, min, max;
    printf("veuillez entrer les nombres : \n");
    for(i=0;i<5;i++){
        printf("T[%d] = ", i);
        scanf("%d", &T[i] );
    }
    max = T[0];
    min = T[0];
    for(i=1; i<5; i++){
        if(min > T[i])
          min = T[i];
        if(max < T[i])
          max = T[i];
    }
    
    printf("le minimale = %d \n", min);
    printf("le maximale = %d \n", max);

   return 0;

}