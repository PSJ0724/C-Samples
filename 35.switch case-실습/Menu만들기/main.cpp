//���� ���α׷��� ����ÿ�. 
//===========================
//		Menu
//===========================
//	1.�л� �̸� �Է� 
//	2.���� 3���� �з� 
//	3.�л� �̸� ��� 
//	4.�հ� ��� 
//	5.��� ��� 
//	6.���� 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name[20];
	int kor, eng, mat;
	int sum;
	double avg;
	int n;
	
	while(1) {
		printf("============================\n"
			" Menu \n"
			"============================\n"
			"1.�л� �̸� �Է�\n"
			"2.���� 3���� �Է�\n"
			"3.�л� �̸� ���\n"
			"4.�հ� ���\n"
			"5.��� ���\n"
			"6.����\n");
			
		printf("����:");
		scanf("%d", &n);
			
		switch(n) {
			case 1 : printf("�л� �̸� �Է�\n");	scanf("%s", name); break;
			case 2 : printf("���� �Է�:");	scanf("%d", &kor);
			         printf("���� �Է�:");	scanf("%d", &eng);
				     printf("���� �Է�:");	scanf("%d", &mat);
				     sum=kor+eng+mat;
				     avg=sum/3.0;
				     break;
			case 3 : printf("�Էµ� �л��� �̸��� %s�Դϴ�.\n", name); break;	 
			case 4 : printf("�� ������ �հ�:%d��\n", sum); break;
			case 5 : printf("�� ������ ���:%.4f��\n", avg); break;
			case 6 : printf("���α׷��� �����մϴ�.\n");
			         return 0;
			default : printf("�߸��� �Է��Դϴ�.\n");    
		}
		printf("\n\n\n");
	}   
	return 0;
}
