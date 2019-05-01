/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpapagna <rpapagna@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/11 18:24:39 by rpapagna          #+#    #+#             */
/*   Updated: 2019/05/01 07:14:54 by rpapagna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ft_pipewrench.h"
void	leakey_boi()
{
	char	*a;
	char	*b;
	char	*c;
	char	**s;
	int		i;

	a = malloc(5);
	b = malloc(5);
	c = malloc(5);
	s = malloc(sizeof(char *) * 5);
	s[0] = malloc(16);
	s[1] = malloc(16);
	s[2] = malloc(16);
	s[3] = malloc(16);
	s[4] = NULL;
	ft_strcpy(a, "hey ");
	ft_strcpy(b, "all ");
	ft_strcpy(c, "you ");
	ft_strcpy(s[0], "people wont you");
	ft_strcpy(s[1], " listen to mee\n");
	ft_strcpy(s[2], " listen to mee\n");
	ft_strcpy(s[3], " listen to mee\n");
	ft_putstr(a);
	ft_putstr(b);
	ft_putstr(c);
	ft_putstr(s[0]);
	ft_putstr(s[1]);
	ft_putstr("		^^^^^^^^^^\n\n");

	i = 0;
	i = ft_pipewrench("--s-s-s-s", s, a, b, c);
	ft_putstr("free'd items: ");
	ft_putnbr(i);
	ft_putstr("\n\n");

}
int		main(void)
{
	leakey_boi();
	system("leaks a.out");
	return (0);
}
