#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>
#include <pthread.h>

void *studentCncil(void *args)
{
	int gap;
	char *department, *stateOfOrigin, *name, *email;
	if(gap == 0)
	{
	printf("%s\n %s\n %s\n %s\nYou can vote", name, email, department, stateOfOrigin);	  
	}
	else
	{
	printf("Sorry you are not eligible to vote");
	}
	return NULL;
}
void *ClassRep(void *args)
{
	return NULL;	
}
void *ClassLevel(void *args)
{
	return NULL;	
}
void *CGPA(void *args)
{
	return NULL;	
}		




int main()
{
	char department, stateOfOrigin, name, email;
	float cgpa;
	int gap, gap1, gap2, gap3, class_rep, class_lev;
	pthread_t classrep;
	pthread_t classlevel;
	pthread_t C_gpa;
	pthread_t studentcouncil;
	
	printf("Welcome!");
	printf("Please enter your name: ");
	scanf("%s", &name);
	printf("Please enter your email to receive updates: ");
	scanf("%s", &email);
	printf("What Department are you in?: ");
	scanf("%s", &department);
	printf("Your State of Origin: ");
	scanf("%s",&stateOfOrigin);
	
	fork();
	printf("Are you a class rep?\n 1. Yes\n 2. No\n");
	scanf("%d", &class_rep);
	if (class_rep == 1)
	{
	gap1 = pthread_create(&classrep, NULL, &ClassRep, NULL);
	}
	printf("Enter class level: ");
	scanf("%d", &class_lev);
	if (class_lev > 100)
	{
	gap2 = pthread_create(&classlevel, NULL, &ClassLevel, NULL);
	}
	printf("Enter CGPA: ");
	scanf("%f", &cgpa);
	if(5 >=cgpa>= 4.0)
	{
	gap3 = pthread_create(&C_gpa, NULL, &CGPA, NULL);
	}
	if (gap1 == 0 && gap2 == 0 && gap3 == 0)
	{
	gap = pthread_create(&studentcouncil, NULL, &studentCncil, NULL);
	}
	return 0;
}

	
	
