/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:47:47 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/23 11:11:11 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "libft.h"

//void	*ft_memset(void *b, int c, size_t len);
//void	ft_bzero(void *s, size_t n);
//void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
//void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);
//void	*ft_memmove(void *dst, const void *src, size_t len);

int main() 
{ 
    char ms[50] = "GeeksForGeeks is for programming geeks."; 
    printf("Before memset():    %s\n", ms); 
    memset(ms + 13, '.', 8*sizeof(char)); 
    printf("After memset():     %s\n\n", ms); 

	char ms2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before ft_memset(): %s\n", ms2);
	ft_memset(ms2 + 13, '.', 8*sizeof(char));
	printf("After ft_memset():  %s\n\n", ms2);
	

	char bz[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before bzero():    %s\n", bz);
	bzero(bz + 13, 8*sizeof(char));
	printf("After bzero():     %s\n", bz);
	printf("Size: %lu\n\n", sizeof(bz));

	char bz2[50] = "GeeksForGeeks is for programming geeks.";
	printf("Before ft_bzero(): %s\n", bz2);
	ft_bzero(bz2 + 13, 8*sizeof(char));
	printf("After ft_bzero():  %s\n", bz2);
	printf("Size: %lu\n\n", sizeof(bz2));
	

	const char mcpy[50] = "http://www.tutorialspoint.com";
	char mcpydst[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before memcpy dest    = %s\n", mcpydst);
	memcpy(mcpydst, mcpy, strlen(mcpy)+1);
	printf("After memcpy dest     = %s\n\n", mcpydst);

	const char mcpy2[50] = "http://www.tutorialspoint.com";
	char mcpydst2[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before ft_memcpy dest = %s\n", mcpydst2);
	ft_memcpy(mcpydst2, mcpy2, strlen(mcpy2)+1);
	printf("After ft_memcpy dest  = %s\n\n", mcpydst2);


	const char mcc[50] = "fttp://www.tutorialspoint.com";
	char mccdst[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before memccpy dst:    %s\n", mccdst);
	memccpy(mccdst, mcc, 'f', strlen(mcc)+1);
	printf("After memccpy dst:     %s\n\n", mccdst);

	const char mcc2[50] = "fttp://www.tutorialspoint.com";
	char mccdst2[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before ft_memccpy dst: %s\n", mccdst2);
	ft_memccpy(mccdst2, mcc2, 'f', strlen(mcc2)+1);
	printf("After ft_memccpy dst:  %s\n\n", mccdst2);


	char mm[100] = "Geeksfor";
	memmove(mm+5, mm, strlen(mm));
	printf("memmove:    %s\n", mm);

	char mm2[100] = "Geeksfor";
	ft_memmove(mm2+5, mm2, strlen(mm2));
	printf("ft_memmove: %s\n\n", mm2);
	

	char mc[100] = "Geeksfor";
	memcpy(mc+5, mc, strlen(mc)+1);
	printf("memcpy:    %s\n", mc);

	char mc2[100] = "Geeksfor";
	ft_memcpy(mc2+5, mc2, strlen(mc2)+1);
	printf("ft_memcpy: %s\n\n", mc2);


	char mchr[100] = "Geeksfor";
	memchr(mchr, 's', strlen(mchr));
	printf("memchr:    %s\n", mchr);

	char mchr2[100] = "Geeksfor";
	ft_memchr(mchr2, 's', strlen(mchr2));
	printf("ft_memchr: %s\n\n", mchr2);



    return (0); 
}

/*
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;

	dst = b;
	while (len--)
		*dst++ = (unsigned char) c;
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char *dst;

	dst = s;
	while (n--)
		*dst++ = 0;
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *csrc;
	unsigned char *cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	while(n--)
		*cdst++ = *csrc++;
	return (dst);
}

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	*cdst = *csrc;
	while (n-- && *csrc != c)
		*cdst++ = *csrc++;

	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char 	*csrc;
	unsigned char 	*cdst;
	unsigned char 	temp[len];
	int				i;
	
	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	while(len--)
		temp[i++] = *csrc++;
	i = 0;
	while(temp[i])
		*cdst++ = temp[i++];

	return (dst);
}
*/
