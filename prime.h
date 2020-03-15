/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   prime.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fhenrion <fhenrion@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/15 12:11:38 by fhenrion          #+#    #+#             */
/*   Updated: 2020/03/15 12:13:45 by fhenrion         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRIME_H
# define PRIME_H

typedef enum	e_bool
{
	false,
	true
}				t_bool;

int		next_prime(void);

#endif