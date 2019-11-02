#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	printf("정수 입력:");
	scanf("%d", &n);
	
	while(n!=0) {
		printf("%d", n%10); //나머지를 우선적으로 출력 
		n/=10; 
	} 
	return 0;
}
