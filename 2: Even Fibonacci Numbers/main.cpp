#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int number_of_inputs;
long sum_even_fib(long input);

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    cin >> number_of_inputs;
    long inputs[number_of_inputs];
    for (int i = 0; i < number_of_inputs; i++) {
        cin >> inputs[i];
        cout << sum_even_fib(inputs[i]) << endl;
    }
    return 0;
}

long sum_even_fib(long input) {
    long sum = 0;
    long fib_one = 1; 
    long fib_two = 2;
    while (fib_two < input) {
        if ((fib_two % 2) == 0) {
            sum += fib_two;
        }
        
        long temp = fib_two;
        fib_two += fib_one;
        fib_one = temp;
    }
    
    return sum;
}
