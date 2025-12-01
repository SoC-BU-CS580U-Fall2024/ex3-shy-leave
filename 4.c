#include <stdio.h>
#include <string.h>

void swap(char *x, char *y) {
    char temp = *x;
    *x = *y;
    *y = temp;
}

void permute(char *str, int left, int right) {
    if (left == right) {
        printf("%s\n", str);
        return;
    }

    for (int i = left; i <= right; i++) {
        swap(str + left, str + i);
        permute(str, left + 1, right);
        swap(str + left, str + i); // backtrack
    }
}

int main() {
    char str[] = "HMAli";
    int len = strlen(str);

    printf("Permutations:\n");
    permute(str, 0, len - 1);

    return 0;
}
