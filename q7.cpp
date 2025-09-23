#include <iostream>
#include <iomanip> 
using namespace std;

int main() {

    int quantidadeFilhos;
    int quantidadeHectares;

    cin >> quantidadeFilhos;
    cin >> quantidadeHectares;

    double herancaPorFilho = static_cast<double>(quantidadeHectares) / quantidadeFilhos;

    int herancaLuiz = quantidadeHectares % quantidadeFilhos;

    cout << fixed << setprecision(2);

    cout << "Filhos: " << herancaPorFilho << endl;

    cout << "Luiz: " << herancaLuiz << endl;

    return 0;
}