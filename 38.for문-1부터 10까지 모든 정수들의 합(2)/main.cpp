#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int su, sum=0;
	
	for(su=10; su>=1; su--)
	sum +=su;
	printf("1~10까지 정수들의 총합:%d\n", sum);
	return 0;
}
