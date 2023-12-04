#include<stdio.h>
#include<string.h>
	struct Student{
		char name[50];
		int id;
		float mul;
		
};
int main(){
	struct Student student1;
	strcpy(student1.name, "Nguyen Van A");
	student1.id = 12345;
	student1.mul = 8.5;
	printf("Thong tin cua sinh vien: \n");
	printf("Ten: %s\n", student1.name);
	printf("Ma sinh vien: %d\n", student1.id);
	printf("Diem trung binh: %.2f\n", student1.mul);
	
	return 0;
}

