#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	while(1) {
		printf("명령 선택: 가위(0)/바위(1)/보(2)종료(Ctrl+C)\n");
		printf("선택:"); scanf("%d", &n);
	switch(n) {
		case 0: printf("가위를 선택함\n\n"); break;
		case 1: printf("바위를 선택함\n\n"); break;
		case 2: printf("보를 선택함\n\n"); break;
		default : printf("잘못된 입력입니다.\n\n\n");
	}
	}
	return 0;
}
