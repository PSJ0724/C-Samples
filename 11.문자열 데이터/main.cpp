#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char name1[30], name2[30];
	printf("이름을 입력"); scanf("%s", name1);
	printf("이름을 입력"); scanf("%s", name2);
	
	printf("나의 이름은 %s입니다.\n", name1);
	printf("나의 이름은 %s입니다.\n", name2);
	return 0;
}
