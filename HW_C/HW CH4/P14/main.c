#include <stdio.h>
#include <stdlib.h>
#define STUDENTS 3
#define EXAMS 4
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int minimum(const int grades[][EXAMS],int pupils,int tests);
int maximum(const int grades[][EXAMS],int pupils,int tests);

double average(const int setofGrades[],int tests);
void printArray(const int grades[][EXAMS],int pupils,int tests);

int main(void)
 {
	int student;
	const int studentGrades[STUDENTS][EXAMS] =
	{{77,68,86,73},
	{96,87,89,78},
	{70,90,86,81}};
		
		printf("The array is :\n");
		printArray(studentGrades,STUDENTS,EXAMS);
		
	printf("\n\nLowest grade: %d\nHighest grade: %d\n",minimum(studentGrades,STUDENTS,EXAMS),maximum(studentGrades,STUDENTS,EXAMS));
	for(student=0;student<STUDENTS;student++)
	{
		printf("The average grade for student %d is %.2f\n",student,average(studentGrades[student],EXAMS));
	}
	
	system("pause");
	return 0;
}

int minimum(const int grades[][EXAMS],int pupils,int tests)
{
	int mini=grades[0][0];
	int i,j;
	for(i=pupils-1;i>=0;i--)
	{
		for(j=tests-1;j>=0;j--)
		{
			mini=(grades[i][j]<mini)?grades[i][j]:mini;
		}
	}
	return mini;
}

int maximum(const int grades[][EXAMS],int pupils,int tests)
{
	int max=grades[0][0];
	int i,j;
	for(i=pupils-1;i>=0;i--)
	{
		for(j=tests-1;j>=0;j--)
		{
			max=(grades[i][j]>max)?grades[i][j]:max;
		}
	}
	return max;
}


double average(const int setofGrades[],int tests)
{
	int i,j;
	double average=0;
	for(i=0;i<EXAMS;i++)
	{
		average=average+setofGrades[i];

	}
	return average/tests;


}

void printArray(const int grades[][EXAMS],int pupils,int tests)
{
	int i,j;
	printf("                 ");
	for(i=0;i<tests;i++)
	{
		printf("[%d]	",i);
	}
	printf("\n");
	for(j=0;j<pupils;j++)
	{
		printf("studentGrades[%d] ",j);
		for(i=0;i<tests;i++)
		{
			printf("%d	",grades[j][i]);
		}
		printf("\n");
	}
	
	
}
