// Code : 
#include <stdio.h>
#include <math.h> // for sqrt function

// Function to check if a number is prime
int isPrime(int n) {
    if (n <= 1) return 0;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1;
}

// Function to calculate factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    unsigned long long fact = 1;
    for (int i = 2; i <= n; i++) {
        fact *= i;
    }
    return fact;
}

// Function to print prime factors of a number
void primeFactors(int n) {
    printf("Prime factors of %d are: ", n);
    while (n % 2 == 0) {
        printf("2 ");
        n /= 2;
    }
    for (int i = 3; i <= sqrt(n); i += 2) {
        while (n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }
    if (n > 2)
        printf("%d ", n);
    printf("\n");
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    // a) Square root of number
    printf("Square root of %d is: %.2f\n", n, sqrt(n));

    // b) Square of number
    printf("Square of %d is: %d\n", n, n * n);

    // c) Cube of number
    printf("Cube of %d is: %d\n", n, n * n * n);

    // d) Check if the number is prime
    if (isPrime(n)) {
        printf("%d is a prime number.\n", n);
    } else {
        printf("%d is not a prime number.\n", n);
    }

    // e) Factorial of number
    printf("Factorial of %d is: %llu\n", n, factorial(n));

    // f) Prime factors of the number
    primeFactors(n);

    return 0;
}

/*
Example Output:
If the input number is 10, the output will be:
Enter a number: 10
Square root of 10 is: 3.16
Square of 10 is: 100
Cube of 10 is: 1000
10 is not a prime number.
Factorial of 10 is: 3628800
Prime factors of 10 are: 2 5 

*/