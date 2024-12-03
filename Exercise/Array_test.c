#include <stdio.h>

int main() {
    int array[3];
    int length = sizeof(array) / sizeof(array[0]);

    printf("数组长度为: %d\n", length);

    return 0;
}