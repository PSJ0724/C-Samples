#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s;
	
	printf("정수입력");
	scanf("%d", &s);
	
	s%2==0 ?
	printf("%d는 짝수입니다.\n", s):printf("%d는 홀수입니다.\n", s);
	return 0;
}
