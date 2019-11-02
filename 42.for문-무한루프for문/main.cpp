#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int su, sum=0;
	
	for(;;) {
			sum+=su++;
			printf("for문 진행 중인 sum=%d\n", sum);
	}
	
	printf("for문 완료 후의 sum:%d\n", sum);
	return 0;
}
