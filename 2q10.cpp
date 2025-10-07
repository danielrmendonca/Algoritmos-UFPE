#include <iostream>
#include <cstdlib>

using namespace std;

int main() {
    int total_votos;

    cin >> total_votos;

    int* contadores = (int*)calloc(5, sizeof(int));

    if (contadores == NULL) {
        cout << "Erro ao alocar memoria!" << endl;
        return 1;
    }

    for (int i = 0; i < total_votos; i++) {
        int voto;
        cin >> voto;

        if (voto >= 1 && voto <= 5) {
            contadores[voto - 1]++;
        }
    }

    for (int i = 0; i < 5; i++) {
        cout << contadores[i] << endl;
    }

    free(contadores);

    return 0;
}
