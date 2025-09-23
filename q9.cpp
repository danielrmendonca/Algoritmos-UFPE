#include <iostream>
#include <iomanip> 

using namespace std;

int main() {

    double a = 1.5;
    double b = 4.0;
    double c = 2.0;
    double d = 3.0;
    double e = 1.2;
    double f = 4.3;

    double resultado_a = ((b * a) - c) / f;
    double resultado_b = (f * a) + (d / e);
    double resultado_c = (b * d) - (f / e);
    double resultado_d = (a / a) - c;

    cout << fixed << setprecision(16);

    cout << "a) " << resultado_a << endl;
    cout << "b) " << resultado_b << endl;
    cout << "c) " << resultado_c << endl;
    cout << "d) " << resultado_d << endl;

    return 0;
}