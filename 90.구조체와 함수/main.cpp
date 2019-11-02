#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct phone {
	char n[20];
	int p;
}PHONE;

int show(PHONE ph) {
	printf("%s,", ph.n);
	printf("%d", ph.p);
}
int main(int argc, char** argv) {
	PHONE ph={"스마트폰", 2000};
	show(ph);
	return 0;
}
