/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/24 09:02:37 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/03 17:44:16 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <cstdlib>
# include <iostream>
# include <stdio.h>
# include <string>

class Zombie{
	
	private:
	std::string name;
	
	public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce(void);
	Zombie* newZombie(std::string name);
	void randomChump(std::string name);
	Zombie* zombieHorde(int N, std::string name);
	
};

#endif