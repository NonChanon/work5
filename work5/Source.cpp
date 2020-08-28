#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	char str1[1000];
	printf("Input first word: ");
	scanf("%s", &str);
	printf("Input second word: ");
	scanf("%s", &str1);
	if (strlen(str) == strlen(str1))
	{
		printf("The same number of characters");
	}
	else
	{
		printf("The number of characters is not the same");
	}
	return 0;
}
