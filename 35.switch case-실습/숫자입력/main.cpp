//1~10������ ���ڸ� �Է� �޾� 
//1��'one', 2��'two', 3��'three'�� ����ϰ� 
//�� �ܴ̿� 'error'�� ����Ͻÿ�. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	
	printf("��� �Է�:");
	scanf("%d", &num);
	
	switch(num) {
		case 1: printf("One \n"); break;
		case 2: printf("Two \n"); break;
		case 3: printf("Three \n"); break;
		default : printf("error \n");
	} 
	return 0;
}
