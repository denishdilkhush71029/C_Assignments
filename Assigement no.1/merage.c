#include <stdio.h>

int main() {
    int arr1[100], arr2[100], merged[200];
    int n1, n2, i, j;

    // 1. Get the first array from the user
    printf("Enter the number of elements for the first array: ");
    scanf("%d", &n1);
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++) {
        scanf("%d", &arr1[i]);
    }

    // 2. Get the second array from the user
    printf("\nEnter the number of elements for the second array: ");
    scanf("%d", &n2);
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++) {
        scanf("%d", &arr2[i]);
    }

    // 3. Copy elements of the first array into the merged array
    for(i = 0; i < n1; i++) {
        merged[i] = arr1[i];
    }

    // 4. Copy elements of the second array into the merged array
    // We use 'i + j' as the index for the merged array because 'i' 
    // is already sitting at the end of the first array's length.
    for(j = 0; j < n2; j++) {
        merged[i + j] = arr2[j]; 
    }

    // 5. Print the final merged array
    printf("\nThe merged array is:\n");
    for(i = 0; i < n1 + n2; i++) {
        printf("%d ", merged[i]);
    }
    printf("\n");

    return 0;
}