//�ŷ�ó �ſ뵵 
//B-10/ D-20/ G-30
//������ ����Ͻÿ�.
//�ſ뵵 B : ���� : 10
//�ſ뵵 D : ���� : 20
//�ſ뵵 G : ���� : 30
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char credit;
	
	printf("�ŷ�ó �ſ뵵 �Է�(B/D/G):");
	scanf("%c", &credit);
	
	switch(credit) {
		case 'B' : printf("�ſ뵵:%c / ����:10\n", credit); break;
		case 'D' : printf("�ſ뵵:%c / ����:20\n", credit); break;
		case 'G' : printf("�ſ뵵:%c / ����:30\n", credit); break;
		default : printf(" �߸��� �Է��Դϴ�.\n");
	}
	
	return 0;
}
