//1���� �����Ͽ� Ȧ���� ���� ���ϸ鼭 
//�� ���� 10000�� ���� �ʴ� ������ ���� ���ϴ� ���α׷��� �ۼ��Ͽ���. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int sum = 0;
	int last;
	
	for(n=1; 1; n++) {
		if(n%2==1) {
			sum +=n;
			last = n;
			printf("last=%d, sum=%d\n", last, sum);
			
			if(sum>=10000) {
				break;
			}
			
		}
	}
	return 0;
}
