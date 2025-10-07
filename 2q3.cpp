#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

double* encontraNaoRepetidos(const double* sequencia, int tamanhoEntrada, int& tamanhoSaida) {

    vector<double> naoRepetidosTemp;

    for (int i = 0; i < tamanhoEntrada; i++) {
        double numeroAtual = sequencia[i];
        int contagem = 0;

        for (int j = 0; j < tamanhoEntrada; j++) {
            if (sequencia[j] == numeroAtual) {
                contagem++;
            }
        }

        if (contagem == 1) {
            naoRepetidosTemp.push_back(numeroAtual);
        }
    }

    tamanhoSaida = naoRepetidosTemp.size();

    if (tamanhoSaida == 0) {
        return nullptr;
    }

    double* resultadoFinal = new double[tamanhoSaida];

    for (int i = 0; i < tamanhoSaida; i++) {
        resultadoFinal[i] = naoRepetidosTemp[i];
    }

    return resultadoFinal;
}

int main() {
    int n;
    cin >> n;

    double* entrada = new double[n];
    for (int i = 0; i < n; i++) {
        cin >> entrada[i];
    }

    int tamanhoResultado = 0;
    double* resultado = encontraNaoRepetidos(entrada, n, tamanhoResultado);

    cout << fixed << setprecision(4);

    cout << "[";
    for (int i = 0; i < tamanhoResultado; i++) {
        cout << resultado[i];

        if (i < tamanhoResultado - 1) {
            cout << ", ";
        }
    }
    cout << "]" << endl;

    delete[] entrada;
    delete[] resultado;

    return 0;
}
