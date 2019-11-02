#include <stdio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int n[5]={4,8,2,7,6};
	int tmp, i, j;
	
	for(i=0; i<5; i++) {
		for(j=0; j<5; j++) {
			if(n[i]>n[j]) {
			tmp= n[i];
			n[i]= n[j];
			n[j]= tmp;
			printf("%d,%d,%d,%d,%d\n", n[0], n[1], n[2], n[3], n[4]);
			} 
		}
	}
	getch();
	return 0;
}
