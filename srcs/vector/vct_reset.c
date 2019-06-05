/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vct_reset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/05 09:49:19 by skuppers          #+#    #+#             */
/*   Updated: 2019/06/05 09:50:33 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.h"

/*
**	Resets the specified vector, to the default size and scale.
**	This erases the holded content.
**	Returns 0 on success or -1 on allocation error.
*/

int8_t        vct_reset(t_vector *vector)
{
    char *new;

	if (!(new = ft_strnew(DEFAULT_VECTOR_SIZE)))
		return (-1);
	ft_strdel(&(vector->buffer));
	vector->buffer = new;
	vector->size = DEFAULT_VECTOR_SIZE;
    vector->scale = DEFAULT_VECTOR_SCALE;
	return (0);
}