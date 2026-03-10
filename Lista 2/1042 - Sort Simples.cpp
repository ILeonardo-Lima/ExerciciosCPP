/******************************************************************************

Leia 3 valores inteiros e ordene-os em ordem crescente. No final, mostre os valores 
em ordem crescente, uma linha em branco e em seguida, os valores na sequência como foram lidos.

Entrada
A entrada contem três números inteiros.

Saída
Imprima a saída conforme foi especificado.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    
int a, b, c;
int menor, maior, meio; 

cin >> a >> b >> c;

menor = (a<b && a<c) ? a : (b<c ? b : c);

maior = (a>b && a>c) ? a : (b>c ? b : c);

meio = (a+b+c)-menor-maior;

cout << menor << endl << meio << endl << maior << endl;

cout << endl;

cout << a << endl << b << endl << c << endl;
    
    return 0;
}