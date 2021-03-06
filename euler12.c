/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler12.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 13:04:41 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 14:13:39 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
What is the value of the first triangle number to have over five hundred divisors?
*/

#include <stdio.h>
#include <stdlib.h>

static int	count_factors(int num)
{
	int count;
	int i;
	int n = num;
	int prime = 1;

	for (i = 2; i * i <= n; i++) 
	{
		for (count = 1; n % count == 0; count++)
			n /= i;
		prime *= count;
	}
	if (n == num || n > 1)
		prime *= 2;
	return (prime);
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