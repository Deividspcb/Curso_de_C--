#include <iostream>
#include <cstdlib>

using namespace std;

int main (){
    int n1, n2, res;
    char opc;

    inicio: // Define um rótulo de início para o goto

    system("cls"); // Limpa a tela do console

    cout << "Digite o valor da n1: "; // Solicita o primeiro número
    cin >> n1; // Lê o primeiro número

    cout << "Digite o valor da n2: "; // Solicita o segundo número
    cin >> n2; // Lê o segundo número

    res = n1 + n2; // Calcula a soma dos dois números

    if (res >= 60) { // Verifica se o resultado é maior ou igual a 60
        cout << "Aprovado.\n"; // Se for, imprime "Aprovado"
    }
    else if (res >= 40) { // Se não, verifica se o resultado é maior ou igual a 40
        cout << "Recuperação.\n"; // Se for, imprime "Recuperação"
    }
    else { // Se não for nenhum dos casos anteriores
        cout << "Reprovado.\n"; // Imprime "Reprovado"
    }

    cout << "Deseja continuar (s/n)? "; // Pergunta ao usuário se deseja continuar
    cin >> opc; // Lê a resposta do usuário

    if (opc == 's' or opc == 'S') { // Verifica se o usuário quer continuar (s ou S)
        goto inicio; // Se sim, volta para o rótulo "inicio" (uso de goto, geralmente não é uma boa prática)
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
