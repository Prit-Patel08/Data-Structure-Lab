#include <stdio.h>

int main() {
    int size;
    printf("Enter Array Size: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter Array: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int target;
    printf("Enter target element: ");
    scanf("%d", &target);

    int ok = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] == target) {
            ok = 1;
        }
    }

    if (ok) {
        printf("Target Element is present in Array.");
    } else {
        printf("Target Element is not present in Array.");
    }
}
