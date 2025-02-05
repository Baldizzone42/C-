/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 10:10:20 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/03 17:47:11 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie a;
	a.randomChump("Parker");
	Zombie *b = a.newZombie("Wanillo el fugas");
	delete b;

	//a.randomChump("Parker");
	//b.newZombie("");
	/* Zombie *b = NULL;
	b->newZombie("Wanillo el fugas");
	delete b; */
}