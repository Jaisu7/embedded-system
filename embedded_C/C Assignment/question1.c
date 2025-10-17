/*Enter the size : 5 
Enter 5 elements:
12
22
30
26
28
Second largest element: 28 */

#include <stdio.h>

int secondLargest(int arr[], int n) {
    int first = arr[0], second = arr[0];  // Initialize both to first element

    for (int i = 1; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    return second;
}

int main() {
    int n;
    printf("Enter the size : ");
    scanf("%d", &n);
    
    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int result = secondLargest(arr, n);
    printf("Second largest element: %d\n", result);

    return 0;
}
