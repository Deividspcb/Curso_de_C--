#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int num;
    char opc;
    inicio: // Define um rótulo de início para o goto

    system("cls"); // Limpa a tela do console

    cout << "Digite um numero: ";
    cin >> num;

    // Condição para verificar se num está no intervalo (5, 6) ou (11, 13)
    if(num > 4 && num < 7 or (num > 10 && num < 14)){
        cout << "\nValor aceito\n"; // Se a condição for verdadeira, imprime "Valor aceito"
    }else{
        cout <<"\nNao aceito\n"; // Se a condição for falsa, imprime "Não aceito"
    }
    
    cout << "Deseja continuar (s/n)? "; // Pergunta ao usuário se deseja continuar
    cin >> opc; // Lê a resposta do usuário

    if (opc == 's' || opc == 'S') { // Verifica se o usuário quer continuar (s ou S)
        goto inicio; // Se sim, volta para o rótulo "inicio" (uso de goto, geralmente não é uma boa prática)
    }

/*O operador && é usado para verificar se duas condições são ambas verdadeiras.
O operador || é usado para verificar se pelo menos uma das condições é verdadeira.
No código, && é usado para garantir que o número esteja no intervalo (5, 6) e também para o intervalo (11, 13).
O || é usado para combinar os dois intervalos.
Comentários explicativos adicionados ao código.*/



    return 0;
}
