/*Após implementar a classe Circulo descrita nos slides anteriores, faça o
seguinte:
1. Adicione à classe Circulo métodos que calculam e imprimem o perímetro
do círculo. Teste estes métodos na parte principal do programa.
2. Na parte principal do programa, crie dois círculos e imprima as suas áreas */


/*esse archivo é o cabeçalho*/

#ifndef CIRCULO_H  /*para evitsr inclusão multipla de um archivo cabeçalho. define se não for definido ainda*/
#define CIRCULO_H  /*define para evitar multipla inclusões*/
class Circulo{

public:
    Circulo(double raio);

    double calcula_area();

    void imprimir_area();
private:
    double raio_;

};

#endif  /*fin do bloco */