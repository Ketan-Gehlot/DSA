#include<iostream>
using namespace std;
//isPrime is a fucntion which gives output in boolean value
bool isPrime(int n) {//passing n as a arugment 
    if (n <= 1) return false; // Numbers <= 1 are not prime
    for (int i = 2; i <= n / 2; i++) { // Check divisors up to n / 2
        if (n % i == 0) return false; // Found a divisor, not prime
    }
    return true; // No divisors found, n is prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isPrime(num)) {
        cout << num << " is a prime number." << endl;
    } else {
        cout << num << " is not a prime number." << endl;
    }
    return 0;
}
