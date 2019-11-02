#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2;
	
	printf("두 정수 n1과 n2의 값 입력:");
	scanf("%d%d", &n1, &n2);
	
	if(n1>n2)
	printf("처음 입력된 n1의 값이 크다\n");  
	return 0;
}
