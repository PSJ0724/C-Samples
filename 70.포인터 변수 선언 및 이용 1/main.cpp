#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a;
	int *pa;
	pa=&a;
	*pa=10;	
	printf("%d\n", *pa);	printf("%d\n", a);
	return 0;
}
