#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s;
	
	printf("�����Է�");
	scanf("%d", &s);
	
	s%2==0 ?
	printf("%d�� ¦���Դϴ�.\n", s):printf("%d�� Ȧ���Դϴ�.\n", s);
	return 0;
}
