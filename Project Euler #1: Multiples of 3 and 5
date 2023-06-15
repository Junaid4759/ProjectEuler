#include <iostream>

using namespace std;

long long calculateSum(long long n) {
    n--;  // Exclude the number 'n' from the sum if it is divisible by 3 or 5

    long long sum3 = (3 * (n / 3) * (n / 3 + 1)) / 2;
    long long sum5 = (5 * (n / 5) * (n / 5 + 1)) / 2;
    long long sum15 = (15 * (n / 15) * (n / 15 + 1)) / 2;

    long long totalSum = sum3 + sum5 - sum15;
    return totalSum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;

        long long result = calculateSum(n);
        cout << result << endl;
    }

    return 0;
}
