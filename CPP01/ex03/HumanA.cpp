/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:37:12 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 16:10:08 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include "HumanA.hpp"

HumanA::HumanA()
{
	std::cout << "Human A: created soulless human" << std::endl;
}

HumanA::HumanA(std::string name, Weapon &weapon)
{
	this->name = name;
	this->weapon = &weapon;
	std::cout << "Human A: " << name << ": created with " << weapon.getType() << std::endl;
}

void HumanA::attack(void)
{
	std::cout << name << " attacks with their " << weapon->getType() << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "Human A: destroyed" << std::endl;
}
