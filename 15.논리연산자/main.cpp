#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	
	printf("���� ���� �Է�(0~100��):");
	scanf("%d", &num);
	
	if(!( (num>=0)&&(num<=100) ) ) printf("�߸��� �Է��Դϴ�.\n");
	else
	printf("�Էµ� ����:%d\n", num); 
	return 0;
}
