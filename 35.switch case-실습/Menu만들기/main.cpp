//다음 프로그램을 만드시오. 
//===========================
//		Menu
//===========================
//	1.학생 이름 입력 
//	2.성정 3과목 압력 
//	3.학생 이름 출력 
//	4.합계 출력 
//	5.평균 출력 
//	6.종료 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[20];
	int kor, eng, mat;
	int sum;
	double avg;
	int n;
	
	while(1) {
		printf("============================\n"
			" Menu \n"
			"============================\n"
			"1.학생 이름 입력\n"
			"2.성적 3과목 입력\n"
			"3.학생 이름 출력\n"
			"4.합계 출력\n"
			"5.평균 출력\n"
			"6.종료\n");
			
		printf("선택:");
		scanf("%d", &n);
			
		switch(n) {
			case 1 : printf("학생 이름 입력\n");	scanf("%s", name); break;
			case 2 : printf("국어 입력:");	scanf("%d", &kor);
			         printf("영어 입력:");	scanf("%d", &eng);
				     printf("수학 입력:");	scanf("%d", &mat);
				     sum=kor+eng+mat;
				     avg=sum/3.0;
				     break;
			case 3 : printf("입력된 학생의 이름은 %s입니다.\n", name); break;	 
			case 4 : printf("세 과목의 합계:%d점\n", sum); break;
			case 5 : printf("세 과목의 평균:%.4f점\n", avg); break;
			case 6 : printf("프로그램을 종료합니다.\n");
			         return 0;
			default : printf("잘못된 입력입니다.\n");    
		}
		printf("\n\n\n");
	}   
	return 0;
}
