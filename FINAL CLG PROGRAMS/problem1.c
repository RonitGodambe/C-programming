// Code : 
#include <stdio.h>
int main() {
    float basic, hra, da, gross_salary;
    // Accept the basic salary from the user
    printf("Enter the basic salary of the employee: ");
    scanf("%f", &basic);
    // Calculate H.R.A. as 20% of the basic salary
    hra = 0.20 * basic;
    // Calculate D.A. as 150% of the basic salary
    da = 1.50 * basic;
    // Calculate the gross salary
    gross_salary = basic + hra + da;
    // Display the results
    printf("Basic Salary: %.2f\n", basic);
    printf("H.R.A. (20%% of Basic): %.2f\n", hra);
    printf("D.A. (150%% of Basic): %.2f\n", da);
    printf("Gross Salary: %.2f\n", gross_salary);
    return 0;
}
/*
Output : 
Enter the basic salary of the employee: 10000 
Basic Salary: 10000.00
 H.R.A. (20% of Basic): 2000.00 
D.A. (150% of Basic): 15000.00
 Gross Salary: 27000.00

 */


 