#include<stdio.h>
#include<string.h>
#include<sched.h>
#include<unistd.h>
#include<stdlib.h>

typedef struct process
{
int DA;
int TE;
int tempsej;
int temfin;
int pol;
int pr;
int reste;

}process;

struct sched_param P;
int main()

{int i,j,nb,sfin,ss,ssej,q,ttime,c; process* proc;char politique[20];process permut;float temsej;int pid,* pri;
  P.sched_priority=5;

/*Dnner le nombre de processus*/
printf ("entrer le nombre de processus\n");
 scanf("%d",&nb);



/*allouer le tableau de maniÃ&#168;re dynamique*/
proc=( process *)malloc(sizeof( process )*nb);

 /*attribuer Ã  chaque processus une date d'arrivee et un temps d'execution*/
   for(i=0;i<nb;i++)
   {printf("entrer la date d'arrivee du processus (%d)\n",i+1);
   scanf("%d",&proc[i].DA);
   printf("entrer la duree d'execution du processus (%d)\n",i+1);
   scanf("%d",&proc[i].TE);
   }



/*trier le tableau par ordre croissant de date darrivee pour faciliter le traitement par la suite*/
for(i=0;i<nb+1;i++)
for(j=i+1;j<nb;j++)
{
if (proc[i].DA>proc[j].DA)

{
permut=proc[i];
proc[i]=proc[j];
proc[j]=permut;
}

}
printf("\n");

/*Afficher l'ordonnancement appilquÃ©*/
printf("Ordonnancement FIFO\n");
/*Afficher la date d'arrivee et le temps d'execution de chaque processus*/
printf("Processus\t DA\t TE\n");
for (i=0;i<nb;i++)
{
printf("p(%d)\t\t %dms \t %dms\n",i+1,proc[i].DA,proc[i].TE);
}
printf("\n");
/*afficher lA DATE DE FIN D'EXECUTION DE CHAQUE  processuss*/
printf("****date de fin d'execution des %d processus****\n",nb);
for(i=0;i<nb;i++)
{printf("p(%d)\t",i+1);
}
printf("\n");
/*Calcul*/
sfin=0;
ssej=0;
for(i=0;i<nb;i++)
{
 sfin=sfin+proc[i].TE;
 proc[i].temfin=sfin;
 ssej=sfin-proc[i].DA;
 proc[i].tempsej=ssej;
printf("%dms\t",proc[i].temfin);

}
printf("\n");
/*afficher le temps de sejour de chaque processuss*/

printf("*******TEMPS DE SEJOUR*******\n");
for(i=0;i<nb;i++)
{printf("p(%d)\t",i+1);
}
printf("\n");
ss=0;
for(i=0;i<nb;i++)
{ss=ss+proc[i].tempsej;
 printf("%dms\t",proc[i].tempsej);
}
printf("\n");
/*afficher le temps moyen de sejour */
printf("*******TEMPS MOYEN DE SEJOUR*******");
printf("\n");
temsej=(float)ss/nb;
printf("le temps moyen de sejour est (temps moyen sÃ©jour= %fms\n",temsej);




return 0;

}

