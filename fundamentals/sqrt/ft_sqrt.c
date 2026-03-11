/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/19 05:05:40 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/19 13:55:23 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
int	ft_sqrt(int nb)
{
	long	num;
	long	idx;

	num = nb;
	if (num <= 0)
	{
		return (0);
	}
	if (num == 1)
	{
		return (1);
	}
	idx = 2;
	if (num >= 2)
	{
		while (idx * idx <= num)
		{
			if (idx * idx == num)
			{
				return (idx);
			}
			idx++;
		}
	}
	return (0);
}

/* int main() {
	int num;

	num = 7;
	int res = ft_sqrt(num);
	printf("sqrt(%d) = %d\n", num, res);
	return (0);
} */