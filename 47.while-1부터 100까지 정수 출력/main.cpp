#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n=1;
	
	while(1) {
		printf("현재n의 값 = %d\n", n);
		
		if(n==100) {
			printf("if문으로 while 빠져나가기\n");
			break;
		}
		n++;
	}
	return 0;
}
