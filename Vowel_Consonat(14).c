#include<stdio.h>

int main()
{
	int lower_case, upper_case;
	char c;
	printf("Enter the character:\n");
	scanf("%c",&c);
	
	lower_case= (c=='a'|| c=='e' || c=='i' || c=='o' || c=='u');
	
	upper_case= (c=='A'|| c=='E' || c=='I' || c=='O' || c=='U');
	
	if(lower_case || upper_case)
	{
		printf("Vowel");
	}
	else
	{
		printf("Consonant");
	}
	return 0;
}
