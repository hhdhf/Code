#include <stdio.h>

#define MAX_SIZE 100

int main() {
    int mang[MAX_SIZE];
    int i, n;

    // Bước 1: Nhập số phần tử của mảng và các giá trị của mảng từ bàn phím
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    printf("Nhap cac gia tri cua mang:\n");
    for (i = 0; i < n; i++) {
        printf("mang[%d] = ", i);
        scanf("%d", &mang[i]);
    }

    // Bước 2: Hiển thị các giá trị của mảng theo thứ tự ngược lại
    printf("Cac gia tri cua mang theo thu tu nguoc lai:\n");
    for (i = n - 1; i >= 0; i--) {
        printf("%d ", mang[i]);
    }
    printf("\n");

    return 0;
}