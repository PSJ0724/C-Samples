//1~1000까지의 합을 구하되. 
//3의 배수는 제외하고 
//3의 배수이면서 5의 배수는 제외하지 않는 
//프로그램을 작성하시오. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int sum = 0;
	
	for(n=1; n<=1000; n++) {
		if(n%3==0 && n%5!=0) {
			continue;
		}
		
		sum += n;
		printf("n= %d, sum=%d\n", n, sum);
	}
	return 0;
}
