//1부터 시작하여 홀수의 합을 구하면서 
//그 합이 10000을 넘지 않는 마지막 수를 구하는 프로그램을 작성하여라. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int sum = 0;
	int last;
	
	for(n=1; 1; n++) {
		if(n%2==1) {
			sum +=n;
			last = n;
			printf("last=%d, sum=%d\n", last, sum);
			
			if(sum>=10000) {
				break;
			}
			
		}
	}
	return 0;
}
