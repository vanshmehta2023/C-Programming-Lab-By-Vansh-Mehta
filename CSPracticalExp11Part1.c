#include <stdio.h>
void swapByValue(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}
void swapByReference(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main() {
    int num1 = 5, num2 = 10;
    printf("Before swap by value: %d, %d\n", num1, num2);
    swapByValue(num1, num2);
    printf("After swap by value: %d, %d\n", num1, num2);

    printf("\nBefore swap by reference: %d, %d\n", num1, num2);
    swapByReference(&num1, &num2);
    printf("After swap by reference: %d, %d\n", num1, num2);
    return 0;
}
