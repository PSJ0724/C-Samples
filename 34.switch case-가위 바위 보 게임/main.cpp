#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	printf("�Է�(����0,����1,��2):"); scanf("%d", &n);
	
	switch(n) {
		case 0 : printf("������ ������\n"); break;
		case 1 : printf("������ ������\n"); break;
		case 2 : printf("���� ������\n"); break;
		default : printf("������ �����մϴ�.\n");
    }
	return 0;
}
