// Program with output : 

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Function to calculate the length of a string
int stringLength(char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}

// Function to reverse a string
void reverseString(char str[], char reversed[]) {
    int length = stringLength(str);
    for (int i = 0; i < length; i++) {
        reversed[i] = str[length - 1 - i];
    }
    reversed[length] = '\0'; // Add null terminator
}

// Function to check equality of two strings
bool checkEquality(char str1[], char str2[]) {
    return strcmp(str1, str2) == 0;
}

// Function to check if a string is a palindrome
bool checkPalindrome(char str[]) {
    char reversed[100];
    reverseString(str, reversed);
    return checkEquality(str, reversed);
}

// Function to check if a substring exists in a string
bool checkSubstring(char str[], char substr[]) {
    return strstr(str, substr) != NULL; // strstr returns a pointer if substr is found
}

int main() {
    char str1[100], str2[100], substr[100];
    char reversed[100];

    // Input the main string
    printf("Enter the first string: ");
    scanf("%s", str1);

    // Input second string for equality check
    printf("Enter the second string for equality check: ");
    scanf("%s", str2);

    // Input substring to check
    printf("Enter the substring to check: ");
    scanf("%s", substr);

    // Perform operations
    int length = stringLength(str1);
    reverseString(str1, reversed);
    bool isEqual = checkEquality(str1, str2);
    bool isPalindrome = checkPalindrome(str1);
    bool isSubstring = checkSubstring(str1, substr);

    // Output results
    printf("Length of the string: %d\n", length);
    printf("Reversed string: %s\n", reversed);
    printf("Strings are %s.\n", isEqual ? "equal" : "not equal");
    printf("The string is %s a palindrome.\n", isPalindrome ? "" : "not");
    printf("The substring \"%s\" is %s in the string \"%s\".\n", substr, isSubstring ? "present" : "not present", str1);

    return 0;
}

/*

Output : 
Enter the first string: madam 
Enter the second string for equality check: madam
 Enter the substring to check: dam

Length of the string: 5
Reversed string: madam
Strings are equal.
The string is a palindrome.
The substring "dam" is present in the string "madam".


Example 2 : :

Enter the first string: hello
Enter the second string for equality check: world
Enter the substring to check: lo

Length of the string: 5
Reversed string: olleh
Strings are not equal.
The string is not a palindrome.
The substring "lo" is present in the string "hello".

*/