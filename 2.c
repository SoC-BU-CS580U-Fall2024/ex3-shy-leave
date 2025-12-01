#include <stdio.h>

void multiply(int *x, int *y, int *result) {
    *result = (*x) * (*y);
}

int main() {
    int a, b, product;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    multiply(&a, &b, &product);

    printf("Product = %d\n", product);

    return 0;
}
