#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	do {
		printf("��� ����: ����(0)/����(1)/��(2)/����(3)\n");
		printf("����:"); scanf("%d", &n);
		
		printf("%d���� ���õǾ����ϴ�.\n\n", n);
	}while(n!=3);
	printf("���α׷� ����\n");
	return 0;
}
