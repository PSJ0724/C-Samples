#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char a[10];	int i;
	printf("문자열 입력:");	scanf("%s", &a);
	
	printf("한글자씩 출력\n");	
	for(i=0; i<10; i++) {
		printf("%c\n", a[i]);
	} 
	printf("\n\n전체 문자열:%s\n", a);
	return 0;
}
