// Code : 
#include <stdio.h>

int main() {
    int marks[5], i;
    int total = 0;
    float percentage;
    int isPass = 1;  // Flag to check if the student passed in all subjects
    
    // Accept marks for five subjects
    printf("Enter marks for five subjects (out of 100):\n");
    for (i = 0; i < 5; i++) {
        printf("Subject %d: ", i+1);
        scanf("%d", &marks[i]);
        
        // Check if marks in each subject are 40 or above
        if (marks[i] < 40) {
            isPass = 0;  // Student fails if any subject marks are less than 40
        }

        // Calculate the total marks
        total += marks[i];
    }

    // Compute the percentage
    percentage = (total / 500.0) * 100;

    // Check if the student passed or failed
    if (isPass) {
        printf("Result: PASS\n");
        
        // Determine grade based on aggregate percentage
        printf("Total Marks: %d\n", total);
        printf("Percentage: %.2f%%\n", percentage);
        
        if (percentage >= 75) {
            printf("Grade: Distinction\n");
        } else if (percentage >= 60) {
            printf("Grade: First Division\n");
        } else if (percentage >= 50) {
            printf("Grade: Second Division\n");
        } else if (percentage >= 40) {
            printf("Grade: Third Division\n");
        }
    } else {
        printf("Result: FAIL\n");
    }

    return 0;
}
/*

Example Output:
Case 1: Passing with Distinction
Enter marks for five subjects (out of 100):
Subject 1: 85
Subject 2: 90
Subject 3: 80
Subject 4: 75
Subject 5: 88
Result: PASS
Total Marks: 418
Percentage: 83.60%

*/