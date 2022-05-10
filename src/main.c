#include "Lista.h"

int main(){

	Lista lista;
    Item item;
    FazListaVazia(&lista);
    time_t t;
    srand((unsigned) time(&t));
    
    for (int i = 0; i < MAXTAM; i++){
        item.num = (rand() % 199)-99;
        InsereNaLista(&lista, item);
    }

    ImprimeLista(&lista);
    somaVetorInteiro(&lista);
    maximaSoma(&lista);
	return 0;
}