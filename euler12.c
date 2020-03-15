/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:04:41 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 14:01:55 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
What is the value of the first triangle number to have over five hundred divisors?
*/

#include <stdio.h>
#include <stdlib.h>

static int	count_factors(int num)
{
	int n = num;
	int i = 2;
	int p = 1;

	if (num == 1) return 1;

	while (i * i <= n) 
	{
		int c = 1;
		while (n % i == 0)
		{
			n/= i;
			c++;
		}
		i++;
		p *= c;
	}
	if (n == num || n > 1)
		p *= 1 + 1;
	return p;
}

int			main(void)
{
	int	triangle_nb = 28;
	int	triangle_count = 7;

	while (count_factors(triangle_nb) <= 500)
	{
		triangle_count++;
		triangle_nb += triangle_count;
		printf("triangle : %i\n", triangle_nb);
	}
	printf("first triangle number to have over five hundred divisors : %i\n", triangle_nb);
	return (0);
}