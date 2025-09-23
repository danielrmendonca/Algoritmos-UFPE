#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

float MediaSono (const vector<float>& horas) {
    float somaTotal = 0.0;
    for (int i = 0; i < horas.size(); i++) {
        somaTotal += horas[i];
    }
    return somaTotal / horas.size();
}

void AlertaSono (const vector<float>& horas, float media) {
    vector<string> diasSemana = {"Domingo", "Segunda", "Terca", "Quarta", "Quinta", "Sexta", "Sabado"};
    
    cout << "Atencao! Judite dormiu abaixo da media semanal nos dias: " << endl;
    for (int i = 0; i < horas.size(); i++) {
        if (horas[i] < media) {
            cout << diasSemana[i] << endl;
        }
    }
}

int main(){
    vector<float> horasSemana(7);
    for (int i = 0; i < 7; i++) {
        cin >> horasSemana[i];
    }

    float media = MediaSono(horasSemana);

    cout << fixed << setprecision(2);

    cout << "Media semanal de sono: " << media << " horas" << endl;

    if (media >= 8.0) {
        cout << "A media esta dentro do esperado de pelo menos 8 horas!" << endl;
    } else {
        cout << "A media esta fora do esperado de pelo menos 8 horas!" << endl;
    }

    for (int i = 0; i < horasSemana.size(); i++) {
        if (horasSemana[i]< media){
            AlertaSono(horasSemana, media);
            break;
        }
    }
    

    return 0;
}