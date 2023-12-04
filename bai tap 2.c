#include<stdio.h>
struct Student{
	char name[50];
	int age;
	char phone[12];
	char email[50];
	
};
int main(){
	struct Student student[1];
	for (int i=0;i<1;i++){
		printf("Nhap ten sinh vien: \n" );
		gets(student[i].name);
		printf("Nhap tuoi sinh vien: \n");
		scanf("%d", &student[i].age);
		printf("Nhap so dien thoai: \n");
		scanf("%s", &student[i].phone);
		printf("Email cua sinh vien: \n");
		scanf("%s", &student[i].email);
				
	}
	printf("\nThong tin cua sinh vien: \n");
	for(int i=0;i<1;i++){
		printf("Ten sinh vien: %s\n Tuoi: %d\n So dien thoai: %s\n Email: %s\n", student[i].name, student[i].age, student[i].phone, student[i].email);
	}
	
}
