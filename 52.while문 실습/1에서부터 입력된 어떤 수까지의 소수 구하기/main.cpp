//1�������� �Էµ� � ������ ���� �ִ� �Ҽ��� ã�� ���α׷��� �ۼ��϶�. 
//(1�� �ڱ� �ڽŸ����� ������ �������� 1���� ū ���� ����) 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int loop = 1;
	int search;
	int isData; // 1�̸� �Ҽ�, 0�̸� �Ҽ� �ƴ�.
	
	printf("���� �Է�:");
	scanf("%d", &n);
	
	while(loop<=n) { //1~n�� ������ ���� ���� 
		
		search = 2;
		isData = 1;
		 
		while(search<loop) { //���� �� �� ������ ���� ��� Ȯ��
			
			if(loop%search==0) {
				printf("loop=%d, search=%d\n", loop, search);
				isData=0; //����� �߰ߵ� ���-> �Ҽ� �ƴ� 
				break;
			}
			search++; 
		}
		
		if(isData) { //1�̸� �Ҽ�, 0�̸� �Ҽ� �ƴ�
			printf("%d�� �Ҽ�\n", loop); 
		}
		loop++;
	} 
	return 0;
}
