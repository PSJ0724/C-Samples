#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch;
	
	printf("���� �Է�:"); scanf("%c", &ch);
	
	switch(ch) {
		case'a':printf("a�� �Էµ�\n"); break;
		case'A':printf("A�� �Էµ�\n"); break;
		default:printf("a�� A�̿��� ���ڰ� �Էµ�\n");
	}
	return 0;
}
