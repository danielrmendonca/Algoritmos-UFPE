#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Produto {
    string nome;
    float preco;
    int quantidade;
};

void reajustar_preco(struct Produto *p, float percentual) {
    p->preco *= ((100.0f + percentual) / 100.0f);
}

int main() {

    const int n_produtos = 3;

    Produto produtos[n_produtos];

    for (int i = 0; i < n_produtos; i++) {
        cin >> produtos[i].nome;
        cin >> produtos[i].preco;
        cin >> produtos[i].quantidade;
    }

    float percentual_aumento = 10.0;

    for (int i = 0; i < n_produtos; i++) {
        reajustar_preco(&produtos[i], percentual_aumento);
    }

    cout << fixed << setprecision(2);

    for (int i = 0; i < n_produtos; i++) {
        cout << produtos[i].nome << ": " << produtos[i].preco << endl;
    }

    return 0;
}