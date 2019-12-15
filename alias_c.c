#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <errno.h>
#include <string.h>

int main(int argc, char *argv[])
{

char var[50];
char  variable[50];
char  commande[60];
printf("entrer la variable d'alias ");
scanf(" %s", &variable);
printf("entrer la commande ");
scanf(" %s", &commande);
printf("rentrer la variable d'alias ");
scanf(" %s", &var);

if(strcmp(var, variable) ==0)
system (commande);
else
printf("erreur");
return 0;
}

