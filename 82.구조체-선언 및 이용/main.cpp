#include <iostream>
#include <string.h>
#define _CRT_NO_WARNINGS
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone{
	char name[20];
	int price;
}PHONE;
int main(int argc, char** argv) {
	PHONE phData;
	strcpy(phData.name, "����Ʈ��");
	phData.price=2000; 
	
	printf("�̸�:%s\n", phData.name);
	printf("����:%d\n", phData.price);
	return 0;
}
