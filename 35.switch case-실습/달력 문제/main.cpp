//각 날짜에 따른 수치를 출력하시오. 
//1~7 : 첫번째 주 / 8~14 : 두번째 주.../29~31 : 다섯번째 주 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day;
	int res;
	
	printf("날짜 입력(1~31일):");
	scanf("%d", &day);
	
	if(day<1||day>31) {
		printf("잘못된 입력입니다.\n");
	}
	
	switch((day-1)/7) {
		case 0 : printf("%d일: 첫번째 주 \n", day); break;
		case 1 : printf("%d일: 두번째 주 \n", day); break;
		case 2 : printf("%d일: 세번째 주 \n", day); break;
		case 3 : printf("%d일: 네번째 주 \n", day); break;
		case 4 : printf("%d일: 다섯번째 주 \n", day); break;
	}
	return 0;
}
