#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int su, sum=0;
	
	for(; su<=10;)
	sum+=su++;
	
	printf("1~10���� �������� �� ��:%d\n", sum);
	return 0;
}
