/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vzamyati <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/10/30 14:26:46 by vzamyati          #+#    #+#             */
/*   Updated: 2017/11/08 18:09:05 by vzamyati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

#include <stdlib.h>

char	*ft_strcpy(char *dest, const char *src);
char	*ft_strdup(const char *s1);
char	*ft_strncpy(char *dst, const char *src, size_t len);
char	*ft_strnew(size_t size);
char 	*ft_strmap(char const *s,char (*f)(char));
char 	*ft_strmapi(char const *s,char (*f)(unsigned int, char));
char	*ft_strsub(char const *s, unsigned int start, size_t len);
char 	*ft_strjoin(char const *s1,char const *s2);
char	*ft_strtrim(char const *s);
void	ft_putnbr(int n);
void	ft_putendl(char const *s);
void	ft_putstr(char const *str);
void	ft_putchar(char c);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *str, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_strdel(char **as);
void	ft_strclr(char *s);
void	ft_striter(char *s,void (*f)(char *));
void	ft_striteri(char *s,void (*f)(unsigned int, char *));
void	ft_memdel(void **ap);
void	*ft_memset(void *b, int c, size_t len);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memchr (const void *s, int c, size_t n);
void	*ft_memalloc(size_t size);
void	ft_bzero(void *s, size_t n);
size_t	ft_strlen(const char *s);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
int     ft_strcmp(const char *s1, const char *s2);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
int		ft_isprint(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
int		ft_atoi(const char *str);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
int		ft_strequ(char const *s1,char const *s2);
int		ft_strnequ(char const *s1,char const *s2, size_t n);

#endif
