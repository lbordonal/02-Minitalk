/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minitalk.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lbordona <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 12:11:33 by lbordona          #+#    #+#             */
/*   Updated: 2022/12/08 17:18:44 by lbordona         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINITALK_H
# define MINITALK_H

# include <stdlib.h>
# include <unistd.h>
# include <strings.h>
# include <signal.h>
# include <sys/types.h>

/*server.c*/

/*client.c*/

/* minitalk_utils.c */
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
int		ft_atoi(const char *nptr);
int		ft_isstringdigit(char *string);
int		ft_isdigit(int c);
#endif