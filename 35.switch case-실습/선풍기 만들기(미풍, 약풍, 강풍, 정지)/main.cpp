//��ǳ�� �����(��ǳ, ��ǳ, ��ǳ, ����) 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	
	printf("���� �Է�(1.��ǳ/2.��ǳ/3.��ǳ/4.����):\n");
	scanf("%d", &num);
	
	switch(num) {
		case 1 : printf("��ǳ �����\n"); break;
		case 2 : printf("��ǳ �����\n"); break;
		case 3 : printf("��ǳ �����\n"); break;
		default : printf("����\n"); break;
	}
	return 0;
}
