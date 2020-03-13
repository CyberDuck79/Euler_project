/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler8.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/13 15:11:19 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/13 17:37:30 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
The four adjacent digits in the 1000-digit number that have the greatest product are 9 × 9 × 8 × 9 = 5832.
Find the thirteen adjacent digits in the 1000-digit number that have the greatest product. What is the value of this product?
*/

#include <stdio.h>
#include <stdlib.h>

char	*num_str[] = {
	"73167176531330624919225119674426574742355349194934",
	"96983520312774506326239578318016984801869478851843",
	"85861560789112949495459501737958331952853208805511",
	"12540698747158523863050715693290963295227443043557",
	"66896648950445244523161731856403098711121722383113",
	"62229893423380308135336276614282806444486645238749",
	"30358907296290491560440772390713810515859307960866",
	"70172427121883998797908792274921901699720888093776",
	"65727333001053367881220235421809751254540594752243",
	"52584907711670556013604839586446706324415722155397",
	"53697817977846174064955149290862569321978468622482",
	"83972241375657056057490261407972968652414535100474",
	"82166370484403199890008895243450658541227588666881",
	"16427171479924442928230863465674813919123162824586",
	"17866458359124566529476545682848912883142607690042",
	"24219022671055626321111109370544217506941658960408",
	"07198403850962455444362981230987879927244284909188",
	"84580156166097919133875499200524063689912560717606",
	"05886116467109405077541002256983155200055935729725",
	"71636269561882670428252483600823257530420752963450",
	NULL
};

static void			convert(int **int_str)
{
	int		x, y;
	size_t	len = 0;

	for (y = 0; num_str[y]; y++)
		for (x = 0; num_str[y][x]; x++)
			len++;
	if ((*int_str = malloc(sizeof(int) * (len + 1))) == NULL)
		return ;
	len = 0;
	for (y = 0; num_str[y]; y++)
	{
		for (x = 0; num_str[y][x]; x++)
		{
			(*int_str)[len] = num_str[y][x] - 48;
			len++;
		}
	}
	(*int_str)[len] = -1;
}

static long long	do_mult(int *int_str, long long mult)
{
	int count = 0;

	while (count < 13)
		if (int_str[count++] == 0)
			return (0);
	if (mult == 0)
	{
		mult = 1;
		count = 0;
		while (count < 13)
			mult *= int_str[count++];
	}
	else
	{
		mult /= int_str[-1];
		mult *= int_str[12];
	}
	return (mult);
}

int					main(void)
{
	int			*int_str;
	long long	mult = 0;
	long long	result = 0;

	convert(&int_str);
	if (int_str == NULL)
		return (EXIT_FAILURE);
	while (int_str[12] >= 0)
	{
		mult = do_mult(int_str, mult);
		if (mult > result)
			result = mult;
		int_str++;
	}
	printf("%lli\n", result);
	return (EXIT_SUCCESS);
}