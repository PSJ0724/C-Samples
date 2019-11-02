#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	do {
		printf("명령 선택: 가위(0)/바위(1)/보(2)/종료(3)\n");
		printf("선택:"); scanf("%d", &n);
		
		printf("%d번이 선택되었습니다.\n\n", n);
	}while(n!=3);
	printf("프로그램 종료\n");
	return 0;
}
