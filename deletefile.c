#include<stdio.h>

main()
{
    int status;
    char file_name[25];
    system("cd C:\\Users\\pc\\Desktop\\projetsys");
    printf("Entrer le nom du fichier à supprimer: ");
    gets(file_name);

    status = remove(file_name);

    if(status == 0){
    printf("%s file deleted successfully.\n",file_name);
        }
    else
    {
        printf("Unable to delete the file\n");
        perror("Error");
    }

    return 0;
}
