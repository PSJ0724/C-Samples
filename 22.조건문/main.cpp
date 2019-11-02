#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	printf("정수 입력:");  scanf("%d", &n);
	
	if(n) {
		printf("n이0이 아니므로, 조건식은 참\n");
		printf("조건식이 참이므로, 종속문장 실행됨\n");
	}
	return 0;
}
