#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char a='A';		float b= 12.34;
	char *pa;		float *pb;
	
	pa = &a;		pb = &b;
	
	printf("문자형 변수의 크기=%d\n", sizeof(a));
	printf("포인터 문자형 변수의 크기=%d\n", sizeof(pa));
	printf("실수형 변수의 크기=%d\n", sizeof(b));
	printf("포인터 실수형 변수의 크기=%d\n", sizeof(pb));
	return 0;
}
