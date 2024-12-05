#include <iostream>
using namespace std;

int poteng(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    if (exp % 2 == 0) {
        int m = poteng(base, exp / 2);
        return m * m;
    } else {
        return base * poteng(base, exp - 1);
    }
}

int main() {
    int x, y, z;
    
    cout << "Podaj podstawe: ";
    cin >> x;
    cout << "Podaj wykladnik: ";
    cin >> y;
    z = poteng(x, y);
    cout << x << " do potegi " << y << " to: " << z << endl;
    return 0;
}