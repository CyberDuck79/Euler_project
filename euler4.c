/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 10:29:51 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/10 11:36:17 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

typedef enum	e_result
{
	NO,
	YES
}				t_result;

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static int	is_palindromic(const char *result)
{
	size_t	len = strlen(result);
	size_t	index = 0;
	size_t	middle;

	if (len == 0)
		return (NO);
	middle = len / 2;
	while (index < middle)
	{
		len--;
		if (result[index] != result[len])
			return (NO);
		index++;
	}
	return (YES);
}

int			main(void)
{
	long long	numbers[2];
	char		string[7];
	long long	results[4];

	bzero(results, sizeof(results));
	for (numbers[0] = 999; numbers[0] > 99; numbers[0]--)
	{
		for (numbers[1] = numbers[0]; numbers[1] > 99; numbers[1]--)
		{
			bzero(string, sizeof(string));
			sprintf(string, "%lli", numbers[0] * numbers[1]);
			//printf("%lli * %lli = %s\n", numbers[0], numbers[1], string);
			if (is_palindromic(string) == YES)
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
	printf("%lli\n", results[2]);
	return (0);
}