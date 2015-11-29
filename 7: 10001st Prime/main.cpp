#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

void calc_primes(vector<long>&primes);
bool is_prime(long N);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    
    vector<long> primes;
    calc_primes(primes);
    int T;
    cin >> T;
    long N[T];
    for (int i = 0; i < T; i++) {
        cin >> N[i];
        cout << primes[N[i] - 1] << endl;
    }
    return 0;
}

void calc_primes(vector<long>&primes) {
    long counter, number = 2;
    while (counter < 10001) {
        if (is_prime(number)) {
            primes.push_back(number);
            counter++;
        }
        number++;
    }
}

bool is_prime(long N) {
    for (long i = 2; i <= sqrt(N); i++) {
        if (N % i == 0) {
            return false;
        }
    }
    return true;
}
