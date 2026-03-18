/******************************************************************************

A seguinte sequência de números 0 1 1 2 3 5 8 13 21... é conhecida como série de Fibonacci.
Nessa sequência, cada número, depois dos 2 primeiros, é igual à soma dos 2 anteriores. 
Escreva um algoritmo que leia um inteiro N (N < 46) e mostre os N primeiros números dessa série.

Entrada
O arquivo de entrada contém um valor inteiro N (0 < N < 46).

Saída
Os valores devem ser mostrados na mesma linha, separados por um espaço em branco. 
Não deve haver espaço após o último valor.

*******************************************************************************/
#include <iostream>

using namespace std;

int main (){

int n;
int anterior = 0, atual = 1, proximo;
    cin >> n;

for (int i = 0; i < n;  i++){

cout << anterior;

if (i < n - 1) {
    cout << " ";
} else {
     cout << endl;
}
        
proximo = anterior + atual;
        anterior = atual;
        atual = proximo;
        
}

    return 0;
}