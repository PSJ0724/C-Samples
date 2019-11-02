#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int fact(int n) {
		if(n==1)	return 1;
		else		return(n*fact(n-1));
	}
int main(int argc, char** argv) {
	
	int x=3;
	
	printf("%d!ÀÇ °ª: %d\n", x, fact(x));
	
	return 0;
}
