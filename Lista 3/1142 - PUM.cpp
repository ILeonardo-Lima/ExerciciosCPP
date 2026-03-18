/******************************************************************************

Escreva um programa que leia um valor inteiro N. Este N é a quantidade de linhas
de saída que serão apresentadas na execução do programa.

Entrada
O arquivo de entrada contém um número inteiro positivo N.

Saída
Imprima a saída conforme o exemplo fornecido.

*******************************************************************************/
#include <iostream>

using namespace std;

int main (){

    int n;
    int numero = 1; 

    cin >> n;

for (int i = 0; i < n; i++){

cout << numero << " " << numero + 1 << " " << numero + 2 << " " << "PUM" << endl;

    numero +=4;
    
}

    return 0;
}