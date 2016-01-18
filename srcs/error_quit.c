/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_quit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/29 19:32:12 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/18 17:30:01 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rainbower.h"

void	error_quit(char *error_message)
{
	ft_putstr_fd("\033[1;31m", 2);
	ft_putstr_fd("An error happened: ", 2);
	ft_putendl_fd(error_message, 2);
	ft_putstr_fd("\033[0;0m", 2);
	exit(-1);
}
