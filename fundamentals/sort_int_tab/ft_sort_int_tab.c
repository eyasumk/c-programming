/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emuluget <emuluget@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:08:53 by emuluget          #+#    #+#             */
/*   Updated: 2025/08/07 16:14:20 by emuluget         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	min_idx;
	int	temp;

	i = 0;
	j = 0;
	while (i < size - 1)
	{
		min_idx = i;
		j = i + 1;
		while (j < size)
		{
			if (tab[j] < tab[min_idx])
			{
				min_idx = j;
			}
			j++;
		}
		temp = tab[i];
		tab[i] = tab[min_idx];
		tab[min_idx] = temp;
		i++;
	}
}

// int main() {
//     int arr[] = {3, 1, 12, 7, 2};
//     int n = sizeof(arr) / sizeof(arr[0]);

//     printf("Original array: ");
//     printArray(arr, n);

//     ft_sort_int_tab(arr, n);

//     printf("Sorted array: ");
//     printArray(arr, n);

//     return (0);
// }
