#include <iostream>

using namespace std;

int main(){

    /*TIPOS DE INCREMENTO E DECREMENTO
    n1=n1+10     n1+=10   Adição
    n1=n1-10     n1-=10   Subtração
    n1=n1*10     n1*=10   Multiplicação
    n1=n1/10     n1/=10   Divisão
    n1++         n1--     Pós-fixado
    ++n1         --n1     Pré-fixado*/

    int n1 = 10;

    cout << "Incremento pré-fixado: " << ++n1 << "\n\n";
    /* Pós-fixado (n1++): Neste caso, o valor de n1 é primeiro utilizado na expressão e depois incrementado em 1. Isso significa que o valor de n1 antes do incremento é usado na operação atual, e só então n1 é incrementado. Portanto, se n1 for inicialmente 10, ele será impresso como 11, pois n1 é primeiro usado como 10 e depois incrementado em 1.

    Pré-fixado (++n1): Aqui, o valor de n1 é incrementado em 1 primeiro e depois utilizado na expressão. Isso significa que n1 é incrementado antes de ser usado na operação atual. Portanto, se n1 for inicialmente 10, ele será impresso como 11, pois n1 é incrementado em 1 e depois usado na operação atual.*/

    return 0;
}
