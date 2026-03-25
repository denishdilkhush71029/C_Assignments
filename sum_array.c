#include <stdio.h>

int main() {
    int arr[100]; // Maximum array size assumed as 100
    int i, n, sum = 0;

    // Get the size of the array from the user
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Get the elements of the array from the user
    printf("Enter %d elements in the array:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate the sum of array elements
    for(i = 0; i < n; i++) {
        sum += arr[i]; // same as sum = sum + arr[i];
    }

    // Print the result
    printf("Sum of the array = %d\n", sum);

    return 0;
}   