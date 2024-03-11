#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main ( int argc, char** argv ){
    printf("Init\n");
    int nombreMystere = 0, nombreEntre = 0, vie = 5;
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;

    do
    {
        printf("Il reste %d vie/s\n\n", vie);
        printf("Quel est le nombre ?\n> ");
        scanf("%d", &nombreEntre);
        vie--;
        if (vie == 0  && nombreMystere != nombreEntre)
        {
            printf("Perdu, plus de vie, le nombre etait %d", nombreMystere);
            break;
        }
        

        if (nombreMystere > nombreEntre){
            printf("\n==== C'est plus ====\n\n");
        }
        else if (nombreMystere < nombreEntre){
            printf("\n==== C'est moins ====\n\n");
        }
        else {
            printf("Bravo");
        }
    } while (nombreEntre != nombreMystere);
 
}

