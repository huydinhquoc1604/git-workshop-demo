#include <stdio.h>

int main() {
    float diem_mau, diem_da1;
    
    printf("Nhap diem mon 'Du an mau': ");
    scanf("%f", &diem_mau);
    printf("Nhap diem mon 'Du an 1': ");
    scanf("%f", &diem_da1);

    // Ki?m tra di?u ki?n d? quy?t d?nh c� du?c l�m "D? �n t?t nghi?p" hay kh�ng
    if (diem_mau >= 5 || diem_da1 >= 5) {
        printf("1\n"); // Duoc lam "Du an tot nghiep"
    } else {
        printf("0\n"); // Kh�ng duoc l�m "Du an tot nghiep"
    }

    return 0;
}

