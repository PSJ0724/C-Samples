#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n[5]={10, 20, 30, 40, 50};
	int i;
	int *pn;
	pn = n;
	
	for(i=0; i<5; i++) {
		printf("�迭 %d�ε����� �ּ�=%d\n", i, &n[i]);
		printf("pn+%d=%d\n", i, pn+i);
		printf("�ε���%d�� ��=%d\n", i, *(pn+i));
	}
	return 0;
}
