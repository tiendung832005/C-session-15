#include <stdio.h>

// Dinh Nghia cau truc diem thi
struct DiemThi {
    int maSV;
    float diemToan;
    float diemVan;
};
int main() {
    // Khai bao va khoi tao mot danh sach diem thi
    struct DiemThi dsDiemThi[5];
    // Nhap thong tin cho 5 sinh vien
    for (int i = 0; i < 5; i++) {
        printf("Nhap ma sinh vien: ");
        scanf("%d", &dsDiemThi[i].maSV);
        printf("Nhap diem toan: ");
        scanf("%f", &dsDiemThi[i].diemToan);
        printf("Nhap diem van: ");
        scanf("%f", &dsDiemThi[i].diemVan);
    }
    // In thong tin cho 5 sinh vien
    printf("\nDanh sach diem thi:\n");
    for (int i = 0; i < 5; i++) {
        printf("Ma sinh vien: %d, Diem toan: %.2f, Diem van: %.2f\n",
               dsDiemThi[i].maSV, dsDiemThi[i].diemToan, dsDiemThi[i].diemVan);
    }
    return 0;
}
