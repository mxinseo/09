#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int grade[SIZE];
	int i, average;
	int sum = 0;
	
	for(i=0; i<SIZE; i++){
		printf("학생 성적을 입력하시오: ");
		scanf("%d", &grade[i]);
		sum += grade[i]; 
	}
	
	average = sum / SIZE;
	printf("성적 평균 : %d\n", average);
		
	return 0;
}

