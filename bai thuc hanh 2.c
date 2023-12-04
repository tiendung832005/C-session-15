#include<stdio.h>
struct Score{
	int id;
	float scoreMath;
	float scoreVietnamese;
	
};
int main(){
	struct Score listScore[5];
	
	for (int i=0; i<5; i++){
		printf("Nhap ma sinh vien: ");
		scanf ("%d", &listScore[i].id);
		printf("Nhap diem toan: ");
		scanf("%f", &listScore[i].scoreMath);
		printf("Nhap diem van: ");
		scanf("%f", &listScore[i].scoreVietnamese);
		
	}
	printf("\nDanh sach diem thi \n");
	
	for(int i=0;i<5;i++){
		printf("Ma sinh vien: %d, Diem toan: %.2f, Diem Van: %.2f\n", listScore[i].id, listScore[i].scoreMath, listScore[i].scoreVietnamese);
		
	}
}

