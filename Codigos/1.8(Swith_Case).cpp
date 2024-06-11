#include <iostream> 

using namespace std;

int main(){

    int val; // Declaração da variável para armazenar a escolha do usuário
    int val1;

    // Solicita ao usuário que selecione um meio de transporte e fornece opções
    cout << "Selecione um meio de transporte: \n";
    cout << "1 = Carro, 2 = Moto, 3 = Aviao, 4 = Helicoptero\n";
    cin >> val; // Lê a escolha do usuário

    // Switch statement: avalia a variável val e executa o bloco de código correspondente
    switch (val){
    // Casos para transporte terrestre (Carro ou Moto)
    case 1:
    case 2:
        cout <<"Transporte Terrestre\n"; // Imprime que é um transporte terrestre
        // Switch interno para determinar qual meio de transporte terrestre foi selecionado
        switch (val){
            case 1:
                cout <<"Carro\n"; // Se val for 1, imprime que é um carro
                break; // Sai do switch interno
            case 2:
                cout << "Moto\n"; // Se val for 2, imprime que é uma moto
                break; // Sai do switch interno
        }
        break; // Sai do switch externo
    // Casos para transporte aéreo (Aviao ou Helicoptero)
    case 3:
    case 4:
        cout <<"Transporte Aereo\n"; // Imprime que é um transporte aéreo
        // Switch interno para determinar qual meio de transporte aéreo foi selecionado
        switch (val){
            case 3:
                cout <<"Aviao\n"; // Se val for 3, imprime que é um avião
                break; // Sai do switch interno
            case 4:
                cout << "Helicoptero\n"; // Se val for 4, imprime que é um helicóptero
                break; // Sai do switch interno
        }
        break; // Sai do switch externo
    // Caso padrão para lidar com opções inválidas
    default:
        cout << "Opcao invalida\n"; // Se val não corresponder a nenhum caso anterior, imprime que é uma opção inválida
    }
    
/*O switch é uma estrutura de controle que avalia a expressão (nesse caso, val) e executa o bloco de código correspondente a um dos casos case.
Os casos case são etiquetas que especificam os possíveis valores que a expressão no switch pode ter e o código que deve ser executado se a expressão for igual a esse valor.
No exemplo, val é avaliado dentro do switch e comparado com os casos case fornecidos. Dependendo do valor de val, o programa executa o bloco de código associado ao caso correspondente.
Se val corresponder a nenhum dos casos case, o bloco de código no default é executado. Isso é útil para lidar com opções inválidas ou inesperadas fornecidas pelo usuário*/

    return 0; // Retorna 0 para indicar que o programa foi executado com sucesso
}
