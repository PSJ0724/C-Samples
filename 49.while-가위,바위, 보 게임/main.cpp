#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	while(1) {
		printf("��� ����: ����(0)/����(1)/��(2)����(Ctrl+C)\n");
		printf("����:"); scanf("%d", &n);
	switch(n) {
		case 0: printf("������ ������\n\n"); break;
		case 1: printf("������ ������\n\n"); break;
		case 2: printf("���� ������\n\n"); break;
		default : printf("�߸��� �Է��Դϴ�.\n\n\n");
	}
	}
	return 0;
}
