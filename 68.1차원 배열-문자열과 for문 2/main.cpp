#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[10];	int i;
	printf("���ڿ� �Է�:");	scanf("%s", &a);
	
	printf("�ѱ��ھ� ���\n");	
	for(i=0; i<10; i++) {
		printf("%c\n", a[i]);
	} 
	printf("\n\n��ü ���ڿ�:%s\n", a);
	return 0;
}
