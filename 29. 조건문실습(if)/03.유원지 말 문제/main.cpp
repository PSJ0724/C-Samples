//���������� ���� �¿��ִµ� ó�� 30���� �⺻����� 1�δ� 3000���̴�. 
//���Ŀ��� 10�д� 500������ �߰� ����� �޴´�. 
//���� ź �ð��� �Է� �޾Ƽ� ��ü �ݾ��� ����ϴ� ���α׷��� �ۼ��Ͽ���. 

#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int base=3000;
	int add=500;
	int basetime=30;
	
	int peo;
	int min;
	
	printf("�̿��� �ο� �Է�:");
	scanf("%d", &peo);
	printf("�̿� �ð� �Է�(����:��):");
	scanf("%d", &min);
	
	if(min<=basetime) { //�⺻ 30���� �ʰ����� ���� ���
		printf("�� �̿� �ݾ�:%d\n", base * peo); 
	} else{	//�⺻ 30���� �ʰ��ϴ� ���:10�д� 500��
		printf("�� �̿� �ݾ�:%d\n", (base+((min-basetime)/10+1)*add)*peo ); 
	}
	return 0;
}
