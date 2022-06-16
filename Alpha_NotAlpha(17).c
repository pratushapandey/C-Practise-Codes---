#include<stdio.h>

//  CHECK WHETHER THE INPUT VAlUE IS ALPHABET OR NOT

int main()
{
	char c;
	printf("Enter the character:\n");
	scanf("%c",&c);
	
	if(c>='a'&& c<='z' || c>='A' && c<='Z')
	{
		printf("Alphabet");
	}
	else
	{
		printf("Not an alphabet");
	}
	return 0;
}
