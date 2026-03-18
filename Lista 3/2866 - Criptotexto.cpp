/******************************************************************************

César é um detetive que investiga uma série de roubos que acontecem em sua cidade.
Em todo lugar que um crime acontece, a pessoa que cometeu tal crime deixa uma mensagem escrita,
formada por letras maiúsculas e minúsculas. César conseguiu achar um padrão nestas mensagens e 
agora extrai um texto oculto em cada mensagem e pede a sua ajuda para tentar descobrir quem está
cometendo tais crimes.

Entrada
A entrada é composta por vários casos de teste. A primeira linha contém um número inteiro
C (2 <= C <= 99) relativo ao número de casos de teste. Nas C linhas seguintes, haverá mensagens
codificadas, todas com um mesmo padrão em relação ao exemplo abaixo.

Saída
Para cada caso de teste de entrada do seu programa, você deve imprimir o texto extraído da mensagem
original.

*******************************************************************************/
#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
    int C;
    if (!(cin >> C)) return 0;

    while (C--) {
        string entrada;
        cin >> entrada;

        // Percorre a string do fim para o começo
        for (int i = entrada.length() - 1; i >= 0; i--) {
            // Operador ternário: 
            // Se for minúscula, imprime a letra. 
            // Se não for, imprime uma string vazia "".
            cout << (islower(entrada[i]) ? string(1, entrada[i]) : "");
        }
        cout << endl;
    }
    return 0;
}