#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	printf("입력(가위0,바위1,보2):"); scanf("%d", &n);
	
	switch(n) {
		case 0 : printf("가위를 선택함\n"); break;
		case 1 : printf("바위를 선택함\n"); break;
		case 2 : printf("보를 선택함\n"); break;
		default : printf("게임을 종료합니다.\n");
    }
	return 0;
}
