//사칙연산을 하는 계산기를 만드시오. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, n3;
	
	printf("첫번째 정수 입력:");
	scanf("%d", &n1);
	printf("연산 기호 입력(1.합 2.차 3.곱 4.나누기몫):");
	scanf("%d", &n2);
	printf("두번째 정수 입력:");
	scanf("%d", &n3);
	
	switch(n2){
		case 1 : printf("%d+%d=%d\n", n1, n3, n1+n3); break;
		case 2 : printf("%d-%d=%d\n", n1, n3, n1-n3); break;
		case 3 : printf("%d*%d=%d\n", n1, n3, n1*n3); break;
		case 4 : printf("%d/%d=%d\n", n1, n3, n1/n3); break;
		default : printf("잘못된 입력입니다.\n");
	} 
	return 0;
}
