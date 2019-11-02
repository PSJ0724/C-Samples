//어떤 수의 약수를 구하는 프로그램을 작성하여라. 
//(약수=어떤 수를 정수로 나눌 수 있는 수) 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int i=1;
	
	printf("정수 입력:");
	scanf("%d", &n);
	
	while(i<10) {
		
		if(n%i==0) {
			printf("%d는 %d의 약수\n", i, n);
		}	
		i++;
	} 
	return 0;
}
