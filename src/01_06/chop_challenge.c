#include <stdio.h>
#include <stdlib.h>

char *left(char *s,int len)
{
	char *res = (char*)malloc((len+1) * sizeof(char));
	for(int i = 0; i < len; i++)
	{
		res[i] = s[i];
	}
	res[len]  = '\0';
	return res;
}

char *right(char *s,int len)
{
	size_t stringLen = strlen(s);
	char *res = (char *)malloc((len + 1) * sizeof(char));
	for (int i = 0; i < len; i++)
	{
		res[i] = s[stringLen - len +i];
	}
	res[len] = '\0';
	return res;
}

char *mid(char *s,int offset, int len)
{
	char *res = (char *)malloc((len + 1) * sizeof(char));
	for (int i = 0; i < len; i++)
	{
		res[i] = s[offset + i];
	}
	res[len] = '\0';
	return res;
}

int main()
{
	char string[] = "Once upon a time, there was a string";

	printf("Original string: %s\n",string);
	printf("Left %d characters: %s\n",16,left(string,16));
	printf("Right %d characters: %s\n",18,right(string,18));
	printf("Middle %d characters: %s\n",11,mid(string,13,11));

	return(0);
}
