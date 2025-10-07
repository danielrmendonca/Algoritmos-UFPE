#include <iostream>

using namespace std;

void contaDivisiveis(int m, int n, int &c) {
    if (m == 0) {
        return;
    }
    
    if (n == 0) {
        if (0 % m == 0) {
            c++;
        }
        return;
    }

    int numero_temp = n;
    while (numero_temp > 0) {
        int digito = numero_temp % 10;

        if (digito % m == 0) {
            c++;
        }

        numero_temp = numero_temp / 10;
    }
}

int main() {
    int n_entrada, m_entrada;
    
    int contador = 0;

    cin >> n_entrada >> m_entrada;

    contaDivisiveis(m_entrada, n_entrada, contador);

    cout << contador << endl;

    return 0;
}
