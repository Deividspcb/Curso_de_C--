#include <iostream>
using namespace std;

int main() {
    int num = 0; // Inicializa a variável num como 0
    
    // O loop while continuará executando enquanto a expressão cont++ < 20 for verdadeira.
    // cont++ incrementa o valor de cont após cada iteração do loop.
    // Ou seja, a condição é verificada antes de cont ser incrementado.

    while (num++ < 20) {
        cout << "Deivid Lindao - " << num << "\n"; // Imprime "Deivid Lindao - " seguido pelo valor atual de num
        if (num == 10) { // Se o valor de num for igual a 10, 
            break;; // O comando break encerra imediatamente o loop while.
                   // Isso significa que, quando num chegar a 10, o loop será interrompido e o controle passará para o código após o loop.
        }
    }
    
    cout << "\nRotina Finalizada\n"; // Imprime "Rotina Finalizada" após o loop while ser encerrado.

    return 0; // Retorna 0 para indicar que o programa foi concluído com sucesso.
}
