#include <stdio.h>
#include <conio.h>

void displayscore()
{
char name[20];
float s;
FILE *f;
f=fopen("score.txt","r");
fscanf(f,"%s%f",&name,&s);
printf("\n\n\t\t ");
printf("\n\n\t\t %s has secured the Highest Score %.2f",name,s);
printf("\n\n\t\t ");
fclose(f);
getch();
}
