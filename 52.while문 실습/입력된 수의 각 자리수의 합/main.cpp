//�Էµ� ���� �� �ڸ����� ���� ���ϴ� ���α׷��� �ۼ��϶�. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	
	printf("���� �Է�:");
	scanf("%d", &n);
	
	while(n!=0) {
		sum +=n%10; //������ ���� �� �հ� 
		n/=10;
	}
	printf("�� �ڸ����� ��:%d\n", sum);
	return 0;
}
