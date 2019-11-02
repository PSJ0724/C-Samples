//세 과목의 성적을 입력 받아 합계와 평균을 구해라. 
//평균이 90이상이면"A"
//80이상이면"B" 
//70이상이면"C"
//60이상이면"D"
//60미만이면"F"를 출력하시오. 
#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int kor, eng, mat;
	double avg;
	char grade;
	
	printf("국아, 영어, 수학 입력:");
	scanf("%d%d%d", &kor, &eng, &mat);
	
	avg=(kor+eng+mat)/3.0;
	
	if(avg>=90) {//평균90점 이상: A
		grade = 'A'; 
	} else if(avg>=80) {//평균 80점 이상: B
		grade = 'B';
	} else if(avg>=70) {//평균 70점 이상: C
		grade = 'C'; 
	} else if(avg>=60) {//평균 60점 이상: D
		grade = 'D'; 
	} else if(avg>=50) {//평균 50점 이상: F
		grade = 'F'; 
	}
	
	printf("학생 성적 등급: %c\n", grade);
	return 0;
}
