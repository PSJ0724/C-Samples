#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n[5]; int i;
	
	for(i=0; i<5; i++) {
		n[i]=i+1;
	}
	for(i=0; i<5; i++) {
		printf("%d\n", n[i]);
	}
	return 0;
}
