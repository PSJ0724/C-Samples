#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SumFunc(int n){
	int i, sum=0;
	
	for(i=0; i<n; i++)
		sum+=i;
		
	printf("sum=%d", sum);
}
int main(int argc, char** argv) {
	int n;
	printf("정수 입력:");
	scanf("%d", &n);
	SumFunc(n);
	return 0;
}
