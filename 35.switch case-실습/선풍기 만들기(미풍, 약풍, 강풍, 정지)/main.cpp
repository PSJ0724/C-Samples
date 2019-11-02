//¼±Ç³±â ¸¸µé±â(¹ÌÇ³, ¾àÇ³, °­Ç³, Á¤Áö) 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int num;
	
	printf("°ø¾à ÀÔ·Â(1.¹ÌÇ³/2.¾àÇ³/3.°­Ç³/4.Á¤Áö):\n");
	scanf("%d", &num);
	
	switch(num) {
		case 1 : printf("¹ÌÇ³ ½ÇÇàµÊ\n"); break;
		case 2 : printf("¾àÇ³ ½ÇÇàµÊ\n"); break;
		case 3 : printf("°­Ç³ ½ÇÇàµÊ\n"); break;
		default : printf("Á¤Áö\n"); break;
	}
	return 0;
}
