#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int SumFunc(){
	int i, n, sum=0;
	
	printf("���� �Է�:");
	scanf("%d", &n);
	
	for(i=0; i<n; i++)
		sum+=i;
		
	printf("sum=%d", sum);
}
int main(int argc, char** argv) {
	SumFunc();
	return 0;
}
