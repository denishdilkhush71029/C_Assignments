#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 2, 7, 8, 8, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int i, j;

    printf("Duplicate elements in given array:\n");

    // Outer loop picks an element
    for (i = 0; i < size; i++) {
        // Inner loop compares the picked element with the rest of the array
        for (j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                // To avoid printing the same duplicate multiple times, 
                // we check if it was already printed. 
                // For simplicity, this basic version prints every match.
                // A more robust version uses a flag or a separate array to track printed duplicates.
                printf("%d ", arr[i]);
                break; // Move to the next element after finding one duplicate
            }
        }
    }

    return 0;
}   