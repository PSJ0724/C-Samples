//��Ģ������ �ϴ� ���⸦ ����ÿ�. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2, n3;
	
	printf("ù��° ���� �Է�:");
	scanf("%d", &n1);
	printf("���� ��ȣ �Է�(1.�� 2.�� 3.�� 4.�������):");
	scanf("%d", &n2);
	printf("�ι�° ���� �Է�:");
	scanf("%d", &n3);
	
	switch(n2){
		case 1 : printf("%d+%d=%d\n", n1, n3, n1+n3); break;
		case 2 : printf("%d-%d=%d\n", n1, n3, n1-n3); break;
		case 3 : printf("%d*%d=%d\n", n1, n3, n1*n3); break;
		case 4 : printf("%d/%d=%d\n", n1, n3, n1/n3); break;
		default : printf("�߸��� �Է��Դϴ�.\n");
	} 
	return 0;
}
