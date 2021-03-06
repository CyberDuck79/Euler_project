/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler7.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 09:08:37 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 12:13:59 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that the 6th prime is 13.
What is the 10 001st prime number?
*/


// revoir l'algo pour les nombres premier :/

#include <math.h>
#include <stdio.h>
#include "prime.h"

int		main(void)
{
	long long	nb;
	int			count = 1;

	//printf("%i : %i\n", 1, 2);
	while (count != 10001)
	{
		nb = next_prime();
		//printf("%i : %lli\n", count + 1, nb);
		count++;
	}
	printf("%lli\n", nb);
	return (0);
}