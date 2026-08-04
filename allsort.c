#include <stdio.h>

void bubble_sort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

void insertion_sort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        int key = a[j];
        while (j > 0 && key < a[j - 1]) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key;
    }
}

void selection_sort(int n, int a[]) {
    for (int i = 0; i < n - 1; i++) {
        int minIdx = i;
        for (int j = i + 1; j < n; j++) {
            if (a[minIdx] > a[j]) {
                minIdx = j;
            }
        }
        int temp = a[i];
        a[i] = a[minIdx];
        a[minIdx] = temp;
    }
}

int main()
{
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter Array: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    int option;
    printf("Press 1 for bubble sort\n");
    printf("Press 2 for insertion sort\n");
    printf("Press 3 for selection sort\n");
    scanf("%d", &option);

    if (option == 1) {
        bubble_sort(n, a);
    }
    else if (option == 2) {
        insertion_sort(n, a);
    }
    else if (option == 3) {
        selection_sort(n, a);
    }
    else {
        printf("Invalid choice!\n");
        return 0;
    }
    printf("Sorted Array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
