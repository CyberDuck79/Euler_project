/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler9.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 17:39:04 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 12:06:41 by fhenrion         ###   ########.fr       */
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

static void			gen_p_triplet(int seed, int triplet[3])
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

static void			gen_m_triplet(int mult, int p_triplet[3], int m_triplet[3])
{
	m_triplet[0] = p_triplet[0] * mult;
	m_triplet[1] = p_triplet[1] * mult;
	m_triplet[2] = p_triplet[2] * mult;
}

static int			triplet_sum(int triplet[3])
{
	return (triplet[0] + triplet[1] + triplet[2]);
}

static long long	triplet_product(int triplet[3])
{
	return (triplet[0] * triplet[1] * triplet[2]);
}

int					main(void)
{
	int			seed = 3;
	int			mult = 2;
	int			sum = 0;
	int			p_triplet[3];
	int			m_triplet[3];
	long long	product;

	while (sum != 1000)
	{
		gen_p_triplet(seed, p_triplet);
		sum = triplet_sum(p_triplet);
		/*
		printf("primitive triplet : %i,%i,%i sum : %i\n", \
		p_triplet[0], \
		p_triplet[1], \
		p_triplet[2], \
		sum);
		*/
		while (sum < 1000)
		{
			gen_m_triplet(mult, p_triplet, m_triplet);
			sum = triplet_sum(m_triplet);
			/*
			printf("multiple triplet : %i,%i,%i sum : %i\n", \
			m_triplet[0], \
			m_triplet[1], \
			m_triplet[2], \
			sum);
			*/
			mult++;
		}
		mult = 2;
		seed++;
	}
	product = triplet_product(m_triplet);
	printf("abc product : %lli\n", product);
	return (0);
}