#include <stdio.h>
int main()
{
	float csc201, csc205, sta205, tot, avr, prcnt;
	printf("Enter your score for CSC201: ");
	scanf("%f", &csc201);
	
	printf("Enter your score for CSC205: ");
	scanf("%f", &csc205);
	
	printf("Enter your score for CSC201: ");
	scanf("%f", &sta205);
	
	tot = csc201 + csc205 + sta205;
	printf("Your total score is: %f\n", tot);
	
	avr = tot/3;
	printf("Your average is: %f\n", avr);
	
	prcnt = (tot/60)*100;
	printf("Your total percentage score is: %f\n", prcnt);
	
	return 0;
}
