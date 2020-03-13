/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 17:39:04 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/13 18:50:57 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A Pythagorean triplet is a set of three natural numbers, a < b < c, for which,
a² + b² = c²
For example, 3² + 4² = 9 + 16 = 25 = 5².
There exists exactly one Pythagorean triplet for which a + b + c = 1000.
Find the product abc.
*/

#include <stdio.h>
#include <strings.h>
#include <math.h>

static void	gen_primitive_triplet(int seed, int triplet[3])
{
	triplet[0] = seed;
	if (seed % 2)
	{
		triplet[1] = ((seed * seed) - 1) / 2;
		triplet[2] = ((seed * seed) + 1) / 2;
	}
	else
	{
		triplet[1] = ((seed / 2) * (seed / 2)) - 1;
		triplet[2] = ((seed / 2) * (seed / 2)) + 1;
	}
}

static void	gen_multiple_triplet(int mult, int triplet[2])
{
	triplet[0] *= 2;
	triplet[1] *= 2;
	triplet[2] *= 2;
}

int			main(void)
{
	int	seed = 3;
	int mult = 2;
	int sum = 0;
	int	triplet[3];

	while (sum != 1000)
	{
		gen_primitive_triplet(seed, triplet);
		sum = (triplet[0] + triplet[1] + triplet[2]);
		printf("primitive triplet : %i,%i,%i sum : %i\n", triplet[0], triplet[1], triplet[2], sum);
		while (sum < 1000)
		{
			gen_multiple_triplet(mult, triplet);
			sum = (triplet[0] + triplet[1] + triplet[2]);
			printf("multiple triplet : %i,%i,%i sum : %i\n", triplet[0], triplet[1], triplet[2], sum);
			mult++;
		}
		mult = 2;
		seed++;

	}
	return (0);
}