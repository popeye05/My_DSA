#include <bits/stdc++.h>
using namespace std;

bool isprime(int n) {
    if (n < 2) return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Consecutive Prime Sum
int cpsum(int n) {
    vector<int> primes;
    for (int i = 2; i <= n; i++) {
        if (isprime(i)) primes.push_back(i);
    }

    int count = 0, sum = 0;
    for (int i = 0; i < primes.size(); i++) {
        sum += primes[i];       // keep adding consecutive primes
        if (sum > n) break;     // stop if sum exceeds n
        if (isprime(sum) && sum >= 3) {
            count++;
        }
    }
    return count;
}

int main() {
    int n;
    cin >> n;
    int x = cpsum(n);
    cout << x << endl;
    return 0;
}
