/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aim1c <aim1c@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/04 13:24:02 by aim1c             #+#    #+#             */
/*   Updated: 2019/07/04 13:48:30 by aim1c            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int ft_putchar(char c);

 void ft_print_alphabet(void)
 {
	char a;

	a = 'a';
	while (a <= 'z')
	{
		ft_putchar(a);
		a++;
	}
 }

int main()
{
	ft_print_alphabet();
}
