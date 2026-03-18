/******************************************************************************

A descrição do problema, encontra no Beecrowd cod 1961-Pula Sapo.

*******************************************************************************/
#include <iostream>
#include <cmath>     // Para abs()
#include <algorithm> // Para max()

using namespace std;

int main() {
    int P, N;
    if (!(cin >> P >> N)) return 0;

    int canos[N];
    for (int i = 0; i < N; i++) cin >> canos[i];

    int maiorPulo = 0;

    // Percorre os canos calculando a maior distância entre eles
    for (int i = 0; i < N - 1; i++) {
        int diff = abs(canos[i+1] - canos[i]);
        maiorPulo = max(maiorPulo, diff); 
    }

    // Apenas um if-else no final para o resultado
    if (maiorPulo <= P) {
        cout << "YOU WIN" << endl;
    } else {
        cout << "GAME OVER" << endl;
    }

    return 0;
}
