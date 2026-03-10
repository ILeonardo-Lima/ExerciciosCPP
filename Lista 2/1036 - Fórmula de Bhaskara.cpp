/******************************************************************************

Leia 3 valores de ponto flutuante e efetue o cálculo das raízes da equação de Bhaskara. 
Se não for possível calcular as raízes, mostre a mensagem correspondente “Impossivel calcular”, 
caso haja uma divisão por 0 ou raiz de numero negativo.

Entrada
Leia três valores de ponto flutuante (double) A, B e C.

Saída
Se não houver possibilidade de calcular as raízes, apresente a mensagem "Impossivel calcular". Caso contrário, imprima o resultado das raízes com 5 dígitos após o ponto, com uma mensagem correspondente conforme exemplo abaixo. Imprima sempre o final de linha após cada mensagem.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

double a, b, c;
double delta, r1, r2;

cin >> a >> b >> c;

delta = pow(b,2) - 4*a*c;

r1 = (-b + sqrt(delta)) / (2 * a);

r2 = (-b - sqrt(delta)) / (2 * a);

if (a == 0 || (delta) < 0){

cout <<  "Impossivel calcular" << endl;
    
} else {

    cout << fixed << setprecision(5) << "R1 = " << r1 << endl
         << "R2 = " << r2 << endl;
}

    return 0;
}