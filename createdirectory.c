#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
	char command[]="mkdir ";
	char nom[150];
  system("cd C:\\Users\\pc\\Desktop\\projetsys");
  printf("donner le nom du dossier: ");
  gets(nom);
  strcat(command,nom);
  system(command);
  printf("dossier crée avec succès");

   return 0;
}
