/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:09:18 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 12:19:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The sum of the primes below 10 is 2 + 3 + 5 + 7 = 17.
Find the sum of all the primes below two million.
*/

#include <math.h>
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "prime.h"

typedef unsigned long long ull;

int		main(void)
{
	ull	sum = 0;
	int	prime = 2;

	while (prime < 2000000)
	{
		sum += prime;
		prime = next_prime();
	}
	printf("sum of all the primes below two million : %llu\n", sum);
}