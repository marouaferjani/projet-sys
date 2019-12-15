#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main (int argc ,char *argv [] )
{
  FILE *file;
   file = fopen("C:\\Users\\pc\\Desktop\\projetsys\\path.txt","r");


      char line [ 150 ];

      fgets( line, sizeof line, file );

   char nom_command[150];
   printf("entrer la commande à éxécuter: ");
   gets(nom_command);
   strcpy(line,nom_command);

   system(line);

return(0);
}
