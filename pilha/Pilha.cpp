#include "Pilha.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

/*método para iniciar*/
void iniciar(Pilha *p){
    p->topo=NULL;
}
/*método vaziar*/
int vazia(Pilha *p){
    return (p->topo==NULL);
}

/*método inserir*/

void inserir(Pilha *p,int valor){
    No* novo=(No*)malloc(sizeof(No));

    if(!novo){
        cout << "erro ao aloca memoria !";
        return;
    }
    novo->dados=valor; /*armanezar o valor no nó*/
    novo->prox=p->topo; //o novo nó aponta para o antio topo
    p->topo=novo; //o novo nó se torna o topo da pilha
}
/*método para remove nan pilha*/
int remover(Pilha *p){
    if(vazia(p)){
        cout <<"a pilha esta vazia !";
        return -1;
    }
    No* remove =p->topo;  /*gaurda o topo no remove*/
    int valor =remove->dados; /*salvar o valor do nó*/
    p->topo=remove->prox;
    free(remove);
    return valor;
}
void imprimir_topo(Pilha *p){
    if(vazia(p)){
        cout << "esta vazia !";
        return ;
    }
    cout <<"o topo : "<< p->topo->dados;
}

void imprimir_todos(Pilha *p){
    if(vazia(p)){
        cout << "pilha vazia";
        return ;
    }
    No* aux= p->topo;
    while(aux){
        cout << aux->dados << "\n";
        aux=aux->prox;

    }

    cout << "\n";

}