#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int kor, eng, mat, avg;
	printf("3���� ���� �Է�:");
	scanf("%d%d%d", &kor, &eng, &mat);
	avg=(kor+eng+mat)/3;
	
	if(avg<70)	printf("#.1���հ�:��� �̴�\n");
	else if(kor<60)	printf("#.2���հ�:���� �̴�\n");
	else if(eng<60)	printf("#.3���հ�:���� �̴�\n");
	else if(mat<60)	printf("#.4���հ�:���� �̴�\n");
	else			printf("�հ�:��� ������ ����\n");
	return 0;
}
