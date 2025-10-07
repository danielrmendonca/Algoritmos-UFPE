#include <iostream>

using namespace std;

void calcular_media(int *ptrA, int *ptrB) {
    int valor_original_A = *ptrA;
    int valor_original_B = *ptrB;

    int soma = valor_original_A + valor_original_B;
    int media = soma / 2;
    int resto = soma % 2;

    if (valor_original_A < valor_original_B) {
        *ptrA = media;
        *ptrB = resto;
    } else {
        *ptrB = media;
        *ptrA = resto;
    }
}

int main() {
    int A, B;

    cin >> A >> B;

    calcular_media(&A, &B);

    cout << "A = " << A << endl;
    cout << "B = " << B << endl;

    return 0;
}
