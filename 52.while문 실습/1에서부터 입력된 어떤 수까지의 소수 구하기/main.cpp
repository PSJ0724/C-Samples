//1에서부터 입력된 어떤 수까지 내에 있는 소수를 찾는 프로그램을 작성하라. 
//(1과 자기 자신만으로 나누어 떨어지는 1보다 큰 양의 정수) 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int loop = 1;
	int search;
	int isData; // 1이면 소수, 0이면 소수 아님.
	
	printf("정수 입력:");
	scanf("%d", &n);
	
	while(loop<=n) { //1~n의 범위에 대한 접근 
		
		search = 2;
		isData = 1;
		 
		while(search<loop) { //범위 중 각 정수에 대한 약수 확인
			
			if(loop%search==0) {
				printf("loop=%d, search=%d\n", loop, search);
				isData=0; //약수가 발견된 경우-> 소수 아님 
				break;
			}
			search++; 
		}
		
		if(isData) { //1이면 소수, 0이면 소수 아님
			printf("%d는 소수\n", loop); 
		}
		loop++;
	} 
	return 0;
}
