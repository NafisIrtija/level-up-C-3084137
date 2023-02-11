#include <stdio.h>
#include <string.h>

void add_coma(char *s, int v)
{
	char temp[16];
	sprintf(temp, "%d", v);
	int a, b, len;
	a = b = 0;
	len = strlen(temp);
	while(temp[b] != '\0')
	{
		// if(len%3==0)
		// {
		// 	if(len != 0)
		// 	{
		// 	s[a] = ',';
		// 	a++;
		// 	}
		// 	s[a] = temp[b];
		// }
		// else
		// {
		// 	s[a] = temp[b];
			
		// }
		if(len%3)
		{
			s[a] = temp[b];
		}
		else
		{
			if(b != 0)
			{
				s[a] = ',';
				a++;
			}
			s[a] = temp[b];
		}
		a++;
		b++;
		len--;

	}
	s[a] = '\0';

}

int main()
{
	int values[10] = {
		123, 1899, 48266, 123456, 9876543,
		10100100, 5, 500000, 99000111, 83
	};
	char str[16];
	for(int i = 0; i < 10; i++) 
	{
		add_coma(str, values[i]);
		printf("%s\n",str);
	}
	// printWithComma(1234);
	return(0);
}
