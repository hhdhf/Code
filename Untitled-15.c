#include <stdio.h>

int main() {
    int soCanDoan, doan;
    
    // Nhập số cần đoán từ bàn phím
    printf("Nhap so can doan: ");
    scanf("%d", &soCanDoan);
    
    // Bắt đầu quá trình đoán số
    printf("Bat dau doan so!\n");
    do {
        // Nhập số đoán từ bàn phím
        printf("Nhap so doan cua ban: ");
        scanf("%d", &doan);
        
        // Kiểm tra xem số đoán có trùng với số cần đoán không
        if (doan != soCanDoan) {
            printf("So doan cua ban khong dung. Hay thu lai!\n");
        }
    } while (doan != soCanDoan);
    
    // Hiển thị lời thông báo đã đoán đúng
    printf("Chuc mung! Ban da doan dung so %d!\n", soCanDoan);
    
    return 0;
}