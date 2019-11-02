#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n, sum=0;
	printf("1~9까지 범위에서 정수 1개 입력:");
	scanf("%d", &n);
	
	while(n>0 && n<10) {
		sum += n;
		n--;
	}
	printf("1부터 입력된 정수까지의 합 : %d\n", sum);
	return 0;
}
