/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:37:00 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 12:33:12 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanB.hpp"

HumanB::HumanB()
{	
	std::cout << "Human B: created soulless human" << std::endl;
}

HumanB::HumanB(std::string name)
{	
	this->name = name;
	std::cout << "Human B: " << name << " created" << std::endl;
}

HumanB::~HumanB()
{
	std::cout << "Human B: destroyed" << std::endl;
}
void HumanB::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}


