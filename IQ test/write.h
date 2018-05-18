#include <stdio.h>



void writescore(float score, char plnm[20])
{
float sc;
char nm[20];
FILE *f;
f=fopen("score.txt","r");
fscanf(f,"%s%f",&nm,&sc);
 if (score>=sc)
   {
   sc=score;
   fclose(f);
   f=fopen("score.txt","w");
   fprintf(f,"%s\n%.2f",plnm,sc);
   fclose(f);
   }
}
