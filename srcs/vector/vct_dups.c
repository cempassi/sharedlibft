/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_dups.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nrechati <nrechati@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:29:35 by nrechati          #+#    #+#             */
/*   Updated: 2019/07/03 17:01:39 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Allocate a new vector and set the internal buffer to a copy of the
** 	specified string.
**	Returns a pointer on success or NULL on malloc error.
*/

t_vector	*vct_dups(char *str)
{
	t_vector	*new;
	uint64_t	len;

	if (str == NULL)
		return (NULL);
	len = ft_strlen(str);
	if ((new = vct_new(len)) == NULL)
		return (NULL);
	vct_scpy(new, str, len);
	return (new);
}
