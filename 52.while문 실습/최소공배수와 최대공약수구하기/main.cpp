//�μ��� �ּ� ������� �ִ� ������� ���ϴ� ���α׷��� �ۼ��϶� 
//�ּҰ����=����� �߿��� ���� ���� ���� 
//�ִ�����=����� �߿��� ���� ū ���� 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n1, n2;
	int loop=1;
	int min, max; //min:�ּҰ����, max:�ִ�����
	
	printf("n1�Է�:"); scanf("%d", &n1);
	printf("n2�Է�:"); scanf("%d", &n2);
	
	while(loop<=n1) {
		
		if(loop==1) {
			max=loop;
		}else if(n1%loop==0 && n2%loop==0) {//������ �Ǵ� ���
			if(max<loop) 	max=loop;	//�ִ����� ���� 
		}
		printf("max = %d\n", max);
		loop++; 
	}
	
	min = max*(n1/max) * (n2/max);
	
	printf("�ִ� �����:%d\n", max);
	printf("�ּ� �����:%d\n", min); 
	return 0;
}
