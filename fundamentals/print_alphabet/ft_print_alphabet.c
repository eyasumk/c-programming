/******************************************************************************/
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 17:24:48 by emuluget          #+#    #+#             */
/*   Updated: 2026/02/02 17:24:51 by emuluget         ###   ########.fr       */
/*                                                                            */
/******************************************************************************/

#include <unistd.h>

void	ft_print_alphabet(void);

void	ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i <= 122)
	{
		write(1, &i, 1);
		i++;
	}
}
