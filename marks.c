#include <stdio.h>

int main()
{
	int marks1, marks2, marks3, marks4, marks5;
	float aggregate_marks, percentage_marks1, percentage_marks2, percentage_marks3, percentage_marks4, percentage_marks5, total_marks;

	printf("Input student marks:");
	scanf("%d %d %d %d %d", &marks1, &marks2, &marks3, &marks4, &marks5);
	
	total_marks = marks1 + marks2 + marks3 + marks4 + marks5;
 	aggregate_marks = total_marks / 5;
	
	printf("%f %d %d %d %d %d", aggregate_marks, marks1, marks2, marks3, marks4, marks5);


}
