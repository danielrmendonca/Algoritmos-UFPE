#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
    int n;

    cin >> n;

    double* temperaturas = (double*)malloc(n * sizeof(double));

    if (temperaturas == NULL) {
        cout << "Erro ao alocar memoria!" << endl;
        return 1;
    }

    double soma = 0.0;
    for (int i = 0; i < n; i++) {
        cin >> temperaturas[i];
        soma += temperaturas[i];
    }

    double media = soma / n;

    cout << fixed << setprecision(2) << media << endl;

    free(temperaturas);

    return 0;
}
