/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   euler4.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/26 10:29:51 by fhenrion          #+#    #+#             */
/*   Updated: 2019/12/26 10:38:01 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
A palindromic number reads the same both ways.
The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.
Find the largest palindrome made from the product of two 3-digit numbers.
*/

#include <stdio.h>

int		main(void)
{
	int		number_1 = 100;
	int		number_2 = 100;
	char	*string[30];

	sprintf(string,"%li",number_1 * number_2);
	

	return (0);
}