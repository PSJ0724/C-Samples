#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n1, n2;
	printf("정수 입력:");  scanf("%d", &n1);
	n2=n1%2;
	if(n2==0)printf("입력된 수는 짝수\n");
	if(n2 !=0)printf("입력된 수는 홀수\n");
	return 0;
}
