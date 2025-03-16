#include "Circulo.h" /*chamada de cabeçalho*/

#include <iostream> /*biblioteca padrão*/
using namespace std; /*using namespace std; simplifica o código, mas pode causar conflitos.
 Melhor usá-lo apenas em programas pequenos ou exemplos didáticos.
 Em projetos grandes, é mais seguro importar apenas os elementos necessários (using std::cout;).*/

int main(){

    Circulo c(2);
    c.imprimir_area();


    cout<< "digite um numero "; /*cout para imprimir na tela*/
    int raio;
    cin>> raio; /*cin para entrada dados*/

    Circulo c2(raio);
    c2.imprimir_area();
    return 0;
}
