#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	printf("정수 입력:"); scanf("%d", &n);
	
	if(n)
	  printf("1번 문장:n이 0이 아니므로 실행됨\n");
	else
	  printf("2번 문장:n이 0이므로 실행됨\n");
	return 0;
}
