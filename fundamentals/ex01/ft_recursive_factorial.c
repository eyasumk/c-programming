/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/18 17:37:09 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/19 07:21:10 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;

	fact = 1;
	if (nb == 0 || nb == 1)
		return (fact);
	else if (nb > 1)
	{
		fact *= nb;
		return (fact * ft_recursive_factorial(nb - 1));
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