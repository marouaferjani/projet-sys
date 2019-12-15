#include <stdio.h>
#include <stdlib.h>

int main()
{
    char file1[150];
    char file2[150];
    char file3[150];
   // Open two files to be merged
   printf("donner le premier fichier: ");
   gets(file1);
   printf("donner le deuxième  fichier: ");
   gets(file2);
   printf("donner le nom du fichier final: ");
   gets(file3);
   FILE *fp1 = fopen(file1, "r");
   FILE *fp2 = fopen(file2, "r");

   // Open file to store the result
   FILE *fp3 = fopen(file3, "w");
   char c;

   if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
   {
         puts("Could not open files");
         exit(0);
   }

   // Copy contents of first file to file3.txt
   while ((c = fgetc(fp1)) != EOF)
      fputc(c, fp3);

   // Copy contents of second file to file3.txt
   while ((c = fgetc(fp2)) != EOF)
      fputc(c, fp3);

   printf("Merged file1.txt and file2.txt into file3.txt");

   fclose(fp1);
   fclose(fp2);
   fclose(fp3);
   return 0;
}
