#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ex_func(int *sa, int *sb) {
	*sa+=5; *sb+=5;
	printf("°ª1:%d, %d\n", *sa, *sb);
}
int main(int argc, char** argv) {
	int ma=100, mb=200;
	ex_func(&ma, &mb);
	printf("°ª2:%d, %d\n", ma, mb);
	return 0;
}
