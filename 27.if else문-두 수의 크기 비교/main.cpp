#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, max, min;
	
	printf("두 정수 입력:"); scanf("%d%d", &n1, &n2);
	
	if(n1>n2)	max=n1,	min=n2; 
	else max=n2, min = n1;
	
	printf("큰 수:%d, 작은 수:%d\n", max, min);
	return 0;
}
