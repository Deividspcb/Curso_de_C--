#include <iostream>  // Inclui a biblioteca iostream para entrada e saída padrão

using namespace std;  // Usa o namespace std para evitar escrever std:: antes de cin, cout, etc.

int main() {  // Função principal do programa

    int vetor[5] = {11, 24, 38, 49, 59};  // Declara e inicializa um array de inteiros com 5 elementos

    int i;  // Declara uma variável inteira i para uso como contador no loop

    // Loop for para iterar através dos elementos do array
    // sizeof(vetor) retorna o tamanho total do array em bytes
    // Dividindo sizeof(vetor) por sizeof(int), obtém-se o número de elementos no array (5 neste caso)
    for (i = 0; i < sizeof(vetor) / sizeof(int); i++) {
        cout << vetor[i] << "\n";  // Imprime cada elemento do array seguido de uma quebra de linha
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
