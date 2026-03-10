/******************************************************************************
Leia os quatro valores correspondentes aos eixos x e y de dois pontos quaisquer no plano,
p1(x1,y1) e p2(x2,y2) e calcule a distância entre eles, mostrando 4 casas decimais


Entrada
O arquivo de entrada contém duas linhas de dados. A primeira linha contém dois valores 
de ponto flutuante: x1 y1 e a segunda linha contém dois valores de ponto flutuante x2 y2.

Saída
Calcule e imprima o valor da distância segundo a fórmula fornecida, considerando 4 casas decimais.

*******************************************************************************/
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main (){

double x1, y1, x2, y2;
double distancia;

cin >> x1 >> y1;
cin >> x2 >> y2;

distancia =  sqrt(pow(x2-x1, 2) + pow(y2-y1, 2));

cout << fixed << setprecision(4) << distancia << endl;

    return 0;
}