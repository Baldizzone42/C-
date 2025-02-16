/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:23:32 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/12 14:18:28 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap zombi("Pepe");
	ClapTrap zombiname("wanito");
	zombi.attack("wanito");
	//zombi.takeDamage(6);
	//zombi.beRepaired(3);
	zombiname.beRepaired(1);
}