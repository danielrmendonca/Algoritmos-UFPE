#include <iostream>

using namespace std;

int main() {

    int a, b;
    cin >> a >> b;

    cout << "Inicial: " << a << " " << b << endl;

    int temp = a;
    a = b;
    b = temp;

    cout << "Final: " << a << " " << b << endl;

    return 0;
}