#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2;
	printf("���� �Է�:");  scanf("%d", &n1);
	n2=n1%2;
	if(n2==0)printf("�Էµ� ���� ¦��\n");
	if(n2 !=0)printf("�Էµ� ���� Ȧ��\n");
	return 0;
}
