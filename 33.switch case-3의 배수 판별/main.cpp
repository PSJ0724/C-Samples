#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n, ret;
	
	printf("���� �Է�:"); scanf("%d", &n);
	ret=n % 3;
	
	switch(ret){ 
		case 0 : printf("3�� ���\n"); break;
		default : printf("3�� ����� �ƴ�\n");
	}
	return 0;
}
