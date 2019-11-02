//1~10까지의 숫자만 입력 받아 1부터 입력 받은 수까지의 합을 구하시오. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	
	printf("1~10까지의 정수 입력:");
	scanf("%d", &n);
	
	while(n>=1 && n<=10) {
		sum +=n;
		n--;
	} 
	if(sum==0) {
		printf("잘못된 입력입니다.\n");
	} else {
		printf("총 합 : %d\n", sum);
	}
	return 0;
}
