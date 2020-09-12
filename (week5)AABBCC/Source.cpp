#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int main()
{
	char Al[1000];
	int temp = 0;
	scanf("%s", &Al);
	for (int i = 0; Al[i] != '\0'; i++)
	{
		temp = 0;
		for (int n = i-1; n >= 0; n--)
		{
			if (Al[n] != Al[i])
			{
				temp++;
			}
		}
		if (temp == i)
		{
			printf("%c", Al[i]);
		}
	}
	return 0;
}