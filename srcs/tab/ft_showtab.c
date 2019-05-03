/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_showtab.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cempassi <cempassi@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/23 19:49:20 by cempassi          #+#    #+#             */
/*   Updated: 2019/05/04 00:42:08 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

void	ft_showtab(char **t)
{
	if (!t || !*t)
		return ;
	while (*t)
		ft_printf("%s|",*t++);
	ft_putchar('\n');
}