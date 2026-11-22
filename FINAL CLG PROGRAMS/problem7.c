// Program with output : 
#include <stdio.h>

// Function to find the smallest divisor other than 1
int findSmallestDivisor(int num) {
    if (num <= 1) 
        return -1; // No valid divisor for numbers <= 1
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            return i;
    }
    return num; // If no smaller divisor found, return the number itself
}

// Function to find the GCD using the Euclidean Algorithm
int findGCD(int a, int b) {
    while (b != 0) {
        int remainder = a % b;
        a = b;
        b = remainder;
    }
    return a;
}

int main() {
    int a, b;

    // Input two integers
    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    // Find the smallest divisor of the first number
    int smallestDivisor = findSmallestDivisor(a);

    // Find the GCD of the two numbers
    int gcd = findGCD(a, b);

    // Output results
    if (smallestDivisor != -1)
        printf("Smallest divisor of %d (other than 1): %d\n", a, smallestDivisor);
    else
        printf("No valid smallest divisor for %d\n", a);

    printf("GCD of %d and %d: %d\n", a, b, gcd);

    return 0;
}

/*
Output : 

Enter two integers: 28 35
Smallest divisor of 28 (other than 1): 2 
GCD of 28 and 35: 7

Explanation : 
•  Smallest Divisor:
•	For 28: Divisors are {1, 2, 4, 7, 14, 28}.
•	Smallest divisor other than 1: 2.
•  GCD:
•	Using the Euclidean Algorithm:
o	GCD(28, 35):
	28 % 35 = 28 (swap: 35, 28)
	35 % 28 = 7 (swap: 28, 7)
Example 2 :

Enter two integers: 17 51
Execution:
1.	Smallest Divisor:
o	For 17: Divisors are {1, 17}.
o	Smallest divisor other than 1: 17.
2.	GCD:
o	Using the Euclidean Algorithm:
	GCD(17, 51):
	51 % 17 = 0 → GCD is 17.
Output:
Smallest divisor of 17 (other than 1): 17
GCD of 17 and 51: 17

*/