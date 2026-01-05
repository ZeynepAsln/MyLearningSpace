#include <iostream>
using namespace std;

long long morsilValueSum(long long N) {
    long long sum = 0;
    for (long long i = 1; i <= N; i++) {
        long long oddFactor = i % 2 == 0 ? i / 2 : i;
        sum += oddFactor;
    }
    return sum;
}

int main() {
    long long N;
    cin >> N;
    cout << morsilValueSum(N) << endl;
    return 0;
}
