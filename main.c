/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:24:39 by rpapagna          #+#    #+#             */
/*   Updated: 2019/04/11 21:31:56 by rpapagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_pipewrench.h"

int		main(void)
{
//	char *a, *b, *c;
//	a = malloc(4);
//	b = malloc(4);
//	c = malloc(4);
//	system("leaks a.out");
//	ft_putstr("\n\n\n		^^^^^^^^^^\n\n");
//	int i = ft_pipewrench("-s-s-s", a, b, c);
//	a = malloc(4);
//	b = malloc(4);
//	c = malloc(4);
//	system("leaks a.out");
//	ft_putstr("\n\n\n		^^^^^^^^^^\n\n");
//	system("leaks a.out");
//	ft_putchar('\n');
//	c = ft_itoa(i);
//	ft_putstr(c);

	char **s = malloc(3);

	s[0] = malloc(30);
	s[1] = malloc(30);
	s[2] = malloc(30);
	ft_pipewrench("--s", s);
	system("leaks a.out");
	s[0] = malloc(1);

	return (0);
}
