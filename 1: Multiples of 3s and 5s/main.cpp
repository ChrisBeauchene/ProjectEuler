#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int number_of_inputs;
long sum_factors(int input);

int main() {  
    cin >> number_of_inputs;
    int inputs[number_of_inputs];
    for (int i = 0; i < number_of_inputs; i++) {
        cin >> inputs[i];
        cout << sum_factors(inputs[i]) << endl;
    }
    
    return 0;
}

long sum_factors(int input) {
    
    // utilize O(1) time of sequential sum algorithm (1 + 2 + 3 + 4 + 5 + ... + n) = (n * ( n + 1)) /2
    // Find sum of 3's and sum of 5s separately. Then subtract sum of 15's.
    
    long n = (input % 5) ? (input / 5) : (input / 5 - 1);
    long sequential_sum = (n * (n + 1)) / 2;
    long sum_of_fives = sequential_sum * 5;
    
    n = (input % 3) ? (input / 3) : (input / 3 - 1 );
    sequential_sum = (n * (n + 1)) / 2;
    long sum_of_threes = sequential_sum * 3;
    
    n = (input % 15) ? (input / 15) : (input / 15 - 1 );
    sequential_sum = (n * (n + 1)) / 2;
    long sum_of_fifteens = (n * (n + 1)) /2 * 15;
    
    return ((sum_of_threes + sum_of_fives) - sum_of_fifteens);
}
