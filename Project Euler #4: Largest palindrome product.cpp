#include <iostream>
#include <vector>
using namespace std;

bool isPalindrome(int num) {
    int reversed = 0;
    int original = num;

    while (num > 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    return (original == reversed);
}

int largestPalindromeProduct(int n) {
    int maxNum = 0;
    int start = 100; // Minimum 3-digit number
    int end = 999;   // Maximum 3-digit number

    // Find the largest palindrome product less than n
    for (int i = end; i >= start; i--) {
        for (int j = end; j >= i; j--) {
            int product = i * j;
            if (product < n && product > maxNum && isPalindrome(product)) {
                maxNum = product;
                break;
            }
        }
    }

    return maxNum;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        int result = largestPalindromeProduct(n);
        cout << result << endl;
    }

    return 0;
}
