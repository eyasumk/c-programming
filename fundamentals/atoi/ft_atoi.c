/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/17 06:56:05 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/18 00:22:44 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check(char *str)
{
	int	i;

	i = 0;
	while ((str[i] != '\0' && str[i] == 32) || (str[i] >= 9 && str[i] <= 13))
	{
		i++;
	}
	return (i);
}

int	ft_atoi(char *str)
{
	int	i;
	int	parity;
	int	number;

	i = 0;
	parity = 0;
	number = 0;
	i = check(str);
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			parity++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		number = number * 10 + (str[i] - '0');
		i++;
	}
	if (parity % 2)
	{
		number *= -1;
	}
	return (number);
}
// void main()
// {
//     char val[] = "   ---+--+1234ab567";
//     printf("%d", ft_atoi(val));
// }
