#include <iostream>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone{
	char name[20]; int price;
}PHONE;
int main(int argc, char** argv) {
	PHONE phData1, phData2;
	strcpy(phData1.name, "스마트폰");
	phData1.price=2000;
	phData2=phData1;
	
	printf("%s %d", phData2.name, phData2.price);
	return 0;
}
