//���� 1�뿡 5000���Ѵ�. 
//�ѹ��� 10�� �̻��� ��� ��ü �ݾ��� 10%�� �����Ͽ� �ش�. 
//100�� �̻��� ��� ��ü �ݾ��� 12%�� �����Ͽ� �ش�. 
//X���� ������ ����� �󸶰� �־�� �ϴ°�? 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int price=5000;
	double ratio1=1-0.1;
	double ratio2=1-0.12;
	int money;
	
	int num;
	
	printf("�����Ϸ��� ��ũ ���� �Է�:");
	scanf("%d", &num);
	
	if(num>=100) {//100�� �̻��� ���� �� : ��ü �ݾ��� 12%����
		money = num * price * ratio2; 
		printf("%f\n", price * ratio2);
		printf("�� ���� ����:%d��\n", money);
	} else if(num>=10) {//10�� �̻� ���� �� : ��ü �ݾ��� 10%���� 
		money = num * price * ratio1;
		printf("%f\n", price * ratio1);
		printf("�� ���� ����:%d��\n", money); 
	} else {//10�� �̸��� ��� : ���� 5000��
		money = num * price;
		printf("�� ���� ����:%d��\n", money); 
	}
	return 0;
}
