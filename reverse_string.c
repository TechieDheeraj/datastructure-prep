#include<stdio.h>
#include<string.h>

void swap_chars(char *start, char *end) 
{
	char extra ='\0';
	char *tmp = NULL;

	tmp = start;
	while(1)
	{
		extra = *tmp;
		*tmp = *end;
		*end = extra;

		if (tmp == end-1 | tmp == end) {
		//	printf("String is reversed\n");
			break;
		}		
		tmp++;
		end--;
	}
}

void get_index_and_swap(char *start, long int size)
{
	char *tmp = NULL;
	int i = 0;
	int word_start = 0;

	int start_idx = 0;
	int end_idx = 0;

	tmp = start;
	while(*tmp != '\0')
	{
		if(*tmp == ' ' || i == size)
		{
			end_idx = (i == size ? size: i-1);
			start_idx = word_start;
			word_start = end_idx+2; 
			swap_chars(&start[start_idx], &start[end_idx]);
		}
		tmp++;
		i++;
	}
}

void do_reverse(char *start, long int size)
{
	int i =0;
	long int j = size;
	char extra = '\0';
	
	printf("Original string is %s\n", start);

	swap_chars(start, &start[size]);
	get_index_and_swap(start, size);
}

int main() 
{
	char str[]= "My Name is Dheeraj";
	long int size;
	
	size = strlen(str);
 	do_reverse(str, size-1);

	printf("New string is %s\n", str);

	return 0;
}
