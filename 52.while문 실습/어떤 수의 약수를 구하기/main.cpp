//� ���� ����� ���ϴ� ���α׷��� �ۼ��Ͽ���. 
//(���=� ���� ������ ���� �� �ִ� ��) 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int i=1;
	
	printf("���� �Է�:");
	scanf("%d", &n);
	
	while(i<10) {
		
		if(n%i==0) {
			printf("%d�� %d�� ���\n", i, n);
		}	
		i++;
	} 
	return 0;
}
