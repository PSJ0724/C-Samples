#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	while(1) {
		printf("�ο� ����: 1~3�� ����/����:0\n");
		printf("����:"); scanf("%d", &n);
		
		if(n==0) {
			printf("���α׷��� �����մϴ�.\n");
			break;
		}else if(n<0 || n>3) {
			printf("�߸��� �Է��Դϴ�.\n");
			continue;
		}
		printf("���õ� �ο�:%d��\n", n);
	}
	return 0;
}
