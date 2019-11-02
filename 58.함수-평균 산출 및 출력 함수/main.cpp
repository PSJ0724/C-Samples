#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
double avg(int j, int k) {
	int total; double f;
	total = j+k;
	f=total/2.0;
}
int show_avg(int a, int b, double c) {
	printf("%d¿Í%dÀÇ Æò±Õ:", a, b);
	printf("%.1f\n", c);
}
int main(int argc, char** argv) {
	int i, j;
	double f;
	
	i=2;
	j=3;
	
	f=avg(i,j);
	
	show_avg(i,j,f);
	return 0;
}
