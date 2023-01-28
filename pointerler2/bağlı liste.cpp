#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct ListeElemani LE;
struct ListeElemani
{
	LE *next;
	char data;
};

typedef struct
{
	LE *listeBasi;
}Liste;

void Listeyaz(char *mesaj,Liste *L)
{
	LE *t;
	if(mesaj!=0)
	{
		printf("%s",mesaj);
	}
	for(t=L->ListeBasi;t!=0;t=t->next)
	{
		printf("%o",t->data);
	}
	printf("\n");
}
