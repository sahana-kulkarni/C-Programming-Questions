/* Find the missing number in a given integer array of 1 to 500.

WTD: Examine an array expected to contain consecutive integers from 1 to 500. Identify any integer that is missing from this sequence.

(e.g.: I/P: [1,2,4,5], O/P: 3) */

#include <stdio.h>

int main() {
    // Initialize the array with the given elements
    int arr[] = {1, 3, 4, 5};
    
    // Calculate the length of the array
    int len = sizeof(arr) / sizeof(int);
    
    // The length of the complete sequence (including the missing number)
    int n = len + 1;
    
    // Calculate the expected sum of the first n natural numbers
    int expectedSum = (n * (n + 1)) / 2;
    
    // Initialize the sum of elements in the array
    int sum = 0;
    
    // Iterate through the array and calculate the sum of its elements
    for(int i = 0; i < len; i++) {
        sum += arr[i];
    }
    
    // The missing number is the difference between the expected sum and the actual sum
    int missingNumber = expectedSum - sum;
    
    // Print the missing number
    printf("The missing number is %d\n", missingNumber);
    
    return 0;
}
