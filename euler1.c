/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 11:51:22 by fhenrion          #+#    #+#             */
/*   Updated: 2019/12/25 11:54:23 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9.
The sum of these multiples is 23.
Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int		main(void)
{
	int i = 0;
	int sum = 0;

	while (i < 1000)
	{
		if (!(i % 3) || !(i % 5))
			sum += i;
		i++;
	}
	printf("result : %i\n", sum);
	return (0);
}