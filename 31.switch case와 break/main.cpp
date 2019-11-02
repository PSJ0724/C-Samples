#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	printf("정수입력:"); scanf("%d", &n);
	
	switch(n) {
		case 1 : printf("1이 입력됨\n"); break;
		case 2 : printf("2이 입력됨\n"); break;
		default : printf("1과2이외의 수가 입력됨\n");
	}
	return 0;
}
