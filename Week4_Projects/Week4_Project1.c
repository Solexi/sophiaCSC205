#include <stdio.h>
int main()
{
	int age;
	char name[5];
	printf("Enter your name: ");
	scanf("%s", name);
	printf("Enter your age: ");
	scanf("%d", &age);
	
	if (age > 18)
	{
	    printf("Hello %s, your age is %d. You can vote\n", name, age);
	}
	else
	{
	printf("Hello %s,your age is %d. You cannot vote:( \n", name, age);
	}
	return 0;
}
	

