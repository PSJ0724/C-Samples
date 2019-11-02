#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s1, s2;
	
	s1=5;	++s1;
	s2=5;	s2++;
	printf("#.1결과:s1=%d, s2=%d", s1, s2);
	
	s1=5;	--s1;
	s2=5;	s2--;
	printf("#.2결과:s1=%d, s2=%d", s1, s2);
	return 0;
}
