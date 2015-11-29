#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

long get_smallest_number(long upper_limit);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int number_of_inputs;
    cin >> number_of_inputs;
    int inputs[number_of_inputs];
    for (int i = 0; i < number_of_inputs; i++) {
        cin >> inputs[i];
        cout << get_smallest_number(inputs[i]) << endl;
    }
    return 0;
}

long get_smallest_number(long upper_limit) {
    long smallest_number = upper_limit;
    bool searching = true;
    while (searching) {
        for (int i = 1; i <= upper_limit; i++) {
            if (smallest_number % i != 0) {
                smallest_number++;
                break;
            } else if ((i == upper_limit) && (smallest_number % i == 0)) {
                searching = false;
            }
        }
    }
    return smallest_number;
}

