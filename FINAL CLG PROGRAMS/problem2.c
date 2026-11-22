// Code : 
#include <stdio.h>
int main()
{
    int n, i;
    int first = 0, second = 1, next;
    // Accept the number of Fibonacci numbers to generate
    printf("Enter the number of Fibonacci numbers to generate: ");
    scanf("%d", &n);
    // Check if the input is valid
    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
    } 
    else if (n == 1) 
    {
        printf("Fibonacci series: %d\n", first);
    } else 
    {
        printf("Fibonacci series: %d, %d", first, second);
        // Generate the Fibonacci series
        for (i = 3; i <= n; ++i)
        {
            next = first + second;
            printf(", %d", next);
            first = second;
            second = next;
        }
        printf("\n");
    }
}
/*

Output : 
Enter the number of Fibonacci numbers to generate: 10 
Fibonacci series: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34

*/