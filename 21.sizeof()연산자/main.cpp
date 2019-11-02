#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int a=0, b=0, c=0;
	printf("변수a의공간크기:%d\n", sizeof(a));
	printf("정수의 공간 크기:%d\n", sizeof(10));
	printf("int자료형 공간 크기:%d\n", sizeof(int));
	
	a= (b=3, c=5, b+c);
	printf("a=%d, b=%d, c=%d\n",a, b, c);
	return 0;
}
