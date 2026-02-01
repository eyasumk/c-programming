/* ************************************************************************** */
/*                                                                            */
/*                                                                            */
/*   ft_putchar.c                                                             */
/*                                                                            */
/*   By: Eyasu Mulugeta <jobs.eyasu@gmail.com>                                */
/*   https://www.linkedin.com/in/eyasumk                                      */
/*   https://github.com/eyasumk                                               */
/*   Created: 2025/08/01 00:52:41 by Eyasu Mulugeta                           */
/*   Updated: 2025/08/04 17:06:48 by Eyasu Mulugeta                           */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}
