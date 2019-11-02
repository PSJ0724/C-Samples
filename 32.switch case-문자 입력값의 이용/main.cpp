#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char ch;
	
	printf("문자 입력:"); scanf("%c", &ch);
	
	switch(ch) {
		case'a':printf("a가 입력됨\n"); break;
		case'A':printf("A가 입력됨\n"); break;
		default:printf("a와 A이외의 문자가 입력됨\n");
	}
	return 0;
}
