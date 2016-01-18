/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: acazuc <acazuc@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/18 17:21:36 by acazuc            #+#    #+#             */
/*   Updated: 2016/01/18 18:13:30 by acazuc           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rainbower.h"

int		main(int ac, char **av)
{
	/*char *colors[8] = {"\\e[0;35m", "\\e[1;34m", "\\e[1;36m", "\\e[1;32m", "\\e[0;33m", "\\e[1;31m"};
	int color_number = 6;
	if (ac != 2)
		error_quit("you must specify a file name");
	char *file = get_file_content(av[1]);
	if (!file)
	{
		error_quit("Bad file");
	}
	int i = 0;
	while (file[i])
	{
		write(1, colors[i % color_number], 8);
		write(1, file + i, 1);
		i++;
	}*/
	(void)ac;
	char *file = get_file_content(av[1]);
	int i = 0;
	while (file[i])
	{
		if (file[i] == 'e' && file[i - 1] == '\\')
		{
			write(1, "033[", 4);
			i++;
		}
		else
			write(1, file + i, 1);
		i++;
	}
}
