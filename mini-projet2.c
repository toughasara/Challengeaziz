#include <stdio.h>
#include <stdlib.h>

int n;
int i;
int choix;
    
           void calculer_la_moyenne(int T[])
             {
                printf("*******calculation de moyenne*******\n");
                int s;
                float m;
                s = 0;
                for(i=0; i<n; i++){
                  s += T[i];
                }
                m = s / n;
                printf("la moyenne des notes est %.2f \n", m);
             }

           void la_note_la_plus_elevee_basse(int T[])
             {
              printf("*******la note la plus elevee et la plus basse*******\n");
              float max = T[0];
              float min = T[0];
              for(i=0; i<n; i++){
                 if(min > T[i])
                 min = T[i];
                 if(max < T[i])
                 max = T[i];
              }
    
              printf("la note la plus elevee est %.2f \n", max);
              printf("la note la plus basse est %.2f \n", min);
              }
             
             
          void le_classement_des_notes(int T[])
             {
              printf("*******le classement des notes*******\n");
              int i, j;
              int s = 0;
              for(i = 0; i < n-1; i++){
                 for(j= 0; j < n - 1 - i; j++){
                    if(T[j] > T[j + 1]){
                       s = T[j];
                       T[j] = T[j + 1];
                       T[j + 1] = s;
                    }
                 }
              }
             
               for(i = 0 ; i < n ; i++){
               printf("Les notes classer sons : ");
               printf(" %d \n", T[i]);
               }
             }
             

          void etudiants_ayant_valide(int T[])
             {
             printf("*******les etudiants ayant valide*******\n");
             int f = 0;
             for( i=0 ; i<n ; i++){
                  if( T[i] >= 12 ){
                      f++;
                  }
             }
             printf("Nombre d'etudiants ayant valide le module : %d \n", f);
             }
             

          void etudiants_en_rattrapage(int T[])
             {
             printf("*******les etudiants en rattrapage*******\n");
             int p = 0;
             for( i=0 ; i<n ; i++){
                  if( T[i] < 12 ){
                      p++;
                  }
             }
             printf("Nombre d etudiants en rattrapage : %d \n", p);
             }
             
        
int main()
{
    printf("-------Gestion des notes avec validation et rattrapage-------\n");

        int n;
        printf("combien d'etudians y a-t-il ? ");
        scanf("%d", &n);
        int T[n];

        for(i=0;i<n;i++){
            printf("entrer la note de l'etudiant %d :", i+1);
            scanf("%d", &T[i]);
            }

    while (choix != 6){
         printf("1. calculer la moyenne des notes . \n");
         printf("2. trouver la note la plus elevee et la plus basse . \n");
         printf("3. affichier les notes superieure a la moyenne . \n");  
         printf("4. compter le nombre d'etudiant ayant valide (not >= 12) . \n");
         printf("5. compter le nombre d'etudiant en rattrapage (not <= 12)\n");
         printf("6. quitter \n");
         
         printf("que souhaitez-vous faire ?");
         scanf("%d",&choix);
         switch (choix)
         {
         case 1:
            calculer_la_moyenne(T);
            break;

         case 2 :
            la_note_la_plus_elevee_basse(T);
            break;

         case 3 :
            le_classement_des_notes(T);
            break;

         case 4 :
            etudiants_ayant_valide(T);
            break;

         case 5 :
            etudiants_en_rattrapage(T);
            break;

        case 6 :
            printf("Au revoir !");
            return 0;

         default:
            printf("erreur");
           
         }
    }
    
 
 
    return 0;
}