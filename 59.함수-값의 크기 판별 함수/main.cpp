#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
char big(int x, int y) {
	if(x>y)
			return'Y';
	else if(x<y)
			return'N';
	else
			return'=';
}
int main(int argc, char** argv) {
	
	int a=100, b=200;
	char size=big(a, b);
	
	if(size=='Y')
		printf("%d>%d\n", a, b);
	else if(size=='N')
		printf("%d<%d\n", a, b);
	else if(size=='=')
		printf("%d==%d\n", a, b);	
	return 0;
}
