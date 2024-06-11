#include <iostream>

using  namespace std;

int main(){

    int n1,n2,nota;
    string res;

    cout << "Digite n1: ";
    cin >> n1;
    
    cout << "Digite n2: ";
    cin >> n2;

    nota = n1+n2; // Calcula a nota somando n1 e n2

    // Operador ternário:
    // Sintaxe: (condição) ? expressão_se_verdadeiro : expressão_se_falso
    // Se a condição for verdadeira, a expressão_se_verdadeiro é avaliada, caso contrário, a expressão_se_falso é avaliada.
    // Aqui, estamos usando o operador ternário para determinar se o aluno está aprovado ou reprovado com base na nota.

    // Exemplo de uso do operador ternário:
    // res = (nota >= 60) ? "Aprovado" : "Reprovado";
    // Se nota for maior ou igual a 60, res recebe "Aprovado", caso contrário, res recebe "Reprovado".

    // Comentado:
    res=(nota >= 60) ? "Aprovado" : "Reprovado"; // Determina se o aluno está aprovado ou reprovado com base na nota

    cout << "Situacao do aluno: " << res << "\n"; // Imprime a situação do aluno

    return 0;
}
