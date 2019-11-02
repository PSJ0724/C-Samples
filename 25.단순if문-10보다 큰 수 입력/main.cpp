#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("10보다 큰 정수를 입력하세요:");
	scanf("%d", &n);
	if(n<=10) printf("10이하의 수 입니다.\n");
	printf("입력된 수:%d\n", n); 
	return 0;
}
