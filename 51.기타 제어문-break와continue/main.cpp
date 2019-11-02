#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	while(1) {
		printf("인원 선택: 1~3명 가능/종료:0\n");
		printf("선택:"); scanf("%d", &n);
		
		if(n==0) {
			printf("프로그램을 종료합니다.\n");
			break;
		}else if(n<0 || n>3) {
			printf("잘못된 입력입니다.\n");
			continue;
		}
		printf("선택된 인원:%d명\n", n);
	}
	return 0;
}
