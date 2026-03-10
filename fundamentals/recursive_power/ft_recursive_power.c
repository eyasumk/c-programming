/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 00:01:51 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/19 07:29:28 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = 1;
	if (nb == 0 || power == 0)
		return (1);
	else if (power > 0)
	{
		result *= nb;
		return (result * ft_recursive_power(nb, power - 1));
	}
	return (0);
}

/* int main()
{
	int nb;
	int power;

	nb = 2;
	power = -3;
	printf("%d", ft_recursive_power(nb, power));
	return (0);
} */