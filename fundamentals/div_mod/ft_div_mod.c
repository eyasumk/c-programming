/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 22:11:48 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/07 00:15:46 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
// int main()
// {
//     int     a;
//     int     b;
//     int     div;
//     int     mod;

//     a = 3;
//     b = 5;

//     ft_div_mod(a, b, &div, &mod);
//     return (0);
// }
