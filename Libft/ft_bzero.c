/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 11:59:34 by jle-quer          #+#    #+#             */
/*   Updated: 2015/11/30 12:17:07 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t cpt;

	cpt = 0;
	if (n > 0)
	{
		while (cpt < n)
		{
			((char *)s)[cpt] = '\0';
			cpt++;
		}
	}
}
