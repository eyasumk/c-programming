/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:13:25 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/19 07:18:19 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (fact);
	else if (nb > 1)
	{
		while (nb > 1)
		{
			fact *= nb;
			nb--;
		}
		return (fact);
	}
	return (0);
}

/* int main()
{
	int fact;
	fact = 5;

	printf("%d", ft_iterative_factorial(fact));
	return 0;
} */