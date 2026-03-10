/******************************************************************************

Neste problema, você deverá ler 3 palavras que definem o tipo de animal possível 
segundo o esquema abaixo (esquema disponivel no beecrowd, pelo codigo 1049), da esquerda para a direita.  Em seguida conclua qual dos 
animais seguintes foi escolhido, através das três palavras fornecidas.

Entrada
A entrada contém 3 palavras, uma em cada linha, necessárias para identificar o animal segundo a figura acima, com todas as letras minúsculas.

Saída
Imprima o nome do animal correspondente à entrada fornecida.

*******************************************************************************/
#include <iostream>

using namespace std;

int main(){

string p1, p2, p3;

cin >> p1 >> p2 >> p3;

if (p1 == "vertebrado" && p2 == "ave" && p3 == "carnivoro"){

    cout << "aguia" << endl;
        
}else if (p2 == "ave" && p3 == "onivoro"){
    
    cout << "pomba" << endl;
    
}else if (p2 == "mamifero" && p3 == "onivoro"){

    cout << "homem" << endl;
    
}else if (p2 == "mamifero" && p3 == "herbivoro"){

    cout << "vaca" << endl;
    
}

if (p1 == "invertebrado" && p2 == "inseto" && p3 == "hematofago"){

    cout << "pulga" << endl;
    
}else if (p2 == "inseto" && p3 == "herbivoro"){

    cout << "lagarta" << endl;
    
}else if (p2 == "anelideo" && p3 == "hematofago"){

    cout << "sanguessuga" << endl;
    
}else if (p2 == "anelideo" && p3 == "onivoro"){
    
    cout << "minhoca" << endl;    
}

    return 0;
}