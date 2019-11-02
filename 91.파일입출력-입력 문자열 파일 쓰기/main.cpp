#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
/*
int main(int argc, char** argv) {
	FILE *fp;
	char str[80]; int line=1;
	
	if((fp=fopen("e:\\test.txt", "w"))==NULL) {
		printf("File open 에러\n");		return 0;
	}
	
	while(1) {
		printf("문자열 입력:"); gets(str);
		
		if(str[0]=='\0')	break;
		fprintf(fp,"%3d:%s\n",line,str);
		line++;
	}
	fclose(fp);
	return 0;
}
*/