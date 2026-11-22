// Program : 

#include <stdio.h>

// Function to find the index of an element in the array
int findElement(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

// Function to find the maximum element in the array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
    }
    return max;
}

// Function to find the minimum element in the array
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min)
            min = arr[i];
    }
    return min;
}

// Function to find the frequency of an element in the array
int findFrequency(int arr[], int n, int key) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            count++;
    }
    return count;
}

// Function to calculate the average of the elements in the array
float findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return (float)sum / n;
}

int main() {
    int n, key;

    // Input size of array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the element to search for
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Call the functions and display results
    int index = findElement(arr, n, key);
    if (index != -1)
        printf("Element %d found at index %d.\n", key, index);
    else
        printf("Element %d not found in the array.\n", key);

    printf("Maximum element: %d\n", findMax(arr, n));
    printf("Minimum element: %d\n", findMin(arr, n));
    printf("Frequency of %d: %d\n", key, findFrequency(arr, n, key));
    printf("Average of array elements: %.2f\n", findAverage(arr, n));

    return 0;
}

/*
Output : 
Enter the number of elements in the array: 5
Enter the elements of the array:
10 20 10 30 40
Enter the element to search: 10
Element 10 found at index 0.
Maximum element: 40
Minimum element: 10
Frequency of 10: 2
Average of array elements: 22.00

*/