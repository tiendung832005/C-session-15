#include<stdio.h>
struct Student{
	char name[50];
	int age;
	char phone[15];
	char email[60];
	
};
int main(){
	struct Student student1;
	strcpy(student1.name, "Ta Tien Dung");
	student1.age = 18;
	strcpy(student1.phone, "039615866");
	strcpy(student1.email, "tiendungx832005@gmail.com");
	
	printf("Ho va ten sinh vien: %s\n", student1.name);
	printf("Tuoi cua sinh vien: %d\n", student1.age);
	printf("So dien thoai: %s\n", student1.phone);
	printf("Email: %s\n", student1.email);
}
