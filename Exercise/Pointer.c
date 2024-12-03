#include <stdio.h>

int main() {
    int number = 10;
    int *p;  // 声明一个整型指针

    p = &number;  // 将number的地址赋给指针p
    printf("Address of number: %p\n", (void*)p);
    printf("Value of number: %d\n", *p);  // 通过指针访问number的值

    *p = 20;  // 通过指针改变number的值
    printf("New value of number: %d\n", number);

    return 0;
}