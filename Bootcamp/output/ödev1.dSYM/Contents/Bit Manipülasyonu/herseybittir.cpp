#include <iostream>
#include <bitset>
#include <iomanip>

using namespace std;

int main() {
    int n = 78;
    long long b= 21342142342123213;

    cout <<left<< setw(20) << n << "'in 0 ve 1 olarak değeri: ";
    cout << bitset<32>(n) << endl;

    cout << left << setw(20) << b << "'ün 0 ve 1 olarak değeri: ";
    cout << bitset<64>(b) << endl;

    cout << left << setw(20) << n << "'in bit olarak kapladığı alan: ";
    cout << sizeof(n) << endl;

    cout << left << setw(20) << b << "'ün bit olarak kapladığı alan: ";
    cout << sizeof(b) << endl;

    return 0;
}
