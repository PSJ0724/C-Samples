//다음과 같이 출력하시오. 
// 3 + 6 + 9 = 18
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, sum=0;
	
	for(n=1; n<=10; n++) {
		if(n%3==0) {
			printf("%d + ", n);
			sum += n;
		}
		
	}
	printf("\b\b= %d\n", sum);
	return 0;
}
