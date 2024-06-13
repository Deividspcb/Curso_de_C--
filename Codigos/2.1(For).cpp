#include <iostream>

int main() {
    // Imprime uma mensagem inicial
    std::cout << "Vamos contar até 10!\n";

    // Loop for para contar até 10
    for (int i = 1; i <= 10; ++i) { // Inicia um loop que irá iterar de 1 até 10
        std::cout << i << std::endl; // Imprime o valor atual de i
    } // Fim do loop

    // Mensagem de conclusão
    std::cout << "Chegamos ao 10! Fim do jogo.\n";

    return 0;
}
