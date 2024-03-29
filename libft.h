/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user42 <user42@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/07 14:06:26 by mclaudel          #+#    #+#             */
/*   Updated: 2020/05/26 14:39:59 by user42           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
	void			*content;
	struct s_list	*next;
}				t_list;

typedef struct	s_dict
{
	char			*key;
	void			*value;
	struct s_dict	*next;
}				t_dict;

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *st, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int	ft_memcmp(const void *s1, const void *s2, size_t n);
size_t	ft_strlen(const char *s);
int	ft_isalpha(int c);
int	ft_isdigit(int c);
int	ft_isalnum(int c);
int	ft_isascii(int c);
int	ft_atoi(const char *str);
int	ft_isprint(int c);
int	ft_toupper(int c);
int	ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
int	ft_strncmp(const char *s1, const char *s2, size_t n);
int	ft_strcmp(const char *s1, const char *s2);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t dstsize);
char	*ft_strnstr(const char *haystack, const char *needle,
					size_t len);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	*ft_strreplace(char const *s1, unsigned int start,
										size_t len, char const *sub);
char	**ft_split(char const *s, char c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
int	ft_intlen(int n);
int	ft_max(int a, int b);
int	ft_min(int a, int b);
float	ft_atof(const char *s);
int	ft_isspace(char c);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **alst, t_list *n);
int	ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **alst, t_list *n);
t_list*	ft_lstaddnew_back(t_list **alst, void* content);
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *),
					void (*del)(void *));
void	ft_lstsort(t_list **lst, int (*f)(void*, void*));

t_dict	*ft_dictnew(char *key, void *value);
void	ft_dictadd(t_dict **dict, t_dict *n);
void	*ft_dictget(t_dict *dict, char *key);
t_dict	*ft_dictgetindex(t_dict *dict, int i);
void	ft_dictclear(t_dict *dict, void (*del)(void *));
int	ft_dictsize(t_dict *dict);
void	ft_dictdelone(t_dict *dict, void (*del)(void *));
void	ft_dictrem(t_dict **dict, char *key, void (*del)(void *));

// ft_printf
int		ft_printf(const char *s, ...);

// ft_getopt_long exposes certain variabes for other program to use
typedef struct s_options
{
	const char *name;
	int         has_arg;
	int        *flag;
	int         val;
} t_options;

int 	ft_getopt_long(int ac, const char* av[], const char* opstring, const t_options *longopts, int* longindex);
extern char* ft_optarg;
extern int optind, opterr, optopt;

#endif
