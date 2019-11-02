#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SumFunc(int n){
	int i, sum=0;
	
	for(i=0; i<n; i++)
		sum+=i;
		
	return sum;
}
int main(int argc, char** argv) {
	
	int ret, n;
	printf("입력:"); scanf("%d", &n);
	ret = SumFunc(n);
	printf("리턴된 값:%d\n", ret);
	return 0;
}
