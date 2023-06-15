#include <stdio.h>

int main()
{
	int km, m, cm; /*declared variables*/
	float inches; 
	  
	printf("input distance between city A & B:");
	scanf("%d", &km);
	
	m = km * 1000;
	inches = km * 39370.1;
	cm = m * 100;

	printf("%d,%f,%d", m,inches,cm);
	
}
