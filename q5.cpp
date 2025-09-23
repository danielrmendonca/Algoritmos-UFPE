#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct Estudante {
    string nome;
    string curso;
    int idade;
    float nota;
};

int main() {

    Estudante estudante1, estudante2;

    getline(cin, estudante1.nome);
    getline(cin, estudante1.curso);
    cin >> estudante1.idade;
    cin >> estudante1.nota;
    
    cin.ignore();
    
    getline(cin, estudante2.nome);
    getline(cin, estudante2.curso);
    cin >> estudante2.idade;
    cin >> estudante2.nota;

    cout << fixed << setprecision(1);

    cout << "Estudante 1:" << endl;
    cout << "Nome: " << estudante1.nome << endl;
    cout << "Curso: " << estudante1.curso << endl;
    cout << "Idade: " << estudante1.idade << endl;
    cout << "Nota: " << estudante1.nota << endl;
    cout << endl;

    cout << "Estudante 2:" << endl;
    cout << "Nome: " << estudante2.nome << endl;
    cout << "Curso: " << estudante2.curso << endl;
    cout << "Idade: " << estudante2.idade << endl;
    cout << "Nota: " << estudante2.nota << endl;
    cout << endl;

    float media = (estudante1.nota + estudante2.nota) / 2.0;
    cout << "Media geral: " << media << endl;

    return 0;
}
