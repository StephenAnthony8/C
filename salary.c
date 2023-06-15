#include <stdio.h>
int main()
    /*Ramesh’s basic salary is input through the keyboard. His dearness
allowance is 40% of basic salary, and house rent allowance is 20% of
basic salary. Write a program to calculate his gross salary.*/
{
	int salary, dearness_allowance, house_rent, gross_salary;
	printf("Type in your salary");
	scanf("%d", &salary);

	dearness_allowance = 0.4 * salary;
	house_rent = 0.2 * salary;

	gross_salary = salary + dearness_allowance + house_rent;
	
	printf("\n %d \n", gross_salary);	
}
