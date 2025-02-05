/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jormoral <jormoral@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/04 08:35:32 by jormoral          #+#    #+#             */
/*   Updated: 2025/02/04 11:59:32 by jormoral         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string>


class Weapon
{
	private:
		std::string		type;
		
	public:
	Weapon();
	Weapon(std::string type);
	~Weapon();
	const std::string getType(void);
	void setType(std::string type);
	
};


#endif