#ifndef LISTA_H 
#define LISTA_H

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#include <time.h>

#define MAXTAM 10

typedef struct Item{
	int num;
}Item;

typedef struct Lista{
	Item vet[MAXTAM];
	int first;
	int last;
}Lista;


void FazListaVazia(Lista *l);
void InsereNaLista(Lista *l, Item d);
void RemoveDaLista(Lista *l, Item d);
void Troca(Item *a, Item *b);
void ImprimeLista(Lista *l);
void somaVetorInteiro(Lista *l);
void maximaSoma(Lista *l);

#endif