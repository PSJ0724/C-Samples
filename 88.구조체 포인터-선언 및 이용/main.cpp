#include <iostream>
#include<string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone {
	char name[20]; int price;
}PHONE, *PTPHONE;
int main(int argc, char** argv) {
	PHONE phData;
	PTPHONE pt;		pt=&phData;
	strcpy(pt->name, "스마트폰");
	ph->price=2000;
	return 0;
}
