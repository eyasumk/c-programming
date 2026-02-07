/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 23:14:49 by emuluget          #+#    #+#             */
/*   Updated: 2026/02/07 23:20:53 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_print_numbers(void);

void ft_print_numbers(void)
{
	char num;
	num = 48;
	while (num <= 57)
	{
		write(1, &num, 1);
		num++;
	}
}
