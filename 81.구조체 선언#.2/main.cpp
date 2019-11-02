#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone {
	char name[20];
	int price;
}PHONE;
int main(int argc, char** argv) {
	PHONE phData={"스마트폰", 2000};
	
	printf("이름:%s", phData.name);
	printf("숫자:%d", phData.price);
	return 0;
}
