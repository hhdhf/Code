    #include <stdio.h>
#include <math.h>

int ucln(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

float tuyetDoi(float num) {
    return (num < 0) ? -num : num;
}

float canBacHai(float num) {
    if (num < 0) {
        return -1.0; // Số âm không có căn bậc 2 thực
    }
    return sqrt(num);
}

int main() {
    int a, b;
    float x;

    printf("Nhap hai so nguyen khong am a va b: ");
    scanf("%d %d", &a, &b);

    printf("Uoc chung lon nhat cua %d va %d la: %d\n", a, b, ucln(a, b));

    printf("Nhap so thuc x: ");
    scanf("%f", &x);

    printf("Gia tri tuyet doi cua %f la: %f\n", x, tuyetDoi(x));
    printf("Can bac hai cua %f la: %f\n", x, canBacHai(x));

    return 0;
}