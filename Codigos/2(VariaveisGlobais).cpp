#include <iostream>

using namespace std;

// Variável global
int globalVar = 5;

int main() {
    // Acesso à variável global dentro da função main
    cout << "Valor da variável global: " << globalVar << "\n";

    // Modificação da variável global
    globalVar = 10;

    cout << "Novo valor da variável global: " << globalVar << "\n";

/*globalVar é uma variável global, pois está definida fora de qualquer função.*/
    return 0;
}
