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

    for (int i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
}
