//��� ���ö��� �ֹ��ϴµ� 10�������� ���� 2500��,
//10���� �ʰ��ϴ� �翡 ���ؼ��� ���� 2400���̴�. 
//��� ���ö��� ������ �Է� �޾Ƽ� �ݾ��� ����ϴ� ���α׷��� �ۼ��϶�. 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int sales1=2500;
	int sales2=2400;
	int limit=10;
	
	int num;
	
	printf("�����Ϸ��� ���ö� ���� �Է�:");
	scanf("%d", &num);
	
	if(num<=10) {//10�� ���� ���� �� ���� 2500��
		printf("�� ���� ����:%d\n", sales1 * num); 
	} else{//10�� �̻� �ʰ� ���� �� ���� 2400��
		printf("�� ���� ����:%d\n", sales2 * num); 
	}
	return 0;
}
