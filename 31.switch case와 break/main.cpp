#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	printf("�����Է�:"); scanf("%d", &n);
	
	switch(n) {
		case 1 : printf("1�� �Էµ�\n"); break;
		case 2 : printf("2�� �Էµ�\n"); break;
		default : printf("1��2�̿��� ���� �Էµ�\n");
	}
	return 0;
}
