#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	static int a=0;
	
	if(a>=2) return 0;
	else   a=a+1; 
	
	printf("%d:재귀함수 출력\n", a);
	
	main(argc, argv);
	return 0;
}
