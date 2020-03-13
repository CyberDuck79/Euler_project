/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler6.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 08:56:40 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/13 09:07:45 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The sum of the squares of the first ten natural numbers is 385
The square of the sum of the first ten natural numbers is 3025
Hence the difference between the sum of the squares of the first ten natural
numbers and the square of the sum is 3025−385=2640
Find the difference between the sum of the squares of the first one hundred
natural numbers and the square of the sum.
*/

#include <math.h>
#include <stdio.h>

int		main(void)
{
	long long	squares_sum = 0;
	long long	sum_square = 0;

	for (long long nb = 1; nb <= 100; nb++)
	{
		squares_sum += (nb * nb);
		sum_square += nb;
	}
	sum_square *= sum_square;
	printf("sum of squares : %lli\n", squares_sum);
	printf("square of sum : %lli\n", sum_square);
	printf("difference : %lli\n", sum_square - squares_sum);
	return (0);
}