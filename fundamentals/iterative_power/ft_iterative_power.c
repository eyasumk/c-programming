/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:55:23 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/19 07:26:48 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_iterative_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 || power == 0)
		return (1);
	else if (power > 0)
	{
		while (power > 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
	return (0);
}

/* int main()
{
	int nb;
	int power;
	
	nb = 2;
	power = 3;
	printf("%d", ft_iterative_power(nb, power));
	return (0);
} */