//다음과 같이 출력하시오. 
//A B C D E .....Z
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char c;
	
	for(c='A'; c<='Z'; c++) {
		printf("%c", c);
	}
	return 0;
}
