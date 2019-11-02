#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch1='A', ch2;
	
	char *ptr1, *ptr2;
	
	ptr1=&ch1;	ptr2=&ch2;
	
	*ptr2=*ptr1;
	
	printf("ch1=%c, ch2=%c\n", *ptr1, *ptr2);
	return 0;
}
