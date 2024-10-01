#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, n, s, m, min, max, choix;
    
 
         switch(choix){
           
             
           case 2: {
              max = T[0];
              min = T[0];
              for(i=1; i<5; i++){
              if(min > T[i])
              min = T[i];
              if(max < T[i])
              max = T[i];
              }
    
              printf("la note la plus elevee et %d \n", max);
              printf("la note la plus basse et %d \n", min);
              }
             break ;
             
          case 3:
             printf("3");
             break ;
          case 4:
             printf("4");
            break ;
          case 5:
             printf("5");
             break ;
          case 6:
             printf("Au revoir ! ");
             return 0 ;
          default:
             printf("le nombre est incorecte \n");
        }
    }
    do
    {
        printf("-------Gestion des notes avec validation et rattrapage-------\n");

        int n;
        printf("combien d'etudians y a-t-il ? ");
        scanf("%d", &n);
        int T[n];

        for(i=0;i<n;i++){
            printf("entrer la note de l'etudiant %d ", i);
            scanf("%d", &T[i]);
            }
     
         printf("1. calculer la moyenne des notes . \n");
         printf("2. trouver la note la plus elevee et la plus basse . \n");
         printf("3. affichier les notes superieure a la moyenne . \n");  
         printf("4. compter le nombre d'etudiant ayant valide (not >= 12) . \n");
         printf("5. compter le nombre d'etudiant en rattrapage (not <= 12)\n");
         printf("6. quitter \n");
         
         printf("entrez votre choix :");
         scanf("%d",&choix);
         switch (expression)
         {
         case 1:
            calculer_la_moyenne();
            break;
         
         case 2 :
            la_note_la_plus_elevee();
            break;

         case 2 :
            la_note_la_plus_elevee();
            break;

            case 3 :
            la_note_la_plus_elevee();
            break;

            case 4 :
            la_note_la_plus_elevee();
            break;

            case 5 :
            la_note_la_plus_elevee();
            break;

         default:
           
         }
    } while (choix != 6);

    if(choix == 6)
      printf("Au revoir !");
    
 
 
    return 0;
}