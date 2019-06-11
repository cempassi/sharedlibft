/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffoissey <ffoissey@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/19 21:55:01 by ffoissey          #+#    #+#             */
/*   Updated: 2019/06/07 16:23:20 by cempassi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# define BUFF_SIZE 4096
# define BASE_MAX 66
# include <string.h>
# include "ft_printf.h"
# include "ft_malloc.h"
# include "list.h"
# include "directory.h"
# include "str.h"
# include "memory.h"
# include "output.h"
# include "conversion.h"
# include "test.h"
# include "other.h"
# include "hashmap.h"
# include "vector.h"

void				ft_freetab(char ***t);
char				**ft_getargstab(int ac, char **av);
void				ft_showtab(char **t);
int					ft_taboneach(char **current, void *context
								, char *(*mod)(char *, void *));
int					ft_getopt(int ac, char **av, const char *optstr);
#endif
