#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, sum=0;
	 
	printf("정수 2개를 입력:");
	scanf("%d%d", &n1, &n2);

	sum = n1+n2;
	printf("두 수의 합은 %d입니다.\n", sum); 
	return 0;
}
