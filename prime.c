/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:12:42 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 12:13:42 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "prime.h"

static int	is_prime(long nb) {
	long	test;

	for (test = 3; test * test <= nb; test += 2)
		if (nb % test == 0)
			return (false);
	return (true);
}

int			next_prime(void)
{
	static long	prime = 3;

	while (is_prime(prime) == false)
		prime += 2;
	prime += 2;
	return (prime - 2);
}
