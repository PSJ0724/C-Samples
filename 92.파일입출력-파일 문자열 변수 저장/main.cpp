#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	FILE *fp;	int n;	int sum=0;
	
	if((fp=fopen("e:\\test.txt", "w"))==NULL) 
	{return 0;}
		while(1) {
			printf("정수 입력(종료0):");	scanf("%d", &n);
			
			if(n==0)	break;
			fprintf(fp,"%d\n", n);
			}
			fclose(fp);
			
			if((fp=fopen("e:\\test.txt", "r"))==NULL)
			{return 0;}
				while((fscanf(fp,"%d",&n))!=EOF) {
					sum += n;
					printf("n=%d, sum=%d\n", n, sum);
				}
				fclose(fp);
	return 0;
}
