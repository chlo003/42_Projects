_This activity has been created as part of the 42 curriculum by chlminga_

# Libft


## Descriptions
***
This activity aims to create a C language library containing general functions that will potentially be needed for future programs. This activity is divided into three parts: libc functions, Additional functions and Linked list.

1. Libc Functions

| Function name | Prototype |
| ------------ | ------------- |
| ft_islalpha | int		ft_isalpha(int c); |
| ft_isdigit | int		ft_isdigit(int c); |
| ft_islanum |int		ft_isalnum(int c); |
| ft_isascii | int		ft_isascii(int c); |
| ft_isprint | int	ft_isprint(int c); |
| ft_strlen | size_t	ft_strlen(const char *s); |
| ft_memset | void	*ft_memset(void *s, int c, size_t n); |
| ft_bzero | void	ft_bzero(void *s, size_t n); |
| ft_memcpy | void	*ft_memcpy(void *dest, const void *src, size_t n); |
| ft_memmove | void	*ft_memmove(void *dest, const void *src, size_t n); |
| ft_strlcpy | size_t	ft_strlcpy(char *dst, const char *src, size_t size); |
| fT_strlcat | size_t	ft_strlcat(char *dst, const char *src, size_t size); |
| ft_toupper | int		ft_toupper(int c); |
| ft_tolower | int		ft_tolower(int c); |
| ft_strchr | char	*ft_strchr(const char *s, int c); |
| ft_strrchr | char	*ft_strrchr(const char *s, int c); |
| ft_strncmp | int		ft_strncmp(const char *s1, const char *s2, size_t n); |
| ft_memchr | void	*ft_memchr(const void *s, int c, size_t n); |
| ft_memcmp | int		ft_memcmp(const void *s1, const void *s2, size_t n); |
| ft_strnstr | char	*ft_strnstr(const char *big, const char *little, size_t len); |
| ft_atoi | int		ft_atoi(const char *str); |
| ft_calloc | void	*ft_calloc(size_t count, size_t size); |
| ft_strdup | char	*ft_strdup(const char *s1); |

2. Additional Functions

| Function name | Prototype |
| ------------- | --------- |
| ft_substr | char *ft_substr(char const *s, unsigned int start, size_t len); |
| ft_strjoin | char *ft_strjoin(char const *s1, char const *s2); |
| ft_strtrim | char *ft_strtrim(char const *s1, char const *set); |
| ft_split | char **ft_split(char const *s, char c); |
| ft_itoa | char *ft_itoa(int n); |
| ft_strmapi | char *ft_strmapi(char const *s, char (*f)(unsigned int, char)); |
| ft_striteri | void ft_striteri(char *s, void (*f)(unsigned int, char*)); |
| ft_putchar_fd | void ft_putchar_fd(char c, int fd); |
| ft_putstr_fd | void ft_putstr_fd(char *s, int fd); |
| ft_putendl_fd | void ft_putendl_fd(char *s, int fd); |
| ft_putnbr_fd | void ft_putnbr_fd(int n, int fd); |

3. Linked list

| Function name | Prototype |
| ------------- | --------- |
| ft_lstnew | t_list *ft_lstnew(void *content); |
| ft_lstadd_front | void ft_lstadd_front(t_list **lst, t_list *new); |
| ft_lstsize | int ft_lstsize(t_list *lst); |
| ft_lstlast | t_list *ft_lstlast(t_list *lst); |
| ft_lstadd_back | void ft_lstadd_back(t_list **lst, t_list *new); |
| ft_lstdelone | void ft_lstdelone(t_list *lst, void (*del)(void *)); |
| ft_lstclear | void ft_lstclear(t_list **lst, void (*del)(void *)); |
| ft_lstiter | void ft_lstiter(t_list *lst, void (*f)(void *)); |
| ft_lstmap | t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *)); |


## Instructions
***
###### Installation : Git clone
`git clone https://github.com/42learners/Common-Core---Libft-26a203ab-7384-480e-9967-203a955cabba.git`
###### Compilation : Use of flags
`gcc -Wall -Wextra -Werror`

Other command can be found in the Makefile.

## Ressources
***
Website  : Inonos digital guide, etc ...

Peers    : fgodinho / emilye / apataut / zelezin / hortmart / pthevaku / iel-bah