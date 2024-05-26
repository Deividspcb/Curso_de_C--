#include <iostream> // Inclui a biblioteca de entrada e saída de dados

using namespace std; // Permite o uso direto de cout, cin, e endl sem a necessidade de especificar std::

int main() {
    int idade; // Declaração da variável idade

    cout << "Digite a sua idade: "; // Solicita que o usuário insira sua idade
    cin >> idade; // Lê a idade inserida pelo usuário e armazena na variável idade

    if (idade >= 18) { // Verifica se a idade inserida é maior ou igual a 18
        cout << "Você é maior de idade.\n"; // Se verdadeiro, imprime que o usuário é maior de idade
    } else { // Se não
        cout << "Você é menor de idade.\n"; // Imprime que o usuário é menor de idade
    }

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
