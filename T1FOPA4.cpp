/*This task requires you to create 3 functions named as first_fn,
   second_fn and third_fn. Main will call first_fn, first_fn will call 
   second_fn and the second_fn  will call the third_fn. The first_fn is
   going to take 2 integer type numbers as input and send it to second_fn.
   The second_fn will receive the values from first_fn. it will sum the 
   received arguments and calculate cube of sum variable. The cube will
    be received by the he third_fn and it will check whether the number
   is priime or not. Main will display the result of cube and the prime number.*/

#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

void third_fn(int n) {
    if (isPrime(n)) {
        cout << "The number is prime." << endl;
    } else {
        cout << "The number is not prime." << endl;
    }
}

void second_fn(int a, int b) {
    int sum = a + b;
    int cube = pow(sum, 3);
    third_fn(cube);
}

void first_fn(int a, int b) {
    second_fn(a, b);
}

int main() {
    int a = 5;
    int b = 6;
    first_fn(a, b);
}