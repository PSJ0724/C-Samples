//유원지에서 말을 태워주는데 처음 30분의 기본요금은 1인당 3000원이다. 
//이후에는 10분당 500원씩의 추가 요금을 받는다. 
//말을 탄 시간을 입력 받아서 전체 금액을 계산하는 프로그램을 작성하여라. 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int base=3000;
	int add=500;
	int basetime=30;
	
	int peo;
	int min;
	
	printf("이용자 인원 입력:");
	scanf("%d", &peo);
	printf("이용 시간 입력(단위:분):");
	scanf("%d", &min);
	
	if(min<=basetime) { //기본 30분을 초과하지 않은 경우
		printf("총 이용 금액:%d\n", base * peo); 
	} else{	//기본 30분을 초과하는 경우:10분당 500원
		printf("총 이용 금액:%d\n", (base+((min-basetime)/10+1)*add)*peo ); 
	}
	return 0;
}
