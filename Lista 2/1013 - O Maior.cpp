/******************************************************************************

Faça um programa que leia três valores e apresente o maior dos três valores 
lidos seguido da mensagem “eh o maior”.

Entrada
O arquivo de entrada contém três valores inteiros.

Saída
Imprima o maior dos três valores seguido por um espaço e a mensagem "eh o maior".

*******************************************************************************/
#include <iostream>
#include <cmath>

using namespace std;

int main(){
    
   int a, b, c, maiorAB, maiorFinal;
    
cin >> a >> b >> c;

maiorAB = (a + b + abs(a - b)) / 2;

maiorFinal = (maiorAB + c + abs(maiorAB - c)) / 2;

cout << maiorFinal << " eh o maior" << endl;
    
    return 0;
}