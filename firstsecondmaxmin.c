#include <stdio.h>
#include <limits.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max1 = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > max1)
            max1 = arr[i];
    }

    int max2 = INT_MIN;
    for (int i = 0; i < n; i++) {
        if (arr[i] != max1 && arr[i] > max2)
            max2 = arr[i];
    }

    int min1 = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min1)
            min1 = arr[i];
    }

    int min2 = INT_MAX;
    for (int i = 0; i < n; i++) {
        if (arr[i] != min1 && arr[i] < min2)
            min2 = arr[i];
    }

    printf("First Maximum = %d\n", max1);

    if (max2 != INT_MIN) {
        printf("Second Maximum = %d\n", max2);
    } else {
        printf("Second Maximum does not exist.\n");
    }
    printf("First Minimum = %d\n", min1);
    if (min2 != INT_MAX) {
        printf("Second Minimum = %d\n", min2);
    } else {
        printf("Second Minimum does not exist.\n");
    }
    return 0;
}
