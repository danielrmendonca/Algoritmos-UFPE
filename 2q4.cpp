#include <iostream>
#include <string>
#include <vector>

using namespace std;

char* lerMensagem(int& quantidadePosicoes) {
    string entradaCompleta;
    cin >> entradaCompleta;

    const string terminador = "0000000000";
    
    size_t pos = entradaCompleta.find(terminador);

    if (pos == string::npos) {
        quantidadePosicoes = 0;
        return nullptr;
    }
    
    quantidadePosicoes = pos;

    if (quantidadePosicoes == 0) {
        return nullptr;
    }

    char* mensagem = new char[quantidadePosicoes];

    for (int i = 0; i < quantidadePosicoes; i++) {
        mensagem[i] = entradaCompleta[i];
    }

    return mensagem;
}

int main() {
    int tamanhoMensagem = 0;

    char* msg = lerMensagem(tamanhoMensagem);

    for (int i = 0; i < tamanhoMensagem; i++) {
        cout << msg[i];
    }
    cout << endl;

    if (msg != nullptr) {
        delete[] msg;
    }

    return 0;
}
