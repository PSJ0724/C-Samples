//�� ������ ������ �Է� �޾� �հ�� ����� ���ض�. 
//����� 90�̻��̸�"A"
//80�̻��̸�"B" 
//70�̻��̸�"C"
//60�̻��̸�"D"
//60�̸��̸�"F"�� ����Ͻÿ�. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int kor, eng, mat;
	double avg;
	char grade;
	
	printf("����, ����, ���� �Է�:");
	scanf("%d%d%d", &kor, &eng, &mat);
	
	avg=(kor+eng+mat)/3.0;
	
	if(avg>=90) {//���90�� �̻�: A
		grade = 'A'; 
	} else if(avg>=80) {//��� 80�� �̻�: B
		grade = 'B';
	} else if(avg>=70) {//��� 70�� �̻�: C
		grade = 'C'; 
	} else if(avg>=60) {//��� 60�� �̻�: D
		grade = 'D'; 
	} else if(avg>=50) {//��� 50�� �̻�: F
		grade = 'F'; 
	}
	
	printf("�л� ���� ���: %c\n", grade);
	return 0;
}
