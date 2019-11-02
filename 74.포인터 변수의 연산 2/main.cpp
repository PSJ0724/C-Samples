#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char n='A';
	char *pn;
	
	pn = &n;
	
	printf("pn+1=%d\n", *pn+1);
	printf("pn+2=%d\n", *pn+2);
	printf("pn+3=%d\n", *pn+3);
	return 0;
}
