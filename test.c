/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:47:47 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/21 17:26:46 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n);
void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n);

int main() 
{ 
	/*
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After memset():  %s", str); 

	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str2);

	ft_memset(str2 + 13, '.', 8*sizeof(char));

	printf("After memset():  %s", str2);
	

	char str3[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str3);

	bzero(str3 + 13, 8*sizeof(char));

	printf("After bzero():  %s\n", str3);
	printf("Size: %lu", sizeof(str3));

	char str4[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore bzero(): %s\n", str4);

	ft_bzero(str4 + 13, 8*sizeof(char));

	printf("After bzero():  %s\n", str4);
	printf("Size: %lu", sizeof(str4));
	
	const char src[50] = "http://www.tutorialspoint.com";
	char dest[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before memcpy dest = %s\n", dest);
	memcpy(dest, src, strlen(src)+1);
	printf("After memcpy dest  = %s\n", dest);

	const char src2[50] = "http://www.tutorialspoint.com";
	char dest2[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before memcpy dest = %s\n", dest2);
	ft_memcpy(dest2, src2, strlen(src2)+1);
	printf("After memcpy dest  = %s\n", dest);
	*/

	const char src[50] = "fttp://www.tutorialspoint.com";
	char dst[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before memccpy dst: %s\n", dst);
	memccpy(dst, src, 'f', strlen(src)+1);
	printf("After memccpy dst:  %s\n", dst);

	const char src2[50] = "fttp://www.tutorialspoint.com";
	char dst2[50] = "Hellllloooooooooooooooooooooooooooooooooooo!!";
	printf("Before memccpy dst: %s\n", dst2);
	ft_memccpy(dst2, src2, 'f', strlen(src2)+1);
	printf("After memccpy dst:  %s\n", dst2);

    return 0; 
}

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char *dst;

	dst = b;

	while (len > 0)
	{
		*dst = (unsigned char) c;
		dst++;
		len--;
	}
	return (b);
}

void	ft_bzero(void *s, size_t n)
{
	unsigned char *dst;

	dst = s;

	while (n)
	{
		*dst = 0;
		dst++;
		n--;
	}
}

void	*ft_memcpy(void *restrict dst, const void *restrict src, size_t n)
{
	unsigned char *csrc;
	unsigned char *cdst;
	int i;

	cdst = (unsigned char *)dst;
	csrc = (unsigned char *)src;
	i = 0;
	while(i < n)
	{
		cdst[i] = csrc[i];
		i++;
	}
	return (dst);
}

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	unsigned char	*csrc;
	unsigned char	*cdst;
	int				i;

	csrc = (unsigned char *)src;
	cdst = (unsigned char *)dst;
	i = 0;
	cdst[i] = csrc[i];
	while (i < n && csrc[i] != c)
	{
		i++;
		cdst[i] = csrc[i];
	}

	return (dst);
}
