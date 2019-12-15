#include <stdio.h>
#include <stdlib.h>
#include <string.h>

    int main(int argc,char *argv[]){
    char nom[150];
    FILE *fp;
    printf("entrer le nom de fichier à créer : ");
    gets(nom);
    fp=fopen(strcat(nom,".txt"),"w");
    fclose(fp);
    printf("fichier créer avec succès");
    return 0;
    }
