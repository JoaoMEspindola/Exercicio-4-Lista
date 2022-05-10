#include "Lista.h"

void Troca(Item *a, Item *b){
	Item aux;
	aux = *a;
	*a  = *b;
	*b  = aux;
}

void FazListaVazia(Lista *l){
	l->first = 0;
	l->last  = 0;
}

void InsereNaLista(Lista *l, Item d){
	if (l->last >= MAXTAM){
		printf("LISTA CHEIA!\n");
	}else{
		l->vet[l->last] = d;
		l->last ++;
	}
}

void RemoveDaLista(Lista *l, Item d){
	bool ok = false;

	if(l->first == l->last)
		printf("LISTA VAZIA!\n");
	else{
		for(int i=l->first; i<l->last; i++)
			if(l->vet[i].num == d.num){
				Troca(&l->vet[i], &l->vet[i+1]);
				ok = true;	
			}
	
		if(ok)
			l->last --;
	}
}

void ImprimeLista(Lista *l){
	for(int i=l->first; i<l->last; i++)
		printf("\t%d", l->vet[i].num);
	printf("\n");
}

void somaVetorInteiro(Lista *l){
	int somaTotal = 0;

	for (int i = l->first; i < l->last; i++){
		somaTotal += l->vet[i].num;
	}
	printf("\nA soma total do vetor é: %d\n", somaTotal);
}

void maximaSoma(Lista *l){
	int maxSoma = l->vet[0].num, soma = 0;
	for (int i = l->first; i < l->last; i++){
		soma = 0;
		for (int j = i; j < l->last; j++){
			soma += l->vet[j].num;
			if (soma > maxSoma)
				maxSoma = soma;
		}
	}
	printf("\nMáxima soma: %d\n", maxSoma);
}