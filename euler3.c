/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 12:13:31 by fhenrion          #+#    #+#             */
/*   Updated: 2019/12/26 10:28:05 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The prime factors of 13195 are 5, 7, 13 and 29.
What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

int		next_prime()
{
	int			prime = 3;
	static int	nb = 1;

	nb += 2;
	while (prime <= sqrt(nb))
	{
		if (!(nb % prime))
			nb += 2;
		prime += 2;
	}
	return (nb);
}

int		main(void)
{
	long	nb = 600851475143;
	int		prime;

	while (nb != 1)
	{
		prime = next_prime();
		if (!(nb % prime))
			nb /= prime;
	}
	printf("result : %i\n", prime);
	return (0);
}