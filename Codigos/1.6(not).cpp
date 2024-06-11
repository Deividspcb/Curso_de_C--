#include <iostream>
using namespace std;

int main(){

    int num;

    num = 1; // Definindo num como 1(boleana)
    if(num){ // Verificando se num é falso (0)
        cout << "\nVou ao clube\n"; // Se num for falso, imprime "Vou ao clube"
    }else{
        cout <<"\nVou ao cinema\n"; // Se num for verdadeiro, imprime "Vou ao cinema"
    }

    //O operador ! (not) é usado para negar uma expressão booleana, ou seja, inverter seu valor lógico.

    return 0;
}

