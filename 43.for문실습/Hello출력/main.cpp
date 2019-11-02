//다음을 출력하시오. 
//1.Hello
//2.Hello
//3.Hello
//4.Hello
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;
	
	for(n=1; n<=4; n++) {
		printf("%d. Hello\n", n);
	}
	return 0;
}
