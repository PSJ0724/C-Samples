#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone {
	char name[20];
	int price;
}PHONE;
int main(int argc, char** argv) {
	PHONE phData={"����Ʈ��", 2000};
	
	printf("�̸�:%s", phData.name);
	printf("����:%d", phData.price);
	return 0;
}
