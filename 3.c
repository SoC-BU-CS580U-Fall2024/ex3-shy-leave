#include <stdio.h>

int main() {
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *p = arr;

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", p + i);
    }

    printf("Elements are:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }

    printf("\n");

    return 0;
}
