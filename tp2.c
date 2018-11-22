#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *upper(char *chaine)
{
    int i = 0;

    while (chaine[i] != '\0')
    {

        if (chaine[i] >= 97 && chaine[i] <= 122)

            chaine[i] = chaine[i] - 32;
        i++;
    }
}

char *pyra(char *chaine)
{

    int i = 0;
    int longueurChaine = strlen(chaine);
    printf("chaine: %s \n", chaine);
    printf("longueurChaine: %d \n", longueurChaine);
    for (i = longueurChaine - 1; i >= 0; i = i - 1)
    {
        for (int j = 0; j < longueurChaine - i; j++)
            printf(" ");
        for (int j = i + 1; j > 0; j--)
            printf("%c", chaine[j - 1]);
        for (int j = 1; j < i + 1; j++)
            printf("%c", chaine[j]);
        printf("\n");
    }
}
char *retour(char *chaine)
{    
    int i = 0;

    while (chaine[i] != '\0')
    {

        if (chaine[i] == 32)

            chaine[i] = '\n';

        i++;
    }
    

}