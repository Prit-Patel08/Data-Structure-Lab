#include <stdio.h>

int main()
{
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

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] > arr[j]) {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    int i = 0, j = size - 1;
    int ok = 0;

    while (i <= j) {
        int mid = (i + j) / 2;

        if (target < arr[mid]) {
            j = mid - 1;
        } else if (target > arr[mid]) {
            i = mid + 1;
        } else {
            ok = 1;
            break;
        }
    }

    if (ok) {
        printf("Element is present in Array");
    } else {
        printf("Element is not present in Array");
    }
}
