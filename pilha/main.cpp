#include "Pilha.h"
#include <iostream>
using namespace std;

int main(){
    Pilha p;

    iniciar(&p);

    inserir(&p ,10);
    inserir(&p, 20);
    remover(&p);
    remover(&p); 

    imprimir_todos(&p);

    return 0;
}




