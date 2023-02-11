#include <stdio.h>

char *ordinal(int v)
{
	char* res = "";
	if(v%10 == 1 && v/10 != 1)
	{
		res = "st";
	}
	else if (v % 10 == 2 && v / 10 != 1)
	{
		res = "nd";
	}
	else if (v % 10 == 3 && v / 10 != 1)
	{
		res = "rd";
	}
	else 
	{
		res = "th";
	}
	
	return res;
}

int main()
{
	int c;

	/* output a table of 100 numbers */
	for( c=1; c<=20; c++ )
	{
		printf("%3d%s\t%3d%s\t%3d%s\t%3d%s\t%3d%s\n",
				c, ordinal(c),
				c+20, ordinal(c+20),
				c+40, ordinal(c+40),
				c+60, ordinal(c+60),
				c+80, ordinal(c+80)
			  );
	}

	return(0);
}
