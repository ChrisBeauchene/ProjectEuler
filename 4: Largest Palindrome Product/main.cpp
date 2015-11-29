#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int number_of_inputs;

long get_largest_palindrome(long input);

bool has_three_digit_factors(long input);
bool is_palindrome(string forward);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    cin >> number_of_inputs;
    long inputs[number_of_inputs];
    for (int i = 0; i < number_of_inputs; i++) {
        cin >> inputs[i];     
        cout << get_largest_palindrome(inputs[i]) << endl;
    }
    return 0;
}

long get_largest_palindrome(long input) {
    long err = 0;
    for (int i = input; i > 10000; i--) {
        if (is_palindrome(to_string(i))) {
            if (has_three_digit_factors(i)) {
                return i;
            }
        }
    }
    return err;
}

bool has_three_digit_factors(long input) {
    for (int i = 1000; i > 99; i--) {
        if (input % i == 0) {
            long j = input / i;
            if ((j > 99) && (j < 1000)) {
                return true;
            }
        }
    }
    return false;
}

bool is_palindrome(string forward) {
    string reversed = forward;
    reverse(reversed.begin(), reversed.end());
    return (forward.compare(reversed) == 0);
}
