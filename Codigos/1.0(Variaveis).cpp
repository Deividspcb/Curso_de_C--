#include <iostream>

using namespace std;

int main() {
    // Declaração de variáveis
    int idade; // Variável para armazenar a idade
    float altura; // Variável para armazenar a altura
    char genero; // Variável para armazenar o gênero

    // Solicita ao usuário que insira informações
    cout << "Digite sua idade: ";
    cin >> idade; // Lê a idade fornecida pelo usuário

    cout << "Digite sua altura (em metros): ";
    cin >> altura; // Lê a altura fornecida pelo usuário

    cout << "Digite seu gênero (M/F): ";
    cin >> genero; // Lê o gênero fornecido pelo usuário

    // Imprime as informações fornecidas pelo usuário
    cout << "\nInformacoes fornecidas:\n";
    cout << "Idade: " << idade << " anos\n";
    cout << "Altura: " << altura << " metros\n";
    cout << "Genero: " << genero << "\n";

    /*int, float e char são tipos de variáveis que armazenam números inteiros, números de ponto flutuante e caracteres, respectivamente.
idade, altura e genero são nomes de variáveis.
cin é usado para receber entrada do usuário e armazená-la nas variáveis.
cout é usado para exibir saída para o usuário.*/

    return 0;
}
