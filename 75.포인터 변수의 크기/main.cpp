#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	char a='A';		float b= 12.34;
	char *pa;		float *pb;
	
	pa = &a;		pb = &b;
	
	printf("������ ������ ũ��=%d\n", sizeof(a));
	printf("������ ������ ������ ũ��=%d\n", sizeof(pa));
	printf("�Ǽ��� ������ ũ��=%d\n", sizeof(b));
	printf("������ �Ǽ��� ������ ũ��=%d\n", sizeof(pb));
	return 0;
}
