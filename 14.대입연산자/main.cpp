#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int s1, s2;
	s1=s2=5;
	
	printf("#.1결과:%d\n", s1+=1);
	printf("#.2결과:%d\n", s1-=1);
	printf("#.3결과:%d\n", s1*=s2);
	printf("#.4결과:%d\n", s1/=s2);
	printf("#.5결과:%d\n", s1%=s2);
	return 0;
}
