/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:11:17 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/07 16:11:47 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	j = size - 1;
	while (i < j)
	{
		temp = tab[i];
		tab[i] = tab[j];
		tab[j] = temp;
		j--;
		i++;
	}
}

// int	main(void)
// {
// 	int	nums[] = {1, 2, 3, 4, 5};
// 	int	len;

// 	len = sizeof(nums) / sizeof(nums[0]);
// 	ft_rev_int_tab(nums, len);
// 	return (0);
// }
