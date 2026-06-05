#include <unistd.h>
int ft_atoi(char *str)
{
	int i;
	int sign;
	int result;

	i = 0;
	sign = 1;
	result = 0;

	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' || str[i] == '+')
	{
		if(str[i] == '-')
			sign = -1;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	return (result * sign);
}
void ft_putchar(char c)
{
	write(1, &c, 1);
}
void print_hex(int num)
{
	char hex[] = "0123456789abcdef";

	if(num >= 16)
		print_hex(num / 16);
	ft_putchar(hex[num % 16]);
}
int main(int argc, char **argv)
{
	if(argc == 2)
		print_hex(ft_atoi(argv[1]));
	write(1, "\n", 1);
	return (0);
}
