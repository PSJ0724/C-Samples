#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone{
	char name[20];	int price;
}PHONE, *PTPHONE;
int main(int argc, char** argv) {
	PHONE phData = {"스마트폰", 2000};
	PTPHONE pt;		pt=&phData;
	printf("이름:%s\n", pt->name);
	printf("가격:%d\n", pt->price);
	return 0;
}
