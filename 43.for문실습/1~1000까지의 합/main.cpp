//1~1000������ ���� ���ϵ�. 
//3�� ����� �����ϰ� 
//3�� ����̸鼭 5�� ����� �������� �ʴ� 
//���α׷��� �ۼ��Ͻÿ�. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int n;
	int sum = 0;
	
	for(n=1; n<=1000; n++) {
		if(n%3==0 && n%5!=0) {
			continue;
		}
		
		sum += n;
		printf("n= %d, sum=%d\n", n, sum);
	}
	return 0;
}
