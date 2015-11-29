#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>

using namespace std;

long multiply_window(string window, int streak);
long largest_product(string number, int length, int streak);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int T;
    cin >> T;
    
    int K[2][T];
    string N[T];
    for (int i = 0; i < T; i++) {
        cin >> K[0][i];
        cin >> K[1][i];
        cin >> N[i];
        cout << largest_product(N[i], K[0][i], K[1][i]) << endl;
    }
    return 0;
}

long largest_product(string number, int length, int streak) {
    int max = 0;
    for (int i = 0; i <= (length - streak); i++) {
        long product = multiply_window(number.substr(i, streak), streak);
        if (product > max) {
            max = product;
        }
    }
    return max;
}

long multiply_window(string window, int streak) {
    long product = 1;
    for (int i = 0; i < streak ; i++) {
        product *= window[i] - '0';
    }
    return product;
}
