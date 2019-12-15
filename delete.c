#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[])
{
	char command[]="rmdir ";
	char nom[150];
  system("cd C:\\Users\\pc\\Desktop\\projetsys");
  printf("donner le dossier à supprimer : ");
  gets(nom);
  strcat(command,nom);
  system(command);
  printf("%s directory deleted successfully.\n",nom);
   return 0;
}
