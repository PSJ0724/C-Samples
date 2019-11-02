#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, ret;
	
	printf("정수 입력:"); scanf("%d", &n);
	ret=n % 3;
	
	switch(ret){ 
		case 0 : printf("3의 배수\n"); break;
		default : printf("3의 배수가 아님\n");
	}
	return 0;
}
