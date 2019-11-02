//거래처 신용도 
//B-10/ D-20/ G-30
//다음을 출력하시오.
//신용도 B : 점수 : 10
//신용도 D : 점수 : 20
//신용도 G : 점수 : 30
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char credit;
	
	printf("거래처 신용도 입력(B/D/G):");
	scanf("%c", &credit);
	
	switch(credit) {
		case 'B' : printf("신용도:%c / 점수:10\n", credit); break;
		case 'D' : printf("신용도:%c / 점수:20\n", credit); break;
		case 'G' : printf("신용도:%c / 점수:30\n", credit); break;
		default : printf(" 잘못된 입력입니다.\n");
	}
	
	return 0;
}
