#include <stdio.h>

int main() {
    int a = 10;
    float b = 20.5;
    char c = 'A';

    int *ptrInt = &a;
    float *ptrFloat = &b;
    char *ptrChar = &c;

    printf("Dia chi va gia tri cua bien int: %p, %d\n", ptrInt, *ptrInt);
    printf("Dia chi va gia tri cua bien float: %p, %.2f\n", ptrFloat, *ptrFloat);
    printf("Dia chi va gia tri cua bien char: %p, %c\n", ptrChar, *ptrChar);

    return 0;
}