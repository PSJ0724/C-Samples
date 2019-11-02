//배달 도시락을 주문하는데 10개까지는 개당 2500원,
//10개를 초과하는 양에 대해서는 개당 2400원이다. 
//배달 도시락의 개수를 입력 받아서 금액을 계산하는 프로그램을 작성하라. 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sales1=2500;
	int sales2=2400;
	int limit=10;
	
	int num;
	
	printf("구입하려는 도시락 갯수 입력:");
	scanf("%d", &num);
	
	if(num<=10) {//10개 이하 구매 시 개당 2500원
		printf("총 구입 가격:%d\n", sales1 * num); 
	} else{//10개 이상 초과 구매 시 개당 2400원
		printf("총 구입 가격:%d\n", sales2 * num); 
	}
	return 0;
}
