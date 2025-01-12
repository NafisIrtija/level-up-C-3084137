#include <stdio.h>

#define W_MAX 100
#define W_MIN 16
#define W_DEFAULT 40

void printWrap(char *s)
{
	int count = 0;
	int c = 0;
	while(s[c] != '\0')
	{
		putchar(s[c]);
		if(s[c] == '\n')
			count = 0;
		else	
			count++;		
		if(count == W_DEFAULT - 1)
		{
			if(s[c+1] == ' ')
			{
				putchar(s[c+1]);
				c++;
			}		
			else
			{
				putchar('-');
			}
			putchar('\n');
			count = 0;
		}
		c++;
	}
}

int main(int argc, char *argv[])
{
	/* Shakespear's 18th Sonnet */
	static char *text = "Shall I compare thee to a summer's day? \
Thou art more lovely and more temperate:\n\
Rough winds do shake the darling buds of May, \
And summer's lease hath all too short a date;\n\
Sometime too hot the eye of heaven shines, \
And often is his gold complexion dimm'd;\n\
And every fair from fair sometime declines, \
By chance or nature's changing course untrimm'd;\n\
But thy eternal summer shall not fade, \
Nor lose possession of that fair thou ow'st;\n\
Nor shall death brag thou wander'st in his shade, \
When in eternal lines to time thou grow'st:\n\
So long as men can breathe or eyes can see, \
So long lives this, and this gives life to thee.";

printWrap(text);

	return(0);
}
