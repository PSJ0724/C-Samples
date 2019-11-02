//입력된 수의 각 자리수의 합을 구하는 프로그램을 작성하라. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	
	printf("정수 입력:");
	scanf("%d", &n);
	
	while(n!=0) {
		sum +=n%10; //나머지 값의 총 합계 
		n/=10;
	}
	printf("각 자릿수의 합:%d\n", sum);
	return 0;
}
