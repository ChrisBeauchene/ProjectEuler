#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long answer(long N);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int T;
    cin >> T;
    long inputs[T];
    for (int i = 0; i < T; i++) {
        cin >> inputs[i];
        cout << answer(inputs[i]) << endl;
    }
    return 0;
}

long answer(long N) {
    long sum_A = 0;
    for (int i = 1; i <= N; i++) {
        sum_A += (i * i);
    }
    
    long sum_B = (N * (N + 1)) / 2;
    sum_B *= sum_B;
    return (sum_B - sum_A);
}

