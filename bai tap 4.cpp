#include<stdio.h>
#include<string.h>

//Dinh nghia cau truc sinh vien
struct SinhVien{
	char ten[50];
	int maSV;
	float diemTB;
};

int main(){
	//Khai bao va khoi tao 1 sinh vien
	struct SinhVien st1;
	strcpy(st1.ten, "Nguyen Nam Son");
	st1.maSV = 12345;
	st1.diemTB = 8.4;

	//In thong tin sinh vien
	printf("Thong tin sinh vien:\nTen Sv: %s\nMa sv: %d\nDiem Tb sv: %.2f",st1.ten, st1.maSV,st1.diemTB);
}
