/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sconstab <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/21 07:47:47 by sconstab          #+#    #+#             */
/*   Updated: 2019/05/21 08:50:45 by sconstab         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

void	*ft_memset(void *b, int c, size_t len);

int main() 
{ 
    char str[50] = "GeeksForGeeks is for programming geeks."; 
    printf("\nBefore memset(): %s\n", str); 
  
    // Fill 8 characters starting from str[13] with '.' 
    memset(str + 13, '.', 8*sizeof(char)); 
  
    printf("After memset():  %s", str); 

	char str2[50] = "GeeksForGeeks is for programming geeks.";
	printf("\nBefore memset(): %s\n", str2);

	ft_memset(str2 + 13, '.', 8*sizeof(char));

	printf("After memset():  %s", str2);
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
