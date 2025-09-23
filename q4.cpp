#include <iostream>
#include <cmath> 
#include <iomanip>

using namespace std;

double raizBesima(double a, double b) {
    return pow(a, 1.0 / b);
}

int main() {

    double a, b;
    cin >> a >> b;

    double resultado = raizBesima(a, b);

    cout << fixed << setprecision(2) << resultado << endl;

    return 0;
}