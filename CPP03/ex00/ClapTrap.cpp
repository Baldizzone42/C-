/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 12:23:28 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/13 16:53:31 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"


ClapTrap::ClapTrap() : Name("Esbirro"), Hit_points(10), Energy_points(10), Attack_damage(0)
{
	std::cout << "Default Constructor" << std::endl;

}

ClapTrap::~ClapTrap(){
	std::cout << "Distroyed " << Name << std::endl;
}

ClapTrap::ClapTrap(std::string name) : Name(name), Hit_points(10), Energy_points(10), Attack_damage(0)
{

	std::cout << "Constructor "  << name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	std::cout << "ClapTrap copy constructor called" << std::endl;
    this->Name = other.Name;
    this->Energy_points = other.Energy_points;
    this->Attack_damage = other.Attack_damage;
    this->Hit_points = other.Hit_points;
}

ClapTrap &ClapTrap::operator=(const ClapTrap& other)
{
	
}

//ClapTrap <name> attacks <target>, causing <damage> points of damage!

void ClapTrap::attack(const std::string& target)
{
	std::cout << "Claptrap " << this->Name << " attacks " << target << " causing " << this->Attack_damage << " points of damage" << std::endl;
	this->Energy_points -= 1;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "Claptrap " << this->Name << " take damage " << " loosing " << amount << " points of health" << std::endl;
	this->Hit_points -= amount;
	if(this->Hit_points <= 0)
	{
		std::cout << "Claptrap " << this->Name << " lost all his life points" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	std::cout << "Claptrap " << this->Name << " has been repaired " << amount << "points of health" << std::endl;
	if(this->Hit_points == 10 || this->Hit_points == 0)
		return ;
	else if(this->Hit_points += amount >= 10)
		this->Hit_points = 10;
	else 
		this->Hit_points = this->Hit_points + amount;
	std::cout << "Stadistic " << this->Name << std::endl;
	std::cout << "Health " << this->Hit_points << " Energy points " << this->Energy_points << std::endl;
}






