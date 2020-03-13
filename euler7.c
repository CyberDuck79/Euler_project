/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:08:37 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/13 09:38:30 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/


// revoir l'algo pour les nombres premier :/

#include <math.h>
#include <stdio.h>

int		next_prime()
{
	long long			prime = 3;
	static long long	nb = 1;

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
	int			count = 0;
	long long	nb;

	while (count != 19)
	{
		nb = next_prime();
		printf("%i : %lli\n", count, nb);
		count++;
	}
	printf("%lli\n", nb);
	return (0);
}