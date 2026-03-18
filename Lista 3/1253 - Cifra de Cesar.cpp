/******************************************************************************

Júlio César usava um sistema de criptografia, agora conhecido como Cifra de César, 
que trocava cada letra pelo equivalente em duas posições adiante no alfabeto 
(por exemplo, 'A' vira 'C', 'R' vira 'T', etc.). Ao final do alfabeto nós voltamos para o começo,
isto é 'Y' vira 'A'. Nós podemos, é claro, tentar trocar as letras com quaisquer número de posições.

Entrada
A entrada contém vários casos de teste. A primeira linha de entrada contém um inteiro N 
que indica a quantidade de casos de teste. Cada caso de teste é composto por duas linhas. 
A primeira linha contém uma string com até 50 caracteres maiúsculos ('A'-'Z'), 
que é a sentença após ela ter sido codificada através desta Cifra de César modificada.
A segunda linha contém um número que varia de 0 a 25 e que representa quantas posições cada letra foi deslocada para a direita.

Saída
Para cada caso de teste de entrada, imprima uma linha de saída com o texto decodificado 
(transformado novamente para o texto original) conforme as regras acima e o exemplo abaixo.

*******************************************************************************/
#include <iostream>

using namespace std;

int main() {
    int n, p;
    string s;

    cin >> n;
    while (n--) {
        cin >> s >> p;
        for (char c : s) {
            char result = c - p;
            if (result < 'A') result += 26;
            cout << result;
        }
        cout << endl;
    }
    return 0;
}