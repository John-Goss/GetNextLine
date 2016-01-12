/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jle-quer <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 12:19:59 by jle-quer          #+#    #+#             */
/*   Updated: 2015/12/03 11:58:24 by jle-quer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	i;
	size_t			cpt;

	i = (unsigned char)c;
	cpt = 0;
	while (cpt < len)
	{
		((char *)b)[cpt] = i;
		cpt++;
	}
	return (b);
}
