//1~10������ ���ڸ� �Է� �޾� 1���� �Է� ���� �������� ���� ���Ͻÿ�. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	int sum=0;
	
	printf("1~10������ ���� �Է�:");
	scanf("%d", &n);
	
	while(n>=1 && n<=10) {
		sum +=n;
		n--;
	} 
	if(sum==0) {
		printf("�߸��� �Է��Դϴ�.\n");
	} else {
		printf("�� �� : %d\n", sum);
	}
	return 0;
}
