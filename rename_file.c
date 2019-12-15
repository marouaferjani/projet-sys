
/**
 * C program to rename a file using rename() function.
 */

#include <stdio.h>


int main()
{
    // Path to old and new files
    char oldName[100], newName[100];

    // Input old and new file name
    printf("entrer le nom du fichier ancien: ");
    scanf("%s", oldName);

    printf("Entrer le nouveau nom: ");
    scanf("%s", newName);


    // rename old file with new name
    if (rename(oldName, newName) == 0)
    {
        printf("File renamed successfully.\n");
    }
    else
    {
        printf("Unable to rename files. Please check files exist and you have permissions to modify files.\n");
    }

    return 0;
}
