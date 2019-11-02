//디스켓 1통에 5000원한다. 
//한번에 10통 이상을 사면 전체 금액의 10%을 할인하여 준다. 
//100통 이상을 사면 전체 금액의 12%를 할인하여 준다. 
//X통의 디스켓을 사려면 얼마가 있어야 하는가? 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int price=5000;
	double ratio1=1-0.1;
	double ratio2=1-0.12;
	int money;
	
	int num;
	
	printf("구입하려는 디스크 갯수 입력:");
	scanf("%d", &num);
	
	if(num>=100) {//100개 이상을 구매 시 : 전체 금액의 12%할인
		money = num * price * ratio2; 
		printf("%f\n", price * ratio2);
		printf("총 구입 가격:%d원\n", money);
	} else if(num>=10) {//10개 이상 구매 시 : 전체 금액의 10%할인 
		money = num * price * ratio1;
		printf("%f\n", price * ratio1);
		printf("총 구입 가격:%d원\n", money); 
	} else {//10개 미만인 경우 : 개당 5000원
		money = num * price;
		printf("총 구입 가격:%d원\n", money); 
	}
	return 0;
}
