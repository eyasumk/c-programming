/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:11:56 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/05 22:12:55 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = (*a) / (*b);
	*b = (*a) % (*b);
	*a = temp;
}
// int main()
// {
//     int     a;
//     int     b;

//     a = 3;
//     b = 5;

//     ft_ultimate_div_mod(&a, &b);

//     printf("\na = %d\n", a);
//     printf("\nb = %d\n", b);

//     return (0);
// }
