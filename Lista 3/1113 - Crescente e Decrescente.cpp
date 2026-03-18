/******************************************************************************

Leia uma quantidade indeterminada de duplas de valores inteiros X e Y. Escreva para cada X e Y 
uma mensagem que indique se estes valores foram digitados em ordem crescente ou decrescente.

Entrada
A entrada contém vários casos de teste. Cada caso contém dois valores inteiros X e Y. 
A leitura deve ser encerrada ao ser fornecido valores iguais para X e Y.

Saída
Para cada caso de teste imprima “Crescente”, caso os valores tenham sido digitados na ordem
crescente, caso contrário imprima a mensagem “Decrescente”.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){
    
int x, y;

cin >> x >> y;

while(x!=y){
 
    if(x<y)
    
    cout << "Crescente" << endl;
    
    else
    
    cout << "Decrescente" << endl;
    
    cin >> x >> y;
}    
    return 0;
}