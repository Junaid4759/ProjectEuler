#include <iostream>
using namespace std;

long long gcd(long long a, long long b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long lcm(long long a, long long b) {
    return (a * b) / gcd(a, b);
}

long long smallestMultiple(int n) {
    long long result = 1;

    // Calculate the LCM for all numbers from 1 to n
    for (int i = 1; i <= n; i++) {
        result = lcm(result, i);
    }

    return result;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        long long result = smallestMultiple(n);
        cout << result << endl;
    }

    return 0;
}
