//첫날에 10원을 저축하고, 다음날에는 전날의 2배를 예금하는 방식으로 한 달 동안 저축한 금액은? 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	long long money = 10; // long long 자료항: 8바이트, 정수데이터(%lld)
	long long sum = 0;
	int day;
	
	for(day=1; day<=31; day++) {
		sum += money;
		printf("저축금액:%lld, 누적금액:%lld, 일차:%d\n", money, sum, day);
		
		money *=2;
	}
	 
	 printf("총 저축 금액:%lld원\n", sum);
	return 0;
}
