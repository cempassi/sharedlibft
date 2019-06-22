/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flush_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skuppers <skuppers@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/07 15:53:59 by skuppers          #+#    #+#             */
/*   Updated: 2019/05/07 15:54:09 by skuppers         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_malloc.h"

void		ft_flush_memory(uint8_t opt)
{
	(void)opt;
	ft_get_head_list_allocation(FLUSH_MEMORY | opt);
}
