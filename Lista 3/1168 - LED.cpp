/******************************************************************************

João quer montar um painel de leds contendo diversos números. 
Ele não possui muitos leds, e não tem certeza se conseguirá montar o número desejado. 
Considerando a configuração dos leds dos números abaixo, faça um algoritmo que ajude João
a descobrir a quantidade de leds necessário para montar o valor.

Entrada
A entrada contém um inteiro N, (1 ≤ N ≤ 1000) correspondente ao número de casos de teste, 
seguido de N linhas, cada linha contendo um número (1 ≤ V ≤ 10100) correspondente ao 
valor que João quer montar com os leds.

Saída
Para cada caso de teste, imprima uma linha contendo o número de leds que João precisa 
para montar o valor desejado, seguido da palavra "leds".

*******************************************************************************/
#include <iostream>
#include <string>

using namespace std;

int main() {
    int N;
    if (!(cin >> N)) return 0;

    while (N--) {
        string valor;
        cin >> valor;

        long long totalLeds = 0;

        for (char c : valor) {
            // O switch avalia o caractere diretamente
            switch (c) {
                case '1': totalLeds += 2; break;
                case '2': 
                case '3': 
                case '5': totalLeds += 5; break; // 2, 3 e 5 usam a mesma quantidade
                case '4': totalLeds += 4; break;
                case '6': 
                case '9': 
                case '0': totalLeds += 6; break; // 6, 9 e 0 usam a mesma quantidade
                case '7': totalLeds += 3; break;
                case '8': totalLeds += 7; break;
            }
        }

        cout << totalLeds << " leds" << endl;
    }

    return 0;
}