#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;

    for (int a0 = 0; a0 < t; a0++) {
        long n;
        cin >> n;

        long sum = 0;
        long fib1 = 1;
        long fib2 = 2;

        // Generate Fibonacci sequence and calculate the sum of even-valued terms
        while (fib1 <= n) {
            if (fib1 % 2 == 0) {
                sum += fib1;
            }

            // Calculate the next Fibonacci number
            long nextFib = fib1 + fib2;
            fib1 = fib2;
            fib2 = nextFib;
        }

        cout << sum << endl;
    }

    return 0;
}
