#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	
	printf("국어 점수 입력(0~100점):");
	scanf("%d", &num);
	
	if(!( (num>=0)&&(num<=100) ) ) printf("잘못된 입력입니다.\n");
	else
	printf("입력된 점수:%d\n", num); 
	return 0;
}
