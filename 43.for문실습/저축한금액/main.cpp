//ù���� 10���� �����ϰ�, ���������� ������ 2�踦 �����ϴ� ������� �� �� ���� ������ �ݾ���? 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	long long money = 10; // long long �ڷ���: 8����Ʈ, ����������(%lld)
	long long sum = 0;
	int day;
	
	for(day=1; day<=31; day++) {
		sum += money;
		printf("����ݾ�:%lld, �����ݾ�:%lld, ����:%d\n", money, sum, day);
		
		money *=2;
	}
	 
	 printf("�� ���� �ݾ�:%lld��\n", sum);
	return 0;
}
