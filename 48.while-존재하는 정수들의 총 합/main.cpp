#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n, sum=0;
	printf("1~9���� �������� ���� 1�� �Է�:");
	scanf("%d", &n);
	
	while(n>0 && n<10) {
		sum += n;
		n--;
	}
	printf("1���� �Էµ� ���������� �� : %d\n", sum);
	return 0;
}
