/*Na parte principal do programa, faça o seguinte:
3.1. Crie uma pilha cujos elementos são valores inteiros.
3.2. Insira dois elementos na pilha.
3.3. Remova os dois elementos da pilha imprimindo os seus valores*/

#ifndef PILHA_H
#define PILHA_H

#include <iostream>

using namespace std;

// Estrutura do nó da pilha
struct No {
    int dados;
    No* prox;
};

// Estrutura da pilha
struct Pilha {
    No* topo;
};

// Funções da pilha
void iniciar(Pilha *p);
int vazia(Pilha *p);
void inserir(Pilha *p, int valor);
int remover(Pilha *p);
void imprimir_topo(Pilha *p);
void imprimir_todos(Pilha *p);

#endif
