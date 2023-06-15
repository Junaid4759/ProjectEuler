#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if (n <= 1) {
        return false;
    }
    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

long long largestPrimeFactor(long long n) {
    long long largestFactor = -1;
    while (n % 2 == 0) {
        largestFactor = 2;
        n /= 2;
    }
    for (long long i = 3; i * i <= n; i += 2) {
        while (n % i == 0) {
            largestFactor = i;
            n /= i;
        }
    }
    if (n > 2) {
        largestFactor = n;
    }
    return largestFactor;
}

int main() {
    int t;
    cin >> t;
    
    for (int a0 = 0; a0 < t; a0++) {
        long long n;
        cin >> n;
        
        long long largestFactor = largestPrimeFactor(n);
        cout << largestFactor << endl;
    }
    
    return 0;
}
