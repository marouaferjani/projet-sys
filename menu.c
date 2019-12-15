#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){
   int choix_principal;
   int choix_cmd;
   int choix_proc;
    printf("******* BIENVENUE DANS NOTRE PROJET ******* \n");
    printf("\n");
    printf("1: gestion des processus \n");
    printf("2: simulateur commandes linux \n");
    printf("\n");

    do{
        printf("veuillez choisir une action disponible: ");
        scanf("%d",&choix_principal);
      }
    while (choix_principal<1 || choix_principal>2);

     printf("\n");
   //choix de menu
      switch (choix_principal) {
    case 1: {
         printf("**** ODONNANCEMENT PROCESSUS **** \n");
         printf("\n");
         printf(" 1- FIFO\n");
         printf(" 2- SJF NON PREEMPTIVE\n");
         printf(" 3- PRIORITAIRE NON PREEMPTIVE\n");
         printf(" 4- TOURNIQUET \n");
         printf(" 5- SRT \n");

          printf("veuillez choisir une action: ");
       scanf("%d",&choix_proc);
        switch (choix_proc) {
    case 1: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\fifo.exe");
    break;
    }
    case 2: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\sjf_non_pr.exe");
    break;

    }
    case 3: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\prioritaire_non_pr.exe");
    break;

    }
    case 4: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\round_robin.exe");
    break;

    }
    case 5: {
     system("C:\\Users\\pc\\Desktop\\projetsys\\srt.exe");
    break;
    }
    default:
        printf("réponse non valable");
    }
        break;
    }
    case 2: {
         printf("**** SIMULATEUR COMMANDES LINUX **** \n");
         printf("\n");
         printf("1) actions par fichiers : \n");
         printf("\n");
         printf(" 1- creer un fichier \n");
         printf(" 2- supprimer un fichier \n");
         printf(" 3- copier un fichier \n");
         printf(" 4- Renommer un fichier \n");
         printf(" 5- concatener deux fichiers \n");
         printf(" 6- Afficher contenu d'un fichier \n");
         printf(" 7- compter les characteres par fichier \n");
         printf(" 8- compter les lignes par fichier \n");
         printf(" 9- Effacer une ligne à partir d'un fichier \n");
         printf(" 10- Afficher la taille d'un fichier \n");
         printf(" 11- Afficher contenu d'un fichier page par page \n");

         printf("\n");
         printf("2) actions sur répertoire : \n");
         printf("\n");
          printf(" 12- creer un dossier \n");
          printf(" 13- supprimer un dossier\n");
          printf(" 14- repertoire courant \n");
          printf("\n");

         printf("3) autres commandes sur linux : \n");
          printf("\n");
          printf(" 15- executer à partir d'un path \n");
          printf(" 16- pipe \n");
          printf(" 17- redirection \n");
          printf(" 18- alias \n");
          printf(" 19- executer à partir d'un fichier \n");
          printf(" 20- cd \n");
          printf(" 21- Quitter \n");

       printf("veuillez choisir une action: ");
       scanf("%d",&choix_cmd);
        switch (choix_cmd) {
    case 1: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\createfile.exe");
    break;
    }
    case 2: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\deletefile.exe");
    break;

    }
    case 3: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\copy_file.exe");
    break;

    }
    case 4: {
     system("C:\\Users\\pc\\Desktop\\projetsys\\rename_file.exe");
    break;

    }
    case 5: {

    system("C:\\Users\\pc\\Desktop\\projetsys\\cat_c.exe");
    break;
    }
    case 6: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\list_content.exe");
    break;

    }
    case 7: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\count_characters.exe");
    break;

    }
    case 8: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\count_lines.exe");
    break;

    }
    case 9: {
     system("C:\\Users\\pc\\Desktop\\projetsys\\sed_c.exe");
    break;

    }
    case 10: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\size_file.exe");
    break;

    }
    case 11: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\more_c.exe");
    break;

    }
    case 12: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\createdirectory.exe");
    break;

    }
    case 13: {
     system("C:\\Users\\pc\\Desktop\\projetsys\\delete.exe");
    break;

    }
    case 14: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\pwd_c.exe");
    break;

    }
    case 15: {
     system("C:\\Users\\pc\\Desktop\\projetsys\\path_c.exe");
    break;

    }
    case 16: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\pipe_c.exe");
    break;

    }
    case 17: {
     system("C:\\Users\\pc\\Desktop\\projetsys\\redirection_c.exe");
    break;

    }
    case 18: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\alias_c.exe");
    break;

    }
    case 19: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\execute.exe");
    break;

    }
     case 20: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\cd_c.exe");
    break;

    }
     case 21: {
    system("C:\\Users\\pc\\Desktop\\projetsys\\quitter.exe");
    break;

    }
    default:
        printf("réponse non valable");
    }

    break;
    }

    default:
        printf("réponse non valable");
    }




    return 0;
}
