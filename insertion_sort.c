#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        int j = i + 1;
        int key = a[j];
        while (j > 0 && key < a[j - 1]) {
            a[j] = a[j - 1];
            j--;
        }
        a[j] = key;
    }

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
