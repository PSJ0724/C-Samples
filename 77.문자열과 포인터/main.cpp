#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char s[10]="Seoul";
	int i;
	
	for(i=0; s[i]!=NULL; i++) {
		printf("%c\n", *(s+i));
	}
	return 0;
}
