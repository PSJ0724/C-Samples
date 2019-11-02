#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int su, sum=0;
	
	for(su=1; su<=10; su+=2)
	sum +=su;
	
	printf("1~10±îÁö È¦¼öµéÀÇ ÃÑ ÇÕ:%d\n", sum);
	return 0;
}
