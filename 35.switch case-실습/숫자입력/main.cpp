//1~10까지의 숫자를 입력 받아 
//1은'one', 2는'two', 3은'three'를 출력하고 
//그 이외는 'error'을 출력하시오. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	
	printf("상수 입력:");
	scanf("%d", &num);
	
	switch(num) {
		case 1: printf("One \n"); break;
		case 2: printf("Two \n"); break;
		case 3: printf("Three \n"); break;
		default : printf("error \n");
	} 
	return 0;
}
