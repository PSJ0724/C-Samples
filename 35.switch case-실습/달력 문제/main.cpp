//�� ��¥�� ���� ��ġ�� ����Ͻÿ�. 
//1~7 : ù��° �� / 8~14 : �ι�° ��.../29~31 : �ټ���° �� 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int day;
	int res;
	
	printf("��¥ �Է�(1~31��):");
	scanf("%d", &day);
	
	if(day<1||day>31) {
		printf("�߸��� �Է��Դϴ�.\n");
	}
	
	switch((day-1)/7) {
		case 0 : printf("%d��: ù��° �� \n", day); break;
		case 1 : printf("%d��: �ι�° �� \n", day); break;
		case 2 : printf("%d��: ����° �� \n", day); break;
		case 3 : printf("%d��: �׹�° �� \n", day); break;
		case 4 : printf("%d��: �ټ���° �� \n", day); break;
	}
	return 0;
}
