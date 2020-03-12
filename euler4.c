/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 10:29:51 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/12 21:30:52 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef enum	e_bool
{
	false,
	true
}				t_bool;

static t_bool	is_palindromic(const char *result)
{
	size_t	len = strlen(result);
	size_t	index = 0;
	size_t	middle = len / 2;;

	while (index < middle)
	{
		len--;
		if (result[index] != result[len])
			return (false);
		index++;
	}
	return (true);
}

int				main(void)
{
	long long	numbers[2];
	char		string[7];
	long long	results[4];

	bzero(results, sizeof(results));
	for (numbers[0] = 999; numbers[0] > 99; numbers[0]--)
	{
		for (numbers[1] = numbers[0]; numbers[1] > 99; numbers[1]--)
		{
			sprintf(string, "%lli", numbers[0] * numbers[1]);
			if (is_palindromic(string) == true)
			{
				if ((results[3] = atoll(string)) > results[2])
				{
					results[2] = results[3];
					results[0] = numbers[0];
					results[1] = numbers[1];
				}
				else if (numbers[0] <= results[0] && numbers[1] >= results[1])
					bzero(numbers, sizeof(numbers));
			}
		}
	}
	printf("%lli * %lli = %s\n", results[0], results[1], results[2]);
	return (0);
}