#include <iostream>  // Inclui a biblioteca iostream para entrada e saída padrão

using namespace std;  // Usa o namespace std para evitar escrever std:: antes de cin, cout, etc.

int main() {  // Função principal do programa

    int matriz[3][4];  // Declara uma matriz de inteiros com 3 linhas e 4 colunas
    int l, c;  // Declara variáveis inteiras l (linha) e c (coluna) para uso como contadores

    // Loop aninhado para ler valores para a matriz
    for (l = 0; l < 3; l++) {  // Loop externo para percorrer as linhas (3 no total)
        for (c = 0; c < 4; c++) {  // Loop interno para percorrer as colunas (4 no total)
            cin >> matriz[l][c];  // Lê um valor inteiro e o armazena na posição matriz[l][c]
        }
    }
    
    // Loop aninhado para imprimir os valores da matriz
    for (l = 0; l < 3; l++) {  // Novo loop externo para percorrer as linhas da matriz
        for (c = 0; c < 4; c++) {  // Novo loop interno para percorrer as colunas da matriz
            cout << matriz[l][c] << " ";  // Imprime o valor da posição matriz[l][c] seguido de um espaço
        }
        cout << "\n";  // Após imprimir uma linha completa, imprime uma quebra de linha
    }

    return 0;  // Retorna 0 para indicar que o programa foi executado com sucesso
}
