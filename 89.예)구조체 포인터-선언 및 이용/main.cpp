#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone{
	char name[20];	int price;
}PHONE, *PTPHONE;
int main(int argc, char** argv) {
	PHONE phData = {"����Ʈ��", 2000};
	PTPHONE pt;		pt=&phData;
	printf("�̸�:%s\n", pt->name);
	printf("����:%d\n", pt->price);
	return 0;
}
