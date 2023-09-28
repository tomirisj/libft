#ifndef LIBFT_H
# define LIBFT_H
#include <stdio.h>

void ft_bzero(void *s, size_t i);
int	ft_isalnum(int c);
int ft_isalpha(int c);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isprint(int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
void ft_memset(void *str, int c, size_t n);
char *ft_strchr(const char *s, int c);
void ft_strlcat (char *dest, const char *src, size_t n);
void ft_strlcpy(char * dest, const char * src, size_t n);
int ft_strlen(char *str);
int ft_tolower (int c);
int ft_toupper(int c);
char *ft_strrchr(const char *s, int c);
int	ft_strncmp(char *s1, char *s2, unsigned int n);
void *ft_memchr(const void *s, int c, size_t n);
int ft_memcmp(const void *s1, const void *s2, size_t n);
void * ft_calloc (size_t nmemb, size_t size);
char *ft_strdup(char *s1);
char *ft_substr(char const *s, unsigned int start, size_t len);
int	ft_atoi(char *str);

#endif