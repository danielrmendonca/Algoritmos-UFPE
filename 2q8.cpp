#include <iostream>

using namespace std;

void ordenaMaiorMenor(int &primeiro, int &segundo) {
    if (primeiro < segundo) {
        int temp = primeiro;
        primeiro = segundo;
        segundo = temp;
    }
}

int main() {
    int valor1, valor2;

    cin >> valor1 >> valor2;

    ordenaMaiorMenor(valor1, valor2);

    cout << valor1 << endl;
    cout << valor2 << endl;

    return 0;
}
