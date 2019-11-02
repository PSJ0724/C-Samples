#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1=10, n2;
	int *ptr1, *ptr2;
	ptr1=&n1;	ptr2=&n2;
	
	(*ptr1)++;
	*ptr2=5;
	*ptr1=*ptr1+*ptr2;
	
	printf("n1=%d, n2=%d\n", *ptr1, *ptr2);	
	return 0;
}
