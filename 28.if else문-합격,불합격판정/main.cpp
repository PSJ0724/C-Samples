#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int kor, eng, mat, avg;
	printf("3과목 성적 입력:");
	scanf("%d%d%d", &kor, &eng, &mat);
	avg=(kor+eng+mat)/3;
	
	if(avg<70)	printf("#.1불합격:평균 미달\n");
	else if(kor<60)	printf("#.2불합격:국어 미달\n");
	else if(eng<60)	printf("#.3불합격:영어 미달\n");
	else if(mat<60)	printf("#.4불합격:수학 미달\n");
	else			printf("합격:모든 조건을 만족\n");
	return 0;
}
