#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int number_of_inputs;
bool is_prime(long input);
long largest_prime_factor(long input);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    cin >> number_of_inputs;
    long inputs[number_of_inputs];
    for (int i = 0; i < number_of_inputs; i++) {
        cin >> inputs[i];
        cout << largest_prime_factor(inputs[i]) << endl;
    }
    return 0;
}

long largest_prime_factor(long input) {
    long max = 0;
    for (long i = sqrt(input); i > 1; i--) {
        if ((input % i) == 0) {
            long n = input / i;
            if (is_prime(n) && n > max){
                max = n; 
            } 
            if (is_prime(i) && i > max) {
                max = i;
            }
        }
    }
    if (max == 0) {
        return input;
    }
    return max;
}

bool is_prime(long number) {
    for (long i = sqrt(number); i > 1; i--) {
        if ((number % i) == 0) {
            return false;
        }
    }
    return true;
}
