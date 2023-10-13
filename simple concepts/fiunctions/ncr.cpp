#include <iostream>
using namespace std;

long long factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }

    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

long long ncr(int n, int r) {
    if (r > n) {
        return 0;  // Invalid input
    }

    long long nf = factorial(n);
    long long nrf = factorial(n - r);
    long long rf = factorial(r);
    long long ans = nf / (nrf * rf);
    return ans;
}
    
int main() {
    int n, r;
    cout << "Enter the value of n and r to find its ncr: ";
    cin >> n >> r;

    if (n < 0 || r < 0) {
        cout << "Invalid input. Please enter non-negative values." << endl;
        return 1;
    }

    cout << "The answer is: " << ncr(n, r) << endl;
    return 0;
}
