//두수의 최소 공배수와 최대 공약수를 구하는 프로그램을 작성하라 
//최소공배수=공배수 중에서 가장 작은 정수 
//최대공약수=공약수 중에서 가장 큰 정수 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n1, n2;
	int loop=1;
	int min, max; //min:최소공배수, max:최대공약수
	
	printf("n1입력:"); scanf("%d", &n1);
	printf("n2입력:"); scanf("%d", &n2);
	
	while(loop<=n1) {
		
		if(loop==1) {
			max=loop;
		}else if(n1%loop==0 && n2%loop==0) {//공통이 되는 약수
			if(max<loop) 	max=loop;	//최대공약수 저장 
		}
		printf("max = %d\n", max);
		loop++; 
	}
	
	min = max*(n1/max) * (n2/max);
	
	printf("최대 공약수:%d\n", max);
	printf("최소 공배수:%d\n", min); 
	return 0;
}
