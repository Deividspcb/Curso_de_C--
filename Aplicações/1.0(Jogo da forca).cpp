#include <iostream>
#include <cstdlib> // Para usar system("cls") ou system("clear")

using namespace std;

int main() {
    
    char palavra[30], letra[1], secreta[30]; // Declaração dos arrays de caracteres
    int tam, i, chances, acertos; // Variáveis inteiras para tamanho da palavra, contadores, chances e acertos
    bool acerto; // Variável booleana para indicar se houve acerto
    char opc;

    do {
        chances = 6; // Número inicial de chances
        tam = 0; // Inicializa o tamanho da palavra
        i = 0; // Inicializa o contador
        acerto = false; // Inicializa a variável de acerto como falso
        acertos = 0; // Inicializa o número de acertos como zero

        cout << "Digite a palavra secreta:" << "\n"; // Solicita ao usuário para digitar a palavra secreta
        cin >> palavra; // Lê a palavra secreta fornecida pelo usuário
        system("cls"); // Limpa a tela (ou system("clear") para sistemas Unix-like)

        // Calcula o tamanho da palavra secreta
        while (palavra[i] != '\0') {
            i++;
            tam++;
        }

        // Inicializa a palavra secreta 'secreta' com traços (indicando letras ainda não descobertas)
        for (i = 0; i < tam; i++) {
            secreta[i] = '_';
        }

        // Loop principal do jogo: continua enquanto há chances e ainda não foram descobertas todas as letras
        while ((chances > 0) && (acertos < tam)) {
            cout << "Chances restantes: " << chances << "\n"; // Mostra as chances restantes
            cout << "Palavra secreta: ";
            for (i = 0; i < tam; i++) {
                cout << secreta[i]; // Mostra a palavra secreta até agora
            }
            cout << "\n\nDigite uma letra: ";
            cin >> letra[0]; // Lê a letra fornecida pelo jogador

            // Verifica se a letra fornecida está na palavra secreta
            for (i = 0; i < tam; i++) {
                if (palavra[i] == letra[0]) { // Se a letra foi encontrada na palavra secreta
                    acerto = true; // Marca que houve um acerto
                    secreta[i] = palavra[i]; // Revela a letra na palavra secreta 'secreta'
                    acertos++; // Incrementa o número de acertos
                }
            }

            // Se não houve acerto, decrementa as chances
            if (!acerto) {
                chances--;
            }

            acerto = false; // Reseta a variável de acerto
            system("cls"); // Limpa a tela para mostrar a nova situação do jogo (ou system("clear") para sistemas Unix-like)
        }

        // Após sair do loop, verifica se o jogador ganhou ou perdeu
        if (acertos == tam) {
            cout << "Voce venceu!!!";
        } else {
            cout << "Voce perdeu!!!";
        }

        cout << "\nDeseja continuar (s/n)? ";
        cin >> opc; // Lê a resposta do usuário

        // Limpa a tela antes de continuar (ou system("clear") para sistemas Unix-like)
        system("cls");

    } while (opc == 's' || opc == 'S');

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
