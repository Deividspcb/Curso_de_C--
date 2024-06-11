#include <iostream>
using namespace std;

int main() {

    int num = 20; // Inicializa a variável num como 20

    // O bloco do-while executa o código dentro das chaves pelo menos uma vez,
    // e então verifica a condição do loop após cada execução. 
    // Isso significa que o código dentro das chaves será executado pelo menos uma vez,
    // mesmo que a condição seja falsa na primeira vez.

    do {
        cout << "Deivid Lindao - " << num << "\n"; // Imprime "Deivid Lindao - " seguido pelo valor atual de num
        num++; // Incrementa o valor de num em 1
    } while (num < 20); // Verifica se num é menor que 20. Se for verdadeiro, o loop continua; caso contrário, o loop termina.

    cout << "\nRotina Finalizada"; // Imprime "Rotina Finalizada" após o loop do-while ser encerrado.

    return 0; // Retorna 0 para indicar que o programa foi concluído com sucesso.
}
