#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

long solve(long N);

int main() {
    int T;
    cin >> T;
    long N;
    for (int i = 0; i < T; i++) {
        cin >> N;
        cout << solve(N) << endl;
    }
    return 0;
}

long solve(long N) {
    long a, b, c;
    long max = -1;

    for (a = 1; a < N / 3; a++) {
        b = (((N - a) * (N - a)) - (a * a)) / (2 * (N - a));
        c = N - a - b;
        if ((c * c) == ((a * a) + (b * b))) {
            if (a * b * c > max)
                max = a * b * c;
        }
    }
    return max;
}
