#include <iostream>
#include <vector>

using namespace std;

int* lerVetor(int& tamanho) {
    vector<int> temp;
    int numero;

    while (cin >> numero) {
        temp.push_back(numero);

        if (cin.peek() == '\n') {
            break;
        }
    }

    tamanho = temp.size();

    if (tamanho == 0) {
        return nullptr;
    }

    int* vetorFinal = new int[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        vetorFinal[i] = temp[i];
    }

    return vetorFinal;
}

int* somaVetores(const int* a, const int* b, int tamanho) {
    int* c = new int[tamanho];
    for (int i = 0; i < tamanho; ++i) {
        c[i] = a[i] + b[i];
    }
    return c;
}

int main() {
    int tamanhoA = 0, tamanhoB = 0;

    int* a = lerVetor(tamanhoA);
    int* b = lerVetor(tamanhoB);

    if (tamanhoA != tamanhoB) {
        cout << "Vetores de tamanhos diferentes!" << endl;
    } else {
        int* c = somaVetores(a, b, tamanhoA);

        for (int i = 0; i < tamanhoA; ++i) {
            cout << c[i] << (i == tamanhoA - 1 ? "" : " ");
        }
        cout << endl;

        delete[] c;
    }

    delete[] a;
    delete[] b;

    return 0;
}
