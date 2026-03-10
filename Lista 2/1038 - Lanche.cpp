/******************************************************************************

Escreva um programa que leia o código de um item e a quantidade deste item. 
A seguir, calcule e mostre o valor da conta a pagar.

Entrada
O arquivo de entrada contém dois valores inteiros correspondentes ao código e à quantidade de um item.

Saída
O arquivo de saída deve conter a mensagem "Total: R$ " seguido pelo valor a ser pago, com 2 casas após o ponto decimal.

*******************************************************************************/
#include <iostream>
#include <iomanip>

using namespace std;


int main(){

int cod, quant;
double preco, total;

    cin >> cod >> quant;


switch (cod) {
    case 1:
        preco = 4.00;
        total = quant * preco;
        cout << fixed << setprecision(2) << "Total: R$ " << total << endl;
        break;
    case 2:
        preco = 4.50;
        total = quant * preco;
        cout << fixed << setprecision(2) << "Total: R$ " << total << endl; 
        break;
    case 3:
        preco = 5.00;
        total = quant * preco;
        cout << fixed << setprecision(2) <<  "Total: R$ " << total << endl;
        break;
    case 4:
        preco = 2.00;
        total = quant * preco;
        cout << fixed << setprecision(2) <<  "Total: R$ " << total << endl; 
        break;
    case 5:
        preco = 1.50;
        total = quant * preco;
        cout << fixed << setprecision(2) <<  "Total: R$ " << total << endl;
        break;
}
    return 0;
}