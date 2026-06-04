#include <unistd.h>

int is_alpha(char c)
{
	return ((c >= 65 && c <= 90) || (c >= 97 && c <= 122));
}
int is_alnum(char c)
{
	return (is_alpha(c) || (c >= '0' && c <= '9'));
}
int is_low(char c)
{
	return (c >= 97 && c <= 122);
}
int is_up(char c)
{
	return (c >= 65 && c <= 90);
}
char to_low(char c)
{
	return (c  + 32);
}
char to_up(char c)
{
	return (c - 32);
}
void str_capitalizer(char *str)
{
	int i;
	char c;

	i = 0;
	while(str[i])
	{
		c = str[i];
		if(is_alpha(c))
		{
			if(i == 0 || !is_alnum(str[i-1]))
			{
				if(is_low(c))
					c = to_up(c);
			}
			else
			{
				if(is_up(c))
					c = to_low(c);
			}			
		}
		write(1, &c, 1);
		i++;
	}
}
int main(int argc, char **argv)
{
	int i;

	i = 1;
	if(argc > 1)
	{
		while(i < argc)
		{
			str_capitalizer(argv[i++]);
			write(1, "\n", 1);
		}
	}
	else
		write(1, "\n", 1);

	return (0);
}
