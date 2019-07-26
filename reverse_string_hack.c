#include<stdio.h>
#include<string.h>

char *print_reverse(char *start, long int size)
{
	int i =0;
	long int j = size;
	char *tmp = NULL;
	char *temp = NULL;
	char extra = '\0';
	
	tmp = start;
	temp = 	&start[size];
	
	printf("Original string is %s\n", start);

	for(;j>0;j--)
	{
		if ( start[j] == ' ')
		{
			start[j] ='\0';
			printf("%s ",&start[j+1]);
		}
		
	}
	printf("%s \n",&start[j]);
}

int main() 
{
	char start[]= "My Name is Dheeraj";
	long int size;
	
	size = strlen(start);
	print_reverse(start, size-1);


	return 0;
}
