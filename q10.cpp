#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

struct Circuito {
    string nome;
    float tensao;
    float corrente;
    float potencia;
};

int main() {
    int n;
    cin >> n;

    vector<Circuito> circuitos(n);

    for (int i = 0; i < n; i++) {
        cin >> circuitos[i].nome;
        cin >> circuitos[i].tensao;
        cin >> circuitos[i].corrente;
    }

    for (int i = 0; i < n; i++) {
        circuitos[i].potencia = circuitos[i].tensao * circuitos[i].corrente;
    }

    //bubble sort
    bool troca = true;
    int i = 0;
    while (troca) {
        troca = false;
        for (int j = 0; j < n - i - 1; j++) {
            //se o circuito atual (j) tem potência menor que o próximo (j+1) eles trocam
            if (circuitos[j].potencia < circuitos[j + 1].potencia) {
                troca = true;
                Circuito temp = circuitos[j];
                circuitos[j] = circuitos[j + 1];
                circuitos[j + 1] = temp;
            }
        }
        i++;
    }

    cout << "Circuitos em ordem decrescente de potencia:" << endl;

    cout << fixed << setprecision(2);

    for (int i = 0; i < n; ++i) {
        cout << circuitos[i].nome << " - Potencia: " << circuitos[i].potencia << " W" << endl;
    }

    return 0;
}